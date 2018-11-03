#include <GL/glut.h>

static const char title[] = "3D Shapes";
static GLfloat anglePyramid;
static GLfloat angleCube;
static int refreshMillis;

void initGL()
{
	glShadeModel(GL_SMOOTH);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(1.5f, 0.0f, -7.0f);
	glRotatef(angleCube, 1.0, 1.0, 1.0);
	glBegin(GL_QUADS);

		// Top Face
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f( 1.0f,  1.0f, -1.0f);
		glVertex3f(-1.0f,  1.0f, -1.0f);
		glVertex3f(-1.0f,  1.0f,  1.0f);
		glVertex3f( 1.0f,  1.0f,  1.0f);

		// Bottom Face
		glColor3f(1.0f, 0.5f, 0.0f);
		glVertex3f( 1.0f, -1.0f,  1.0f);
		glVertex3f(-1.0f, -1.0f,  1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f( 1.0f, -1.0f, -1.0f);
		
		// Front Face
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f( 1.0f,  1.0f,  1.0f);
		glVertex3f(-1.0f,  1.0f,  1.0f);
		glVertex3f(-1.0f, -1.0f,  1.0f);
		glVertex3f( 1.0f, -1.0f,  1.0f);
		
		// Back Face
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f( 1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f,  1.0f, -1.0f);
		glVertex3f( 1.0f,  1.0f, -1.0f);
		
		// Left Face
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(-1.0f,  1.0f,  1.0f);
		glVertex3f(-1.0f,  1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f,  1.0f);

		// Right Face
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex3f( 1.0f,  1.0f, -1.0f);
		glVertex3f( 1.0f,  1.0f,  1.0f);
		glVertex3f( 1.0f, -1.0f,  1.0f);
		glVertex3f( 1.0f, -1.0f, -1.0f);

	glEnd();

	glLoadIdentity();
	glTranslatef(-1.5f, 0.0f, -6.0f);
	glRotatef(anglePyramid, 1.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLES);
		// Front
		glColor3f(1.0f, 0.0f, 0.0f); glVertex3f( 0.0f,  1.0f,  0.0f);
		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-1.0f, -1.0f,  1.0f);
		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f( 1.0f, -1.0f,  1.0f);
		
		// Right
		glColor3f(1.0f, 0.0f, 0.0f); glVertex3f( 0.0f,  1.0f,  0.0f);
		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f( 1.0f, -1.0f,  1.0f);
		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f( 1.0f, -1.0f, -1.0f);
		
		// Back
		glColor3f(1.0f, 0.0f, 0.0f); glVertex3f( 0.0f,  1.0f,  0.0f);
		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f( 1.0f, -1.0f, -1.0f);
		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-1.0f, -1.0f, -1.0f);

		// Left		
		glColor3f(1.0f, 0.0f, 0.0f); glVertex3f( 0.0f,  1.0f,  0.0f);
		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-1.0f, -1.0f, -1.0f);
		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-1.0f, -1.0f,  1.0f);
	glEnd();

	glutSwapBuffers();

	anglePyramid += 0.20f;
	angleCube    -= 0.15f;
}

void timer(int value)
{
	glutPostRedisplay();
	glutTimerFunc(refreshMillis, timer, 0);
}

void reshape(int width, int height)
{
	if (height == 0) {
		height = 1;
	}

	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(50, 50);
	glutCreateWindow(title);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	initGL();
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}

