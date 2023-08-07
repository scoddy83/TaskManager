// In TaskSystem.h we have the TaskSystem class, which is the main class of the task system.
// It is responsible for creating and managing the tasks, and for executing them.
#ifndef TASKHANDLER_H
#define TASKHANDLER_H
#include <vector>
#include "Task.h"
//#include "Project.h"

class TaskHandler {

public:
    TaskHandler() {}
    virtual ~TaskHandler() {}

    void createNewTask();
    void addTask(Task* task);
    void deleteTask(int* id);
    //void addProject(Project* project);
    void listTasks();

private:
    std::vector<Task*> tasks;
   // std::vector<Project*> projects;

};

#endif