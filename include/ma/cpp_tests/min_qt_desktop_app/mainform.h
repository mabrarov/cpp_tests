//
// Copyright (c) 2014 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef MA_CPP_TESTS_MIN_QT_DESKTOP_APP_MAINFORM_H
#define MA_CPP_TESTS_MIN_QT_DESKTOP_APP_MAINFORM_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include <QWidget>
#include <ui_mainform.h>

namespace ma {
namespace cpp_tests {
namespace min_qt_desktop_app {

class MainForm : public QWidget
{
  Q_OBJECT

public:
  MainForm(QWidget* parent = 0, Qt::WindowFlags flags = 0);
  ~MainForm();

private slots:

private:
  Ui::mainForm ui_;
}; // class MainForm

} // namespace min_qt_desktop_app
} // namespace cpp_tests
} // namespace ma

#endif // MA_CPP_TESTS_MIN_QT_DESKTOP_APP_MAINFORM_H
