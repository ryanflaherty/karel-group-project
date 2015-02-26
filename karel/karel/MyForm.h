#pragma once
#include <fstream>
#include "icon.h"
#include <cstdlib>
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
		///////////////////// Graphics //////////////////////////////////////////////////
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::Button^ button1;
		Graphics^ g;
		Bitmap^ KarelLeftbmp = gcnew Bitmap("KarelGraphics/KarelLeft.bmp"); 
		Bitmap^ KarelRightbmp = gcnew Bitmap("KarelGraphics/KarelRight.bmp");
		Bitmap^ KarelUpbmp = gcnew Bitmap("KarelGraphics/KarelUp.bmp");
		Bitmap^ KarelDownbmp = gcnew Bitmap("KarelGraphics/KarelDown.bmp");
		Bitmap^ KarelWallBlockbmp = gcnew Bitmap("KarelGraphics/KarelWallBlock.bmp");
		Bitmap^ KarelBeeperbmp = gcnew Bitmap("KarelGraphics/KarelBeeper.bmp");
		array <icon^, 2>^ Box1;
//<<<<<<< HEAD
		//////////////////////////////////////////////////////////////////////////////////
		
//=======
		////////////////////// WORLD ARRAY ///////////////////////////////////////////////
		// Instance Variables
		//array <intersection^, 2>^ WORLD; //The kerat ^ is a pointer to the cell ^
		// Static constants
		const int num_avenues = 10; //Number of ros in the grid
		const int num_streets = 10; //Number of collumns in the grid

//>>>>>>> origin/master
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(14, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(443, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 90);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 430);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Karel the Robot";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//<<<<<<< HEAD
//<<<<<<< HEAD
//=======
//<<<<<<< HEAD
//>>>>>>> origin/master

		int NUMROUS=5;
		int NUMCOLS=5;
		int numrow = 5;
		int numcol = 4;


/*private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 int temp;
				 ifstream myfile("textfile.txt");
				 if (myfile.is_open())
				 {
					 //so something here does stuff with the text tile
					 //i'll figure that out
					 //- RF
				 }
		
<<<<<<< HEAD
				 g = pictureBox1->CreateGraphics();
				 gridBox1 = gcnew array<icon^, 2>(5, 5);
				 for (int row = 0; row < numrow; row++)
				 {
					 for (int col = 0; col < NUMCOLS; col++)
					 {

						 Box1[row, col] = gcnew icon(row, col, 'b');
					 }
				 }


===
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
>>>>>>> origin/master

	}
	};
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
}
*/

//=======
/* 4.	The commands are not case sensitive. These are the commands to build his world:
a.	World (might be written as WORLD, world –case insensitive- etc): defines the size of Karel’s world. */
		icon robot;
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
				{
		//	>>>>>>> origin/master
			 srand(time(NULL));
			 g = pictureBox1->CreateGraphics();
			 Box1 = gcnew array<icon^, 2>(5, 5);
			 for (int row = 0; row < numrow; row++)
			 {
				 for (int col = 0; col < NUMCOLS; col++)
				 {

					 Box1[row, col] = gcnew icon(row, col, 'b');
				 }
			 }
			 int direction = rand() % 6 + 1;
			 if (direction == 1)
			 {
				 g->DrawImage(KarelLeftbmp, robot.left(robot.getx()), robot.gety());
			 }
			 else
			 {
				 if (direction == 2)
				 {
					 g->DrawImage(KarelRightbmp, robot.setx(robot.getx()), robot.gety());
				 }
				 else
				 {
					 if (direction == 3)
					 {
						 g->DrawImage(KarelUpbmp, robot.getx(), robot.sety(robot.gety()));
					 }
					 else
					 {
						 g->DrawImage(KarelDownbmp, robot.getx(), robot.down(robot.gety()));

					 }
					 
				 }
			 }
				/*WORLD = gcnew array<cell^, 2>(num_avenues, num_streets); //World num_avenues num_streets
					for (int row = 0; row < num_avenues; avenue++)
						for (int col = 0; col < num_streets; street++)
							grid[avenue, street] = gcnew cell(row, col, 'b');

						int temp;
						ifstream myfile("textfile.txt");
						if (myfile.is_open())
						{
							//so something here does stuff with the text tile
							//i'll figure that out
							//- RF
						}
						*/
						

				}
	};
};
//>>>>>>> origin/master
