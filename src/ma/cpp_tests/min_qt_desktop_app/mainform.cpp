/*
TRANSLATOR ma::cpp_tests::min_qt_desktop_app::MainForm
*/

//
// Copyright (c) 2014 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <ma/cpp_tests/min_qt_desktop_app/mainform.h>

namespace ma {
namespace cpp_tests {
namespace min_qt_desktop_app {

MainForm::MainForm(QWidget* parent, Qt::WindowFlags flags)
  : QWidget(parent, flags)  
{
  ui_.setupUi(this);
}

MainForm::~MainForm()
{
}

} // namespace min_qt_desktop_app
} // namespace cpp_tests
} // namespace ma
