#pragma once;

ref class file{

private:
	int row;
	int col;
	int direction;

public:
	file();
	file(int, int, int);

	int get_row();
	int get_col();
	int get_direction();

	void set_row(int);
	void set_col(int);
	void set_direction(int);
};