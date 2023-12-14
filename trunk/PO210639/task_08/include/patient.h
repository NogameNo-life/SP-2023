#pragma once
#include <string>
#include <vector>
#ifndef PATIENT_H
#define PATIENT_H

class patient {
public:
	std::vector<std::string> diseasesName = {"������", "��������", "���������"};
	std::string name;
	std::vector<int> diseases;
	patient();
	explicit patient(const std::string& _name);
	void printInfo();
};

#endif