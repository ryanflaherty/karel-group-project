#include "icon.h"
icon::icon(int r, int c, char s)
{
	row = r;
	col = c;
	status = s;
}
int icon::getx()
{
	return x;
}

int icon::gety()
{
	return y;
}
int icon::setx(int x)
{
	x++;
	return x;
}
int icon::left(int x)
{
	x++;
	return x;
}
int icon::down(int y)
{
	y--;
	return y;
}