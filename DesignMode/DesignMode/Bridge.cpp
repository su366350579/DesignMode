#include "Bridge.h"
#include <iostream>
using namespace DesignMode;
using namespace std;
void DrawAPI::drawCircle(int radius, int x, int y)
{
	cout << "DrawAPI::drawCircle" << endl;
}

void GreenCircle::drawCircle(int radius, int x, int y)
{
	cout << "GreenCircle::drawCircle" << endl;
}

void RedCircle::drawCircle(int radius, int x, int y)
{
	cout << "RedCircle::drawCircle" << endl;
}

Circle::Circle(int x, int y, int radius, DrawAPI* drawAPI) 
	:Shape(drawAPI)
{
	m_x = x;
	m_y = y;
	m_radius = radius;
}
