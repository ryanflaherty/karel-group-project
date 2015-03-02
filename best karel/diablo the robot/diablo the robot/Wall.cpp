#include "Wall.h";

//default constructer
wall::wall()
{

}
wall::wall(int a, int z, bool t)
{
	x = a;
	y = z;
	has_wall = t;
	has_beeper;
}


int wall::get_x()
{
	return x;
}
int wall::get_y()
{
	return y;
}
bool wall::get_wall()
{
	return has_wall;
}
bool wall::get_beeper()
{
	return has_beeper;
}


void wall::set_x(int a)
{
	x = a;
}
void wall::set_y(int z)
{
	y = z;
}
void wall::set_wall(bool t)
{
	has_wall = t;
}
void wall::set_beeper(bool b)
{
	has_beeper = b;
}