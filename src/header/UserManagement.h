// In UserManagement.h we have the UserManagement class, which is responsible for managing the users of the task system.
// It is responsible for creating and deleting users, and for storing them in a vector.
// It is also responsible for storing the current user, which is the user that is currently logged in.
#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H
#include <vector>
#include "Person.h"
#include "User.h"
#include "Admin.h"

class UserManagement {
public:
    UserManagement();
    ~UserManagement();

    void addUser(Person* user);
    void deleteUser(Person* user);
    void setCurrentUser(Person* user);
    Person* getCurrentUser();

private:
    std::vector<Person*> users;
    Person* currentUser;
};

#endif
