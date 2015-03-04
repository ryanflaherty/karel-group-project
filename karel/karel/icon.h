#pragma once;
using namespace System::Drawing;
ref class icon
{
private:
	int row;
	int col;
	int x=0;
		int y=0;
public:
	char status;
	int getx();
	int gety();
	int setx(int);
	int sety(int);
	int left(int);
	int down(int);
	icon(int, int, char);
	
};
