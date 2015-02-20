#pragma once
#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//file io
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		///////////////////// Graphics //////////////////////////////////////////////////
		private: System::Windows::Forms::PictureBox^  pictureBox1;
		private: System::Windows::Forms::Button^  button1;
		Graphics^ g;
		Bitmap^ KarelLeftbmp = gcnew Bitmap("KarelGraphics/KarelLeft.bmp"); 
		Bitmap^ KarelRightbmp = gcnew Bitmap("KarelGraphics/KarelRight.bmp");
		Bitmap^ KarelUpbmp = gcnew Bitmap("KarelGraphics/KarelUp.bmp");
		Bitmap^ KarelDownbmp = gcnew Bitmap("KarelGraphics/KarelDown.bmp");
		Bitmap^ KarelWallBlockbmp = gcnew Bitmap("KarelGraphics/KarelWallBlock.bmp");
		Bitmap^ KarelBeeperbmp = gcnew Bitmap("KarelGraphics/KarelBeeper.bmp");
		//////////////////////////////////////////////////////////////////////////////////

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
		int NUMROWS;
		int NUMCOLS;



	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 /*int temp;
				 ifstream myfile("textfile.txt");
				 if (myfile.is_open())
				 {
					
				 }
		
		*/



//=======
	//private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	//{
//>>>>>>> origin/master

	//}
	};
};