//
// Copyright (c) 2014 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <exception>
#include <qglobal.h>
#include <QApplication>

#if defined(QT_STATIC) || !(defined(QT_DLL) || defined(QT_SHARED))
#if QT_VERSION >= 0x050000
#include <QtPlugin>
#endif
#endif

#include <ma/cpp_tests/min_qt_desktop_app/mainform.h>

#if defined(QT_STATIC) || !(defined(QT_DLL) || defined(QT_SHARED))
#if QT_VERSION >= 0x050000
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif
#endif

int main(int argc, char* argv[])
{
  try
  {
    QApplication application(argc, argv);
    ma::cpp_tests::min_qt_desktop_app::MainForm mainForm;
    mainForm.show();
    return application.exec();
  }
  catch (const std::exception& e)
  {
    qFatal("Unexpected error: %s", e.what());
  }
  catch (...)
  {
    qFatal("Unknown exception");
  }
}
