#include "patient.h"

patient::patient()
{
	name = "";
}

patient::patient(std::string _name) : name(_name){
}

void patient::printInfo()
{
	std::cout << "���: " << name << std::endl;
	std::cout << "�������: ";
	for (int var : diseases) {
		std::cout << diseasesName[var-1] << " ";
	}
	std::cout << std::endl;
}
