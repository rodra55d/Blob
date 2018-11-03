#include <stdio.h>
#include <stdlib.h>

#include <IL/il.h>
#include <IL/ilu.h>

#include "texture.h"

void textureLoadFromFile(struct Texture *tex, const char *filename)
{
	ILuint id = 0;
	ilGenImages(1, &id);
	ilBindImage(id);

	ILboolean success = ilLoadImage(filename);
	if(!success) {
		fprintf(stderr, "Unable to load texture: %s\n",
			filename);
		exit(EXIT_FAILURE);
	}

	success = ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
	if(!success) {
		fprintf(stderr, "Unable to convert texture.\n");
		exit(EXIT_FAILURE);
	}

	// load 
	textureLoadFromPixel32(tex, (GLuint *)ilGetData(),
		(GLuint)ilGetInteger(IL_IMAGE_WIDTH),
		(GLuint)ilGetInteger(IL_IMAGE_HEIGHT));

	ilDeleteImages(1, &id);
}

void textureLoadFromPixel32(struct Texture *tex, GLuint *pixels,
		GLuint w, GLuint h)
{
	// free previous texture
	textureFree(tex);

	// set width and height
	tex->w = w;
	tex->h = h;

	// generate id
	glGenTextures(1, &tex->id);
	
	// bind texture
	glBindTexture(GL_TEXTURE_2D, tex->id);

	// generate texture
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h,
		0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);

	// set texture parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	
	// unbind texture
	glBindTexture(GL_TEXTURE_2D, 0);

	// check for errors
	GLenum error = glGetError();
	if (error != GL_NO_ERROR) {
		fprintf(stderr, "error loading texture: %s\n",
			gluErrorString(error));
		exit(EXIT_FAILURE);
	}
}

void textureFree(struct Texture *tex)
{
	if (tex->id == 0) {
		return;
	}

	glDeleteTextures(1, &tex->id);
	tex->id = 0;
	tex->w  = 0;
	tex->h  = 0;
}

void textureRender(struct Texture *tex, GLfloat x, GLfloat y)
{
	if (tex->id == 0) {
		return;
	}

	// remove any previous transformation
	glLoadIdentity();

	// move to render point
	glTranslatef(x, y, 0.0f);
	
	// set texture id
	glBindTexture(GL_TEXTURE_2D, tex->id);

	// render texture quad
	glBegin(GL_QUADS);
		glTexCoord2f(0.0f, 0.0f);glVertex2f(0.0f  , 0.0f  );
		glTexCoord2f(1.0f, 0.0f);glVertex2f(tex->w, 0.0f  );
		glTexCoord2f(1.0f, 1.0f);glVertex2f(tex->w, tex->h);
		glTexCoord2f(0.0f, 1.0f);glVertex2f(0.0f  , tex->h);
	glEnd();
}
