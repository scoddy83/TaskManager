// In Project.h we have the Project class, which is the base class for all the projects in the task system.
// It is responsible for storing the name and the description of the project.
#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <iostream>

class Project {
public:
    Project(const std::string& _name, const std::string& _description) : name {_name}, description {_description} {}
    virtual ~Project() {}

    void setId() { id = _id; }
    void setName(const std::string& _name) { name = _name; }
    void setDescription(const std::string& _description) { description = _description; }

    std::string getName() { return name; }
    std::string getDescription() { return description; }
    int getId() { return id; }

    virtual void print() {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
    }

private:
    int id;
    std::string name;
    std::string description;
};

#endif