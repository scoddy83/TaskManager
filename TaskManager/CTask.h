#pragma once
#include <string>

class CTask
{
	int id;
	std::string autor;
	std::string title;
	std::string description;
	int status;

public:
	CTask();
	int createTask(std::string, std::string, std::string);
};

