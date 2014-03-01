#
# Copyright (c) 2014 Marat Abrarov (abrarov@gmail.com)
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#

TEMPLATE  = app
QT       += core gui
TARGET    = min_qt_desktop_app
CONFIG   += qt

# Qt 5 support
greaterThan(QT_MAJOR_VERSION, 4) {
  QT     += widgets
}

# Common project configuration
include(../config.pri)

HEADERS  += ../../../include/ma/cpp_tests/min_qt_desktop_app/mainform.h

SOURCES  += ../../../src/ma/cpp_tests/min_qt_desktop_app/mainform.cpp \
            ../../../src/min_qt_desktop_app/main.cpp

FORMS    += ../../../src/ma/cpp_tests/min_qt_desktop_app/mainform.ui

RC_FILE   = ../../../src/min_qt_desktop_app/min_qt_desktop_app.rc

INCLUDEPATH += ../../../include

win32:LIBS += -lkernel32 \
              -luser32 \
              -lgdi32 \
              -lwinspool \
              -lcomdlg32 \
              -ladvapi32 \
              -lshell32 \
              -lole32 \
              -loleaut32 \
              -luuid \
              -lodbc32 \
              -lodbccp32 \
              -lopengl32 \
              -limm32 \
              -lwinmm \
              -lws2_32

win32:DEFINES += WINVER=0x0500 \
                 _WIN32_WINNT=0x0500
