#include "therapist.h"

therapist::therapist()
{
	name = "��������";
	treatmentTime = 0;
	diseaseIndex = 2;
	actions = { " ������������ ���������� ", " ���� �������� ��������������� ���� " };
}

void therapist::printInfo()
{
	std::cout << "�������������: " << name << std::endl;
	std::cout << "����� �������: " << treatmentTime << std::endl;
	std::cout << "�����: ��������" << std::endl;
}
