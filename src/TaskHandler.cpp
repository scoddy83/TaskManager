/*****************************
 * In der Classe TaskHandler werden die Tasks gemanaged
 * ****************************/
#include "header/TaskHandler.h"
#include "header/Task.h"
#include <iostream>
#include <string>

void TaskHandler::addTask(Task* task) {
    tasks.push_back(task);
}

void TaskHandler::deleteTask(int* id) {
    tasks[id] = null;
}

void TaskHandler::createNewTask() {
    std::string title;
    std::string beschreibung;

    std::cout << "Bitte gebe einen Titel für den neuen Task ein: ";
    std::cin >> title;

    Task *task = new Task(tasks.size(), title);

    std::cout << "Bitte gebe eine kurze Beschreibung für den Task " << title << " ein:\n";
    std::cin >> beschreibung;

    task->setText(beschreibung);
    addTask(task);
}

void TaskHandler::listTasks() {
    std::cout << "List of all current tasks: \n\n";
    std::cout << "Numbers of Tasks: " << tasks.size() << "\n";
    for(Task* task : tasks) {
        std::cout << "\n" << "ID: " << task->getId() << "\n";
        std::cout << "Titel: " << task->getTitle() << "\n";
        std::cout << "Text: " << task->getText() << "\n";
    }
}