#
# Copyright (c) 2014 Marat Abrarov (abrarov@gmail.com)
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#

# Additional C/C++ preprocessor definitions
win32:DEFINES += WIN32_LEAN_AND_MEAN \
                 _UNICODE \
                 UNICODE

# Compiler options
linux-g++ | linux-g++-32 | linux-g++-64 | win32-g++-4.6 \
  | linux-icc | linux-icc-32 | linux-icc-64 \
  | linux-llvm | macx-llvm | linux-clang {
  QMAKE_CXXFLAGS += -std=c++0x \
                    -Wstrict-aliasing
}

win32-icc {
  QMAKE_CXXFLAGS += /Qstd=c++0x
}
