#include "neurologist.h"
#include <iostream>

neurologist::neurologist()
{
	name = "��������";
	treatmentTime = 0;
	diseaseIndex = 1;
	actions = { " ����� ���������� ����� ������� ", " ���� ���������� �� �������� " };
}

void neurologist::printInfo()
{
	std::cout << "�������������: " << name << std::endl;
	std::cout << "����� �������: " << treatmentTime << std::endl;
	std::cout << "�����: ������" << std::endl;
}
