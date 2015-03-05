//this is the class of the karel sprite
//this holds the x and y cordinate 
//and also the direction the sprite is facing


#pragma once;

ref class game{

private:
	int row;
	int col;
	int direction;
	int beeper_pocket;

public:
	game();
	game(int, int, int);

	int get_row();
	int get_col();
	int get_direction();
	int get_beeper_pocket();

	void set_row(int);
	void set_col(int);
	void set_direction(int);
	void set_beeper_pocket(int);
};