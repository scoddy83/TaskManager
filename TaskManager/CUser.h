#pragma once
#include <string>

class CUser
{
	int id;
	std::string firstname;
	std::string lastname;
	int role;
	int function;

public:
	CUser();
	int newUser(std::string, std::string, int, int);
};

