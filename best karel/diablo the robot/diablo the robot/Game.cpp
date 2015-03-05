#include "Game.h"

int game::get_row()
{
	return row;
}
int game::get_col()
{
	return col;
}
int game::get_direction()
{
	return direction;
}
int game::get_beeper_pocket()
{
	return beeper_pocket;
}


void game::set_row(int newrow)
{
	row = newrow;
}
void game::set_col(int newcol)
{
	col = newcol;
}
void game::set_direction(int a)
{
	if (a == 1 || a == 2 || a == 3 || a == 4)
	{
		direction = a;
	}
}
void game::set_beeper_pocket(int b)
{
	beeper_pocket = b;
}



game::game(int x, int y, int a)
{
	row = x;
	col = y;
	direction = a;
}


game::game()
{

}