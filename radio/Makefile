#############################################################################
# Makefile for building: ../bin/radio
# Generated by qmake (2.01a) (Qt 4.8.4) on: ?? 6? 28 21:35:32 2013
# Project:  radio.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile radio.pro
#############################################################################

####### Compiler, tools and options

CC            = @echo compiling $< && gcc
CXX           = @echo compiling $< && g++
DEFINES       = -DQT_NO_DEBUG -DQT_NO_KEYWORDS -DQT_SVG_LIB -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtSvg -I/usr/include/qt4 -I../../src -I/usr/X11R6/include -Imoc
LINK          = @echo linking $@ && g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/mars/qwt-6.1-rc3/lib
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -L/usr/X11R6/lib -L/home/mars/qwt-6.1-rc3/examples/../lib -lqwt -lQtSvg -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
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

OBJECTS_DIR   = obj/

####### Files

SOURCES       = mainwindow.cpp \
		ampfrm.cpp \
		tunerfrm.cpp \
		radio.cpp moc/moc_ampfrm.cpp \
		moc/moc_tunerfrm.cpp
OBJECTS       = obj/mainwindow.o \
		obj/ampfrm.o \
		obj/tunerfrm.o \
		obj/radio.o \
		obj/moc_ampfrm.o \
		obj/moc_tunerfrm.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../../qwtconfig.pri \
		../../qwtbuild.pri \
		../../qwtfunctions.pri \
		../examples.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/silent.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		radio.pro
QMAKE_TARGET  = radio
DESTDIR       = ../bin/
TARGET        = ../bin/radio

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
	@$(CHK_DIR_EXISTS) ../bin/ || $(MKDIR) ../bin/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: radio.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../../qwtconfig.pri \
		../../qwtbuild.pri \
		../../qwtfunctions.pri \
		../examples.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/silent.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtSvg.prl \
		/usr/lib/i386-linux-gnu/libQtOpenGL.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile radio.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
../../qwtconfig.pri:
../../qwtbuild.pri:
../../qwtfunctions.pri:
../examples.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/silent.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtSvg.prl:
/usr/lib/i386-linux-gnu/libQtOpenGL.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile radio.pro

dist: 
	@$(CHK_DIR_EXISTS) obj/radio6.1.0 || $(MKDIR) obj/radio6.1.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) obj/radio6.1.0/ && $(COPY_FILE) --parents mainwindow.h ampfrm.h tunerfrm.h obj/radio6.1.0/ && $(COPY_FILE) --parents mainwindow.cpp ampfrm.cpp tunerfrm.cpp radio.cpp obj/radio6.1.0/ && (cd `dirname obj/radio6.1.0` && $(TAR) radio6.1.0.tar radio6.1.0 && $(COMPRESS) radio6.1.0.tar) && $(MOVE) `dirname obj/radio6.1.0`/radio6.1.0.tar.gz . && $(DEL_FILE) -r obj/radio6.1.0


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

compiler_moc_header_make_all: moc/moc_ampfrm.cpp moc/moc_tunerfrm.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc/moc_ampfrm.cpp moc/moc_tunerfrm.cpp
moc/moc_ampfrm.cpp: ampfrm.h
	@echo moc ampfrm.h && /usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ampfrm.h -o moc/moc_ampfrm.cpp

moc/moc_tunerfrm.cpp: tunerfrm.h
	@echo moc tunerfrm.h && /usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) tunerfrm.h -o moc/moc_tunerfrm.cpp

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

obj/mainwindow.o: mainwindow.cpp tunerfrm.h \
		ampfrm.h \
		mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/mainwindow.o mainwindow.cpp

obj/ampfrm.o: ampfrm.cpp ampfrm.h \
		../../src/qwt_knob.h \
		../../src/qwt_global.h \
		../../src/qwt_abstract_slider.h \
		../../src/qwt_abstract_scale.h \
		../../src/qwt_thermo.h \
		../../src/qwt_interval.h \
		../../src/qwt_round_scale_draw.h \
		../../src/qwt_abstract_scale_draw.h \
		../../src/qwt_scale_div.h \
		../../src/qwt_text.h \
		../../src/qwt_math.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/ampfrm.o ampfrm.cpp

obj/tunerfrm.o: tunerfrm.cpp ../../src/qwt_wheel.h \
		../../src/qwt_global.h \
		../../src/qwt_slider.h \
		../../src/qwt_abstract_slider.h \
		../../src/qwt_abstract_scale.h \
		../../src/qwt_thermo.h \
		../../src/qwt_interval.h \
		../../src/qwt_math.h \
		tunerfrm.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/tunerfrm.o tunerfrm.cpp

obj/radio.o: radio.cpp mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/radio.o radio.cpp

obj/moc_ampfrm.o: moc/moc_ampfrm.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_ampfrm.o moc/moc_ampfrm.cpp

obj/moc_tunerfrm.o: moc/moc_tunerfrm.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_tunerfrm.o moc/moc_tunerfrm.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

