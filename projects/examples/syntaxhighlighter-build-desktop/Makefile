#############################################################################
# Makefile for building: syntaxhighlighter
# Generated by qmake (2.01a) (Qt 4.7.3) on: Mon Jun 27 20:52:23 2011
# Project:  ../syntaxhighlighter/syntaxhighlighter.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt/mkspecs/linux-g++-64 -o Makefile ../syntaxhighlighter/syntaxhighlighter.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -march=x86-64 -mtune=generic -O2 -pipe -fno-strict-aliasing -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -march=x86-64 -mtune=generic -O2 -pipe -fno-strict-aliasing -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt/mkspecs/linux-g++-64 -I../syntaxhighlighter -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I. -I../syntaxhighlighter -I.
LINK          = g++
LFLAGS        = -m64 -Wl,--hash-style=gnu -Wl,--as-needed -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../syntaxhighlighter/highlighter.cpp \
		../syntaxhighlighter/mainwindow.cpp \
		../syntaxhighlighter/main.cpp moc_highlighter.cpp \
		moc_mainwindow.cpp
OBJECTS       = highlighter.o \
		mainwindow.o \
		main.o \
		moc_highlighter.o \
		moc_mainwindow.o
DIST          = /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/release.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		../syntaxhighlighter/syntaxhighlighter.pro
QMAKE_TARGET  = syntaxhighlighter
DESTDIR       = 
TARGET        = syntaxhighlighter

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../syntaxhighlighter/syntaxhighlighter.pro  /usr/share/qt/mkspecs/linux-g++-64/qmake.conf /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/release.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt/mkspecs/linux-g++-64 -o Makefile ../syntaxhighlighter/syntaxhighlighter.pro
/usr/share/qt/mkspecs/common/g++.conf:
/usr/share/qt/mkspecs/common/unix.conf:
/usr/share/qt/mkspecs/common/linux.conf:
/usr/share/qt/mkspecs/qconfig.pri:
/usr/share/qt/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt/mkspecs/features/qt_functions.prf:
/usr/share/qt/mkspecs/features/qt_config.prf:
/usr/share/qt/mkspecs/features/exclusive_builds.prf:
/usr/share/qt/mkspecs/features/default_pre.prf:
/usr/share/qt/mkspecs/features/release.prf:
/usr/share/qt/mkspecs/features/default_post.prf:
/usr/share/qt/mkspecs/features/warn_on.prf:
/usr/share/qt/mkspecs/features/qt.prf:
/usr/share/qt/mkspecs/features/unix/thread.prf:
/usr/share/qt/mkspecs/features/moc.prf:
/usr/share/qt/mkspecs/features/resources.prf:
/usr/share/qt/mkspecs/features/uic.prf:
/usr/share/qt/mkspecs/features/yacc.prf:
/usr/share/qt/mkspecs/features/lex.prf:
/usr/share/qt/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt/mkspecs/linux-g++-64 -o Makefile ../syntaxhighlighter/syntaxhighlighter.pro

dist: 
	@$(CHK_DIR_EXISTS) ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0 || $(MKDIR) ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0/ && $(COPY_FILE) --parents ../syntaxhighlighter/highlighter.h ../syntaxhighlighter/mainwindow.h ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0/ && $(COPY_FILE) --parents ../syntaxhighlighter/highlighter.cpp ../syntaxhighlighter/mainwindow.cpp ../syntaxhighlighter/main.cpp ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0/ && (cd `dirname ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0` && $(TAR) syntaxhighlighter1.0.0.tar syntaxhighlighter1.0.0 && $(COMPRESS) syntaxhighlighter1.0.0.tar) && $(MOVE) `dirname ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0`/syntaxhighlighter1.0.0.tar.gz . && $(DEL_FILE) -r ../syntaxhighlighter/.tmp/syntaxhighlighter1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_highlighter.cpp moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_highlighter.cpp moc_mainwindow.cpp
moc_highlighter.cpp: ../syntaxhighlighter/highlighter.h
	/usr/bin/moc $(DEFINES) $(INCPATH) ../syntaxhighlighter/highlighter.h -o moc_highlighter.cpp

moc_mainwindow.cpp: ../syntaxhighlighter/highlighter.h \
		../syntaxhighlighter/mainwindow.h
	/usr/bin/moc $(DEFINES) $(INCPATH) ../syntaxhighlighter/mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

highlighter.o: ../syntaxhighlighter/highlighter.cpp ../syntaxhighlighter/highlighter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o highlighter.o ../syntaxhighlighter/highlighter.cpp

mainwindow.o: ../syntaxhighlighter/mainwindow.cpp ../syntaxhighlighter/mainwindow.h \
		../syntaxhighlighter/highlighter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../syntaxhighlighter/mainwindow.cpp

main.o: ../syntaxhighlighter/main.cpp ../syntaxhighlighter/mainwindow.h \
		../syntaxhighlighter/highlighter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../syntaxhighlighter/main.cpp

moc_highlighter.o: moc_highlighter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_highlighter.o moc_highlighter.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ || $(MKDIR) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ 


install_sources: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ || $(MKDIR) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ 
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/highlighter.cpp $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/mainwindow.cpp $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/main.cpp $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/highlighter.h $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/mainwindow.h $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/
	-$(INSTALL_FILE) /home/rodrigo/projects/examples/syntaxhighlighter/syntaxhighlighter.pro $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/


uninstall_sources:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/highlighter.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/mainwindow.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/main.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/highlighter.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/mainwindow.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/syntaxhighlighter.pro
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/share/doc/qt/examples/richtext/syntaxhighlighter/ 


install:  install_target install_sources  FORCE

uninstall: uninstall_target uninstall_sources   FORCE

FORCE:

