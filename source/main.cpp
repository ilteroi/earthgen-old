#include <iostream>
#include <QtWidgets\QApplication>
#include <QtGui\QIcon>
#include "gui/mainWindow.h"

int main (int argv, char **args) {
	QApplication app(argv, args);
	MainWindow window;
	window.setWindowIcon(QIcon("icon.png"));
	window.show();
	return app.exec();
}