#include "CTask.h"
#include <string>
#include <iostream>
#include <iomanip>

CTask::CTask()
{
	std::cout << "Constructor of CTask" << std::endl;
}


int CTask::createTask(std::string i_autor, std::string i_title, std::string i_descritpion)
{
	id			= 00001;
	autor		= i_autor;
	title		= i_title;
	description = i_descritpion;
	status		= 0;
	
	std::cout << "creating a Task" << std::endl;
	std::cout << "Der Task " << title << " wurde vom Autor: " << autor << " erstellt." << std::endl;


	return 0;
}
