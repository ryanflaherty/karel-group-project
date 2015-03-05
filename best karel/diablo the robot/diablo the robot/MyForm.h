#pragma once
#include "Game.h"
#include "Wall.h"
#include <stdlib.h>
#include <ctime>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		array <wall^, 2>^ WALLS;

		static const int num_rows = 29;
		static const int num_cols = 17;
		static const int CELLSIZE = 50;

		/////////Graphics Folder/////////
		Graphics^ g;
		Graphics^ gbmp;
		Bitmap^ view;
		Brush^ blackBrush;
		Brush^ whiteBrush;
		Bitmap^ KarelLeftbmp = gcnew Bitmap("Graphics/KarelLeft.bmp");
		Bitmap^ KarelRightbmp = gcnew Bitmap("Graphics/KarelRight.bmp");
		Bitmap^ KarelUpbmp = gcnew Bitmap("Graphics/KarelUp.bmp");
		Bitmap^ KarelDownbmp = gcnew Bitmap("Graphics/KarelDown.bmp");
		Bitmap^ KarelWallBlockbmp = gcnew Bitmap("Graphics/KarelWallBlock.bmp");
		Bitmap^ KarelBeeperbmp = gcnew Bitmap("Graphics/KarelBeeper.bmp");
		/////////////////////////////////

		


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Start_button;
	private: System::Windows::Forms::Button^  move_button;
	private: System::Windows::Forms::Button^  turn_button;
	private: System::Windows::Forms::Button^  beeper_button;
	private: System::Windows::Forms::PictureBox^  picture_bar;
	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Start_button = (gcnew System::Windows::Forms::Button());
			this->move_button = (gcnew System::Windows::Forms::Button());
			this->turn_button = (gcnew System::Windows::Forms::Button());
			this->beeper_button = (gcnew System::Windows::Forms::Button());
			this->picture_bar = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_bar))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1450, 850);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Start_button
			// 
			this->Start_button->Location = System::Drawing::Point(13, 13);
			this->Start_button->Name = L"Start_button";
			this->Start_button->Size = System::Drawing::Size(75, 23);
			this->Start_button->TabIndex = 1;
			this->Start_button->Text = L"Start Game";
			this->Start_button->UseVisualStyleBackColor = true;
			this->Start_button->Click += gcnew System::EventHandler(this, &MyForm::Start_button_Click);
			// 
			// move_button
			// 
			this->move_button->Location = System::Drawing::Point(95, 13);
			this->move_button->Name = L"move_button";
			this->move_button->Size = System::Drawing::Size(75, 23);
			this->move_button->TabIndex = 2;
			this->move_button->Text = L"Move";
			this->move_button->UseVisualStyleBackColor = true;
			this->move_button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// turn_button
			// 
			this->turn_button->Location = System::Drawing::Point(177, 13);
			this->turn_button->Name = L"turn_button";
			this->turn_button->Size = System::Drawing::Size(75, 23);
			this->turn_button->TabIndex = 3;
			this->turn_button->Text = L"Turn Left";
			this->turn_button->UseVisualStyleBackColor = true;
			this->turn_button->Click += gcnew System::EventHandler(this, &MyForm::turn_button_Click);
			// 
			// beeper_button
			// 
			this->beeper_button->Location = System::Drawing::Point(258, 13);
			this->beeper_button->Name = L"beeper_button";
			this->beeper_button->Size = System::Drawing::Size(75, 23);
			this->beeper_button->TabIndex = 4;
			this->beeper_button->Text = L"Interact";
			this->beeper_button->UseVisualStyleBackColor = true;
			this->beeper_button->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// picture_bar
			// 
			this->picture_bar->Location = System::Drawing::Point(339, 12);
			this->picture_bar->Name = L"picture_bar";
			this->picture_bar->Size = System::Drawing::Size(300, 23);
			this->picture_bar->TabIndex = 5;
			this->picture_bar->TabStop = false;
			this->picture_bar->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(339, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1484, 962);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picture_bar);
			this->Controls->Add(this->beeper_button);
			this->Controls->Add(this->turn_button);
			this->Controls->Add(this->move_button);
			this->Controls->Add(this->Start_button);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_bar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		game purple;
		wall wallClass;

		
		

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //form load
				 MessageBox::Show("Karel the Robot");
				 g = pictureBox1->CreateGraphics();
				 view = gcnew Bitmap(CELLSIZE, CELLSIZE, System::Drawing::Imaging::PixelFormat::Format32bppArgb);
				 gbmp = Graphics::FromImage(view);
				 blackBrush = gcnew System::Drawing::SolidBrush(Color::Black);
				 whiteBrush = gcnew System::Drawing::SolidBrush(Color::White);
				 
				 WALLS = gcnew array<wall^, 2>(num_rows, num_cols);
					for (int row = 0; row < num_rows; row++)
					for (int col = 0; col < num_cols; col++)
						WALLS[row, col] = gcnew wall(row, col, false, false);


					
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 //interact button
				 int x = purple.get_row();
				 int y = purple.get_col();
				 int i = purple.get_beeper_pocket();
				 int direction = purple.get_direction();

				 if (WALLS[x, y]->get_beeper() == true)
				 {
					 WALLS[x, y]->set_beeper(false);
					 purple.set_beeper_pocket(++i);
					 drawMaze();
					 if (direction == 1){
						 g->DrawImage(KarelUpbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 2){
						 g->DrawImage(KarelLeftbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 3){
						 g->DrawImage(KarelDownbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 4){
						 g->DrawImage(KarelRightbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }

				 }
				 
				 else if (WALLS[x, y]->get_beeper() == false && i > 0)
				 {
					 WALLS[x, y]->set_beeper(true);
					 purple.set_beeper_pocket(--i);
					 drawMaze();
					 if (direction == 1){
						 g->DrawImage(KarelUpbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 2){
						 g->DrawImage(KarelLeftbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 3){
						 g->DrawImage(KarelDownbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
					 if (direction == 4){
						 g->DrawImage(KarelRightbmp, x * CELLSIZE, y * CELLSIZE, CELLSIZE, CELLSIZE);
					 }
				 }

				 







	}
private: System::Void Start_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 //start button
			 pictureBox1->Refresh();
			 purple.set_row(5);
			 purple.set_col(5);
			 purple.set_direction(1);
			 purple.set_beeper_pocket(0);

			 //set walls
			 for (int row = 0; row < num_rows; row++){
				 int col = 0;
					 WALLS[row, col]->set_wall(true);//}
			 }
			 for (int col = 0; col < num_cols; col++){
				 int row = 0;
				 WALLS[row, col]->set_wall(true);
			 }
			 for (int row = 0; row < num_rows; row++){
				 int col = num_cols - 1;
				 WALLS[row, col]->set_wall(true);
			 }
			 for (int col = 0; col < num_cols; col++){
				 int row = num_rows - 1;
				 WALLS[row, col]->set_wall(true);
			 }
			 
			 //sets value of beepers to false for all spaces
			 for (int row = 0; row < num_rows; row++){
				 for (int col = 0; col < num_cols; col++){
					 WALLS[row, col]->set_beeper(false);
				 }
			 }
			 
			 //beeper set 
			 srand(time(NULL));
			 for (int beeper_count = 0; beeper_count < 4; beeper_count++){
				 int temp_x = rand() % num_rows;
				 int temp_y = rand() % num_cols;
				 if (WALLS[temp_x, temp_y]->get_wall() == false){
					 WALLS[temp_x, temp_y]->set_beeper(true);
				 }
				 else
					 beeper_count--;
			 }

			 //draws maze
			 drawMaze();

			 int temp_row = purple.get_row();
			 int temp_col = purple.get_col();
			 g->DrawImage(KarelUpbmp, temp_row * CELLSIZE, temp_col * CELLSIZE, CELLSIZE, CELLSIZE);

			 //counter
			 //int count = purple.get_beeper_pocket();
			 //label1->Text = (count, "/4 beepers");
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ignore
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //move button
			 int cur_row = purple.get_row();
			 int cur_col = purple.get_col();
			 int cur_direction = purple.get_direction();
			 int temp_row;
			 int temp_col;

			 //directioms
			 //1 = up
			 //2 = left
			 //3 = down
			 //4 = right


			 //up
			 if (cur_direction == 1)
			 {
				 temp_col = cur_col - 1;
				 if (temp_col < 0 || temp_col >= num_cols || WALLS[cur_row, temp_col]->get_wall() == true)
				 {
					 g->DrawImage(KarelUpbmp, cur_row * 50, cur_col * 50, 50, 50);
				 }
				 else
				 {
					 //Rectangle blank_space = Rectangle(cur_row * CELLSIZE, cur_col * CELLSIZE, 50, 50);
					 //g->FillRectangle(whiteBrush, blank_space);
					 drawMaze();
					 g->DrawImage(KarelUpbmp, cur_row * 50, temp_col * 50, 50, 50);
					 purple.set_col(temp_col);
				 }
			 }


			 //left
			 if (cur_direction == 2)
			 {
				 temp_row = cur_row - 1;
				 if (temp_row < 0 || temp_row >= num_rows || WALLS[temp_row, cur_col]->get_wall() == true)
				 {
					 g->DrawImage(KarelLeftbmp, cur_row * 50, cur_col * 50, 50, 50);
				 }
				 else
				 {
					 Rectangle blank_space = Rectangle(cur_row * CELLSIZE, cur_col * CELLSIZE, 50, 50);
					 g->FillRectangle(whiteBrush, blank_space);
					 drawMaze();
					 g->DrawImage(KarelLeftbmp, temp_row * 50, cur_col * 50, 50, 50);
					 purple.set_row(temp_row);
				 }
			 }


			 //down
			 if (cur_direction == 3)
			 {
				 temp_col = cur_col + 1;
				 if (temp_col < 0 || temp_col >= num_cols || WALLS[cur_row, temp_col]->get_wall() == true)
				 {
					 g->DrawImage(KarelDownbmp, cur_row * 50, cur_col * 50, 50, 50);
				 }
				 else
				 {
					 Rectangle blank_space = Rectangle(cur_row * CELLSIZE, cur_col * CELLSIZE, 50, 50);
					 g->FillRectangle(whiteBrush, blank_space);
					 drawMaze();
					 g->DrawImage(KarelDownbmp, cur_row * 50, temp_col * 50, 50, 50);
					 purple.set_col(temp_col);
				 }
			 }


			 //right
			 if (cur_direction == 4)
			 {
				 temp_row = cur_row + 1;
				 if (temp_row < 0 || temp_row >= num_rows || WALLS[temp_row, cur_col]->get_wall() == true)
				 {
					 g->DrawImage(KarelRightbmp, cur_row * 50, cur_col * 50, 50, 50);
				 }
				 else
				 {
					 Rectangle blank_space = Rectangle(cur_row * CELLSIZE, cur_col * CELLSIZE, 50, 50);
					 g->FillRectangle(whiteBrush, blank_space);
					 drawMaze();
					 g->DrawImage(KarelRightbmp, temp_row * 50, cur_col * 50, 50, 50);
					 purple.set_row(temp_row);
				 }
			 }
}
private: System::Void turn_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 //turn button
			 int row = purple.get_row();
			 int col = purple.get_col();
			 int direction = purple.get_direction();

			 if (direction == 1)
			 {
				 purple.set_direction(2);
				 g->DrawImage(KarelLeftbmp, row * 50, col * 50, 50, 50);
			 }
			 if (direction == 2)
			 {
				 purple.set_direction(3);
				 g->DrawImage(KarelDownbmp, row * 50, col * 50, 50, 50);
			 }
			 if (direction == 3)
			 {
				 purple.set_direction(4);
				 g->DrawImage(KarelRightbmp, row * 50, col * 50, 50, 50);
			 }
			 if (direction == 4)
			 {
				 purple.set_direction(1);
				 g->DrawImage(KarelUpbmp, row * 50, col * 50, 50, 50);
			 }
}
private: Void drawMaze(){
			 int row, col;
			 int x, y;

			 //pictureBox1->Refresh();

			 for (row = 0; row < num_rows; row++){
				 for (col = 0; col < num_cols; col++)
				 {
					 if (WALLS[row, col]->get_wall() == true)
					 {
						 x = row * CELLSIZE;
						 y = col * CELLSIZE;

						 g->DrawImage(KarelWallBlockbmp, x, y, CELLSIZE, CELLSIZE);
					 }
					 if (WALLS[row, col]->get_wall() == false)
					 {
						 x = row * CELLSIZE;
						 y = col * CELLSIZE;

						 Rectangle blank_space = Rectangle(row * CELLSIZE, col * CELLSIZE, CELLSIZE, CELLSIZE);
						 g->FillRectangle(whiteBrush, blank_space);
					 }
					 if (WALLS[row, col]->get_beeper() == true)
					 {
						 x = row * CELLSIZE;
						 y = col * CELLSIZE;

						 g->DrawImage(KarelBeeperbmp, x, y, CELLSIZE, CELLSIZE);
					 }
				 }
			 }
}
};
}




/*

fix wall array
draw walls from wall array



learn wasd from nic and or jeremy





double buffer
*/
