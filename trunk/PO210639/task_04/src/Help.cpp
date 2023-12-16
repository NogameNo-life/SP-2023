#include "Help.h"
#include <string>
#include <iostream>
#include "tempStrings.h"

using namespace std;

void Help::doAction(ConsoleWindow &w, tempStrings& tempStrs)
{
	string answer = "cd - ����� ����� ���� ����� ������� �����\ncls - ������� ������\ndir - ����� ������ ������ � �������� �� ��������� �����\nhelp - ������� ���������� ���������� � ��������\nmkdir - ������� �������\ncolor - �������� ���� ���� �������";
	cout << answer << endl;
	w.doWork(sizeof(answer));
}
