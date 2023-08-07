// Menu Klasse für TaskManager App
#include "header/Menu.h"

void Menu::manageMenu() {
    do {
        switch (menu)
        {
        case 1:
            mainMenu();
            break;
        case 2:
            taskMenu();
            break;
        case 3:
            listMenu();
            break;
        
        default:
            mainMenu();
            break;
        }

    } while(menu != 0);
}

void Menu::mainMenu() {
    std::cout << "\n\nMAIN MENU\n";
    std::cout << "1) Task Menu\n";
    std::cout << "2) List Menu\n";
    std::cout << "0) Exit\n";

    std::cout << "Select yout option:  ";
    std::cin >> input;

    switch (input)
    {
    case 1:
        menu = 2;
        break;

    case 2:
        menu = 3;
        break;

    case 0:
        std::cout << "Exit\n";
        menu = 0;
        break;
    
    default:
        std::cout << "Keine Valide Eingabe!\n";
        break;
    }
}

void Menu::taskMenu() {
    std::cout << "\n\nTASK MENU\n";
    std::cout << "1) create a new Task\n";
    std::cout << "2) delete a Task\n";
    std::cout << "0) Exit Task Menu\n";

    std::cout << "Select yout option:  ";
    std::cin >> input;

    switch (input)
    {
    case 1:
        std::cout << "create a new Task\n";
        taskHandler.createNewTask();
        menu = 2;
        break;

    case 2:
        std::cout << "delete Task\n";
        int id;
        std::cin << id;
        taskHandler.deleteTask(&id);
        menu = 2;
        break;

    case 0:
        std::cout << "Exit Task Menu\n";
        menu = 1;
        break;
    
    default:
        std::cout << "Keine Valide Eingabe!\n";
        menu = 2;
        break;
    }
}

void Menu::listMenu() {
    std::cout << "\n\nLIST MENU\n";
    std::cout << "1) List all Tasks\n";
    std::cout << "0) Exit Task Menu\n";

    std::cout << "Select yout option:  ";
    std::cin >> input;

    switch (input)
    {
    case 1:
        taskHandler.listTasks();
        menu = 3;
        break;

    case 0:
        std::cout << "Exit List Menu\n";
        menu = 1;
        break;
    
    default:
        std::cout << "Keine Valide Eingabe!\n";
        menu = 3;
        break;
    }
}