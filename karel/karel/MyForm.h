#pragma once
#include <fstream>

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


		////////////////////// WORLD ARRAY ///////////////////////////////////////////////
		// Instance Variables
		array <intersection^, 2>^ WORLD; //The kerat ^ is a pointer to the cell ^
		// Static constants
		const int num_avenues = 10; //Number of ros in the grid
	private: System::Windows::Forms::Button^  move_button;
	private: System::Windows::Forms::Button^  turn_button;
			 const int num_streets = 10; //Number of collumns in the grid

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
			this->move_button = (gcnew System::Windows::Forms::Button());
			this->turn_button = (gcnew System::Windows::Forms::Button());
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
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// move_button
			// 
			this->move_button->Location = System::Drawing::Point(453, 31);
			this->move_button->Name = L"move_button";
			this->move_button->Size = System::Drawing::Size(75, 23);
			this->move_button->TabIndex = 2;
			this->move_button->Text = L"Move";
			this->move_button->UseVisualStyleBackColor = true;
			this->move_button->Click += gcnew System::EventHandler(this, &MyForm::move_button_Click);
			// 
			// turn_button
			// 
			this->turn_button->Location = System::Drawing::Point(534, 88);
			this->turn_button->Name = L"turn_button";
			this->turn_button->Size = System::Drawing::Size(75, 23);
			this->turn_button->TabIndex = 3;
			this->turn_button->Text = L"Turn Left";
			this->turn_button->UseVisualStyleBackColor = true;
			this->turn_button->Click += gcnew System::EventHandler(this, &MyForm::turn_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 430);
			this->Controls->Add(this->turn_button);
			this->Controls->Add(this->move_button);
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
		int NUMROWS;
		int NUMCOLS;

		bool start_game = false;		//bool for if cell is drawn... wont allow other commands until cell is drawn



	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 /*int temp;
=======


private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 int temp;
>>>>>>> origin/master
				 ifstream myfile("textfile.txt");
				 if (myfile.is_open())
				 {
					
				 }
		
<<<<<<< HEAD
		*/



//=======
	//private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	//{
//>>>>>>> origin/master

	//}
	};
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_game = true;

			 //draw commands for cell

}
private: System::Void move_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 ////////////////
			 if (start_game = true){








				 
}
			 //////////////////
};

/* 4.	The commands are not case sensitive. These are the commands to build his world:
a.	World (might be written as WORLD, world –case insensitive- etc): defines the size of Karel’s world. */

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
				{
			>>>>>>> origin/master
				WORLD = gcnew array<cell^, 2>(num_avenues, num_streets); //World num_avenues num_streets
					for (int row = 0; row < num_avenues; avenue++)
						for (int col = 0; col < num_streets; street++)
							grid[avenue, street] = gcnew cell(row, col, 'b');

				}
	private: System::Void turn_button_Click(System::Object^  sender, System::EventArgs^  e) {


				 ///////////
				 if (start_game = true){




				 }
				 ///////////////
	}
};
};

