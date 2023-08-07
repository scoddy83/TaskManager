// In Person.h we have the Person class, which is the base class for all the people in the task system.
// It is responsible for storing the name and the surname of the person.
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person {
public:
    Person(const std::string& _name, const std::string& _surname) : name {_name}, surname {_surname} {}
    virtual ~Person() {}

    void setId() { id = _id; }
    void setName(const std::string& _name) { name = _name; }
    void setSurname(const std::string& _surname) { surname = _surname; }
    void setEmail(const std::string& _email) { email = _email; }
    void setAge(int _age) { age = _age; }

    std::string getName() { return name; }
    std::string getSurname() { return surname; }
    std::string getEmail() { return email; }
    int getAge() { return age; }
    int getId() { return id; }

    virtual void print() {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    int id;
    std::string name;
    std::string surname;
    std::string email;
    int age; 
};

#endif
