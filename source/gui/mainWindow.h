#ifndef main_window_h
#define main_window_h

#include <QtWidgets\QWidget>
#include <QtWidgets\QGridLayout>
#include "mainMenu.h"
#include "planetWidget.h"
#include "planetHandler.h"

class MainWindow : public QWidget {
public:
	MainWindow ();

	QGridLayout* layout;
	MainMenu* mainMenu;
	PlanetWidget* planetWidget;
	PlanetHandler* planetHandler;
};

#endif