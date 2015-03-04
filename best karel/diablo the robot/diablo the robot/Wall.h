//this is the wall or cell class
//this class holds what is in each cell


#pragma once

ref class wall{
private:
	int x;
	int y;
	bool has_wall;
	bool has_beeper;
	int beeper_pocket;

public:
	wall();
	wall(int, int, bool, bool);

	int get_x();
	int get_y();
	bool get_wall();
	bool get_beeper();
	int get_beeper_pocket();


	void set_x(int);
	void set_y(int);
	void set_wall(bool);
	void set_beeper(bool);
	void set_beeper_pocket(int);
};