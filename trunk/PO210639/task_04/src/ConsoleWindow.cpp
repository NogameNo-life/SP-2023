#include "ConsoleWindow.h"
#include <iostream>

using namespace std;

ConsoleWindow::ConsoleWindow(int _id, int _height, int _width,  bool _rights, int _memoryNeeded, bool _isShown, int _color) : Window(_id, _height, _width, _memoryNeeded, _rights, _isShown), color(_color)
{

}
