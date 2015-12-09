#include "gui.h"
#include <QApplication>
#include <QLocale>

int main(int argc, char *argv[])
{
  using mvp::PortInfoList;
  qRegisterMetaType<PortInfoList>("PortInfoList");

  // force C locale to avoid issues with number separator characters
  QLocale::setDefault(QLocale::c());

  QApplication app(argc, argv);

  app.setOrganizationName("mesytec");
  app.setOrganizationDomain("mesytec.com");
  app.setApplicationName("mvp");

  mvp::MVPGui gui;
  gui.show();

  return app.exec();
}
