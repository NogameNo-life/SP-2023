#include "psychiatrist.h"

psychiatrist::psychiatrist()
{
	name = "��������";
	treatmentTime = 0;
	diseaseIndex = 3;
	actions = { " �������� ����� ����� ����� ", " �������� ������������ ������� �� " };
}

void psychiatrist::printInfo()
{
	std::cout << "�������������: " << name << std::endl;
	std::cout << "����� �������: " << treatmentTime << std::endl;
	std::cout << "�����: ���������" << std::endl;
}
