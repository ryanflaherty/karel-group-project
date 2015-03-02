#include "file2.h"


int file::get_row()
{
	return row;
}
int file::get_col()
{
	return col;
}
int file::get_direction()
{
	return direction;
}


void file::set_row(int newrow)
{
	row = newrow;
}
void file::set_col(int newcol)
{
	col = newcol;
}
void file::set_direction(int a)
{
	if (a == 1 || a == 2 || a == 3 || a == 4)
	{
		direction = a;
	}
}



file::file(int x, int y, int a)
{
	row = x;
	col = y;
	direction = a;
}


file::file()
{
	direction = 1;
	//wall = true;
}