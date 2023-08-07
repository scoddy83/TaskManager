// Menu Klasse für TaskManager App
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include "Task.h"
#include "TaskHandler.h"

class Menu {
public:
    Menu() { std::cout << "Hallo Menu!\n"; }
    void mainMenu();
    void taskMenu();
    void listMenu();
    void manageMenu();

private:
    int input;
    int menu {1};
    TaskHandler taskHandler;
};
#endif