#pragma once
#include "Train.h"
Train *TRAIN;
namespace MyTrain {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Pict;
	protected:
	private: System::Windows::Forms::TextBox^  startX;
	private: System::Windows::Forms::TextBox^  startY;
	private: System::Windows::Forms::TextBox^  scale;
	private: System::Windows::Forms::TextBox^  count;
	private: System::Windows::Forms::TextBox^  Speed;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Button^  Go_button;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Pict = (gcnew System::Windows::Forms::PictureBox());
			this->startX = (gcnew System::Windows::Forms::TextBox());
			this->startY = (gcnew System::Windows::Forms::TextBox());
			this->scale = (gcnew System::Windows::Forms::TextBox());
			this->count = (gcnew System::Windows::Forms::TextBox());
			this->Speed = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Go_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict))->BeginInit();
			this->SuspendLayout();
			// 
			// Pict
			// 
			this->Pict->BackColor = System::Drawing::Color::SkyBlue;
			this->Pict->Location = System::Drawing::Point(12, 87);
			this->Pict->Name = L"Pict";
			this->Pict->Size = System::Drawing::Size(1443, 734);
			this->Pict->TabIndex = 0;
			this->Pict->TabStop = false;
			this->Pict->Click += gcnew System::EventHandler(this, &MyForm::Pict_Click);
			// 
			// startX
			// 
			this->startX->AcceptsReturn = true;
			this->startX->AcceptsTab = true;
			this->startX->Cursor = System::Windows::Forms::Cursors::Default;
			this->startX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startX->Location = System::Drawing::Point(26, 33);
			this->startX->Multiline = true;
			this->startX->Name = L"startX";
			this->startX->Size = System::Drawing::Size(126, 48);
			this->startX->TabIndex = 1;
			this->startX->TextChanged += gcnew System::EventHandler(this, &MyForm::startX_TextChanged);
			// 
			// startY
			// 
			this->startY->AcceptsReturn = true;
			this->startY->AcceptsTab = true;
			this->startY->Cursor = System::Windows::Forms::Cursors::Default;
			this->startY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startY->Location = System::Drawing::Point(215, 33);
			this->startY->Multiline = true;
			this->startY->Name = L"startY";
			this->startY->Size = System::Drawing::Size(126, 48);
			this->startY->TabIndex = 2;
			this->startY->TextChanged += gcnew System::EventHandler(this, &MyForm::startY_TextChanged);
			// 
			// scale
			// 
			this->scale->AcceptsReturn = true;
			this->scale->AcceptsTab = true;
			this->scale->Cursor = System::Windows::Forms::Cursors::Default;
			this->scale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scale->Location = System::Drawing::Point(404, 33);
			this->scale->Multiline = true;
			this->scale->Name = L"scale";
			this->scale->Size = System::Drawing::Size(126, 48);
			this->scale->TabIndex = 3;
			this->scale->TextChanged += gcnew System::EventHandler(this, &MyForm::scale_TextChanged);
			// 
			// count
			// 
			this->count->AcceptsReturn = true;
			this->count->AcceptsTab = true;
			this->count->Cursor = System::Windows::Forms::Cursors::Default;
			this->count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->count->Location = System::Drawing::Point(596, 33);
			this->count->Multiline = true;
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(126, 48);
			this->count->TabIndex = 4;
			this->count->TextChanged += gcnew System::EventHandler(this, &MyForm::count_TextChanged);
			// 
			// Speed
			// 
			this->Speed->AcceptsReturn = true;
			this->Speed->AcceptsTab = true;
			this->Speed->Cursor = System::Windows::Forms::Cursors::Default;
			this->Speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Speed->Location = System::Drawing::Point(774, 33);
			this->Speed->Multiline = true;
			this->Speed->Name = L"Speed";
			this->Speed->Size = System::Drawing::Size(126, 48);
			this->Speed->TabIndex = 5;
			this->Speed->TextChanged += gcnew System::EventHandler(this, &MyForm::Speed_TextChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(21, 2);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(144, 28);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Координата Х";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(210, 2);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(144, 28);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Координата Y";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel3->LinkColor = System::Drawing::Color::Black;
			this->linkLabel3->Location = System::Drawing::Point(399, 2);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(100, 28);
			this->linkLabel3->TabIndex = 8;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Масштаб";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel4->LinkColor = System::Drawing::Color::Black;
			this->linkLabel4->Location = System::Drawing::Point(591, 2);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(146, 28);
			this->linkLabel4->TabIndex = 9;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Кол-во вагонов";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel5->LinkColor = System::Drawing::Color::Black;
			this->linkLabel5->Location = System::Drawing::Point(769, 2);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(99, 28);
			this->linkLabel5->TabIndex = 10;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Скорость";
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Start->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Start->Location = System::Drawing::Point(1082, 2);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(108, 79);
			this->Start->TabIndex = 11;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// Go_button
			// 
			this->Go_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Go_button->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Go_button->Location = System::Drawing::Point(1275, 2);
			this->Go_button->Name = L"Go_button";
			this->Go_button->Size = System::Drawing::Size(108, 79);
			this->Go_button->TabIndex = 12;
			this->Go_button->Text = L"Go";
			this->Go_button->UseVisualStyleBackColor = false;
			this->Go_button->Click += gcnew System::EventHandler(this, &MyForm::Go_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1457, 824);
			this->Controls->Add(this->Go_button);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->linkLabel5);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Speed);
			this->Controls->Add(this->count);
			this->Controls->Add(this->scale);
			this->Controls->Add(this->startY);
			this->Controls->Add(this->startX);
			this->Controls->Add(this->Pict);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		private:
			Graphics^ g;
			Bitmap^ Img;
			int x;
			int y;
			int h;
			int n;
			int dx;

	private: System::Void startX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void startY_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void scale_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void count_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Speed_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Img = gcnew Bitmap(Pict->Width, Pict->Height);
		g = Graphics::FromImage(Img);
		Pict->Image = Img;
	}
	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
		x = Convert::ToInt32(startX->Text);
		y = Convert::ToInt32(startY->Text);
		h = Convert::ToInt32(scale->Text);
		n = Convert::ToInt32(count->Text);
		TRAIN = new Train(x, y, h, n);
		TRAIN->show(g);
		Pict->Invalidate();
	}
	private: System::Void Go_button_Click(System::Object^  sender, System::EventArgs^  e) {
		dx = Convert::ToInt32(Speed->Text);
		for (int i = 0; i < 1500; i++) {
			Pict->Refresh();
			Img = gcnew Bitmap(Pict->Width, Pict->Height);
			g = Graphics::FromImage(Img);
			Pict->Image = Img;
			TRAIN->show(g);
			TRAIN->move(dx);
		}
		Pict->Invalidate();
	}
	private: System::Void Pict_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
