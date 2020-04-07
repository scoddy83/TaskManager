#include "CUser.h"
#include <string>
#include <iostream>
#include <iomanip>

CUser::CUser()
{
	std::cout << "Neuer Benutzer wird angelgt." << std::endl;
}

int CUser::newUser(std::string i_firstname, std::string i_lastname, int i_role, int i_function)
{
	firstname = i_firstname;
	lastname = i_lastname;
	role = i_role;
	function = i_function;

	return 0;
}
