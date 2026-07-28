#pragma once
#include"Patient_list.h"
namespace finish {

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

	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Button^ max;
	private: System::Windows::Forms::Button^ min;















	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ pn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ searchb;

	private: System::Windows::Forms::Panel^ pn_updat;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ pn_add;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ update;

	private: System::Windows::Forms::Panel^ deletep;

	private: System::Windows::Forms::Panel^ search;
	private: System::Windows::Forms::Panel^ add;
	private: System::Windows::Forms::TextBox^ search_id;












	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ search_but;

	private: System::Windows::Forms::TextBox^ add_name;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ add_age;
	private: System::Windows::Forms::TextBox^ add_phone;


	private: System::Windows::Forms::RichTextBox^ add_disease;












	private: System::Windows::Forms::Label^ l2;
	private: System::Windows::Forms::Label^ l3;
private: System::Windows::Forms::Label^ l4;
private: System::Windows::Forms::Label^ l5;





private: System::Windows::Forms::Label^ l1;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ Delete;














	private: System::Windows::Forms::Button^ button9;
	
	public: Patient_list patient; //define a new object from class patient_list
    public: String^ gender1;
    public: bool cheak;

private: System::Windows::Forms::TextBox^ add_room;
public:

private: System::Windows::Forms::Label^ label25;



private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::RichTextBox^ update_disease;

private: System::Windows::Forms::TextBox^ update_room;
private: System::Windows::Forms::TextBox^ update_phone;
private: System::Windows::Forms::TextBox^ update_age;
private: System::Windows::Forms::TextBox^ update_name;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ l6;
private: System::Windows::Forms::Label^ ls6;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ ls2;
private: System::Windows::Forms::Label^ ls3;
private: System::Windows::Forms::Label^ ls4;
private: System::Windows::Forms::Label^ ls5;
private: System::Windows::Forms::Label^ ls1;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Button^ update_search;

private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ delete_search;
private: System::Windows::Forms::TextBox^ delete_id;


private: System::Windows::Forms::Label^ succes;
private: System::Windows::Forms::Label^ suc;
private: System::Windows::Forms::TextBox^ update_gender;

private: System::Windows::Forms::RadioButton^ female_but;
private: System::Windows::Forms::RadioButton^ male_but;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ update_succed;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::TextBox^ add_id;

private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ add_date;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::TextBox^ update_id;
private: System::Windows::Forms::Label^ labl255;
private: System::Windows::Forms::Label^ l8;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ l7;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ ls8; 
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ ls7;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label8;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->min = (gcnew System::Windows::Forms::Button());
			this->max = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pn = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pn_add = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_updat = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->searchb = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->search = (gcnew System::Windows::Forms::Panel());
			this->ls8 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->ls7 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->ls6 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ls2 = (gcnew System::Windows::Forms::Label());
			this->ls3 = (gcnew System::Windows::Forms::Label());
			this->ls4 = (gcnew System::Windows::Forms::Label());
			this->ls5 = (gcnew System::Windows::Forms::Label());
			this->ls1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->search_but = (gcnew System::Windows::Forms::Button());
			this->search_id = (gcnew System::Windows::Forms::TextBox());
			this->update = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->update_id = (gcnew System::Windows::Forms::TextBox());
			this->update_succed = (gcnew System::Windows::Forms::Label());
			this->labl255 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->update_gender = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->update_search = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->update_disease = (gcnew System::Windows::Forms::RichTextBox());
			this->update_room = (gcnew System::Windows::Forms::TextBox());
			this->update_phone = (gcnew System::Windows::Forms::TextBox());
			this->update_age = (gcnew System::Windows::Forms::TextBox());
			this->update_name = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->add_date = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->female_but = (gcnew System::Windows::Forms::RadioButton());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->male_but = (gcnew System::Windows::Forms::RadioButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->succes = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->add_disease = (gcnew System::Windows::Forms::RichTextBox());
			this->add_room = (gcnew System::Windows::Forms::TextBox());
			this->add_phone = (gcnew System::Windows::Forms::TextBox());
			this->add_age = (gcnew System::Windows::Forms::TextBox());
			this->add_id = (gcnew System::Windows::Forms::TextBox());
			this->add_name = (gcnew System::Windows::Forms::TextBox());
			this->deletep = (gcnew System::Windows::Forms::Panel());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->suc = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->delete_search = (gcnew System::Windows::Forms::Button());
			this->delete_id = (gcnew System::Windows::Forms::TextBox());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->pn->SuspendLayout();
			this->pn_add->SuspendLayout();
			this->pn_updat->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->search->SuspendLayout();
			this->panel2->SuspendLayout();
			this->update->SuspendLayout();
			this->panel5->SuspendLayout();
			this->add->SuspendLayout();
			this->deletep->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// min
			// 
			this->min->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min.BackgroundImage")));
			this->min->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->min->Cursor = System::Windows::Forms::Cursors::Hand;
			this->min->FlatAppearance->BorderSize = 0;
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min->Location = System::Drawing::Point(91, 2);
			this->min->Margin = System::Windows::Forms::Padding(7, 2, 7, 2);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(25, 28);
			this->min->TabIndex = 0;
			this->min->UseVisualStyleBackColor = true;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// max
			// 
			this->max->BackColor = System::Drawing::Color::Transparent;
			this->max->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"max.BackgroundImage")));
			this->max->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->max->Cursor = System::Windows::Forms::Cursors::Hand;
			this->max->FlatAppearance->BorderSize = 0;
			this->max->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->max->Location = System::Drawing::Point(7, 2);
			this->max->Margin = System::Windows::Forms::Padding(7, 2, 7, 2);
			this->max->Name = L"max";
			this->max->Size = System::Drawing::Size(28, 25);
			this->max->TabIndex = 1;
			this->max->UseVisualStyleBackColor = false;
			this->max->Click += gcnew System::EventHandler(this, &MyForm::max_Click);
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Transparent;
			this->close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.BackgroundImage")));
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->FlatAppearance->BorderSize = 0;
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->Location = System::Drawing::Point(49, 2);
			this->close->Margin = System::Windows::Forms::Padding(7, 2, 7, 2);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(28, 25);
			this->close->TabIndex = 2;
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->flowLayoutPanel2->Controls->Add(this->max);
			this->flowLayoutPanel2->Controls->Add(this->close);
			this->flowLayoutPanel2->Controls->Add(this->min);
			this->flowLayoutPanel2->Controls->Add(this->label8);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->ForeColor = System::Drawing::Color::Coral;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(628, 32);
			this->flowLayoutPanel2->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DeepPink;
			this->label8->Location = System::Drawing::Point(221, 2);
			this->label8->Margin = System::Windows::Forms::Padding(98, 2, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(212, 26);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Hospital Mangement";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->flowLayoutPanel1->Controls->Add(this->pn);
			this->flowLayoutPanel1->Controls->Add(this->pn_add);
			this->flowLayoutPanel1->Controls->Add(this->pn_updat);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->Location = System::Drawing::Point(505, 32);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(123, 608);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// pn
			// 
			this->pn->BackColor = System::Drawing::Color::Transparent;
			this->pn->Controls->Add(this->label5);
			this->pn->Controls->Add(this->button5);
			this->pn->Location = System::Drawing::Point(22, 37);
			this->pn->Margin = System::Windows::Forms::Padding(22, 37, 22, 37);
			this->pn->Name = L"pn";
			this->pn->Size = System::Drawing::Size(67, 81);
			this->pn->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label5->Location = System::Drawing::Point(0, 63);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Add patient";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 1;
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseMnemonic = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pn_add
			// 
			this->pn_add->BackColor = System::Drawing::Color::Transparent;
			this->pn_add->Controls->Add(this->label1);
			this->pn_add->Controls->Add(this->button1);
			this->pn_add->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_add->Location = System::Drawing::Point(22, 192);
			this->pn_add->Margin = System::Windows::Forms::Padding(22, 37, 22, 37);
			this->pn_add->Name = L"pn_add";
			this->pn_add->Size = System::Drawing::Size(67, 81);
			this->pn_add->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(0, 63);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"  Search";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pn_updat
			// 
			this->pn_updat->BackColor = System::Drawing::Color::Transparent;
			this->pn_updat->Controls->Add(this->label4);
			this->pn_updat->Controls->Add(this->button3);
			this->pn_updat->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_updat->Location = System::Drawing::Point(22, 347);
			this->pn_updat->Margin = System::Windows::Forms::Padding(22, 37, 22, 37);
			this->pn_updat->Name = L"pn_updat";
			this->pn_updat->Size = System::Drawing::Size(67, 81);
			this->pn_updat->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label4->Location = System::Drawing::Point(0, 63);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"   Update";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 63);
			this->button3->TabIndex = 1;
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->searchb);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(22, 502);
			this->panel4->Margin = System::Windows::Forms::Padding(22, 37, 22, 37);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(67, 81);
			this->panel4->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(0, 63);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"   Delete";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// searchb
			// 
			this->searchb->BackColor = System::Drawing::Color::Transparent;
			this->searchb->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchb.BackgroundImage")));
			this->searchb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->searchb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchb->Dock = System::Windows::Forms::DockStyle::Top;
			this->searchb->FlatAppearance->BorderSize = 0;
			this->searchb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchb->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchb->Location = System::Drawing::Point(0, 0);
			this->searchb->Margin = System::Windows::Forms::Padding(2);
			this->searchb->Name = L"searchb";
			this->searchb->Size = System::Drawing::Size(67, 63);
			this->searchb->TabIndex = 1;
			this->searchb->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->searchb->UseVisualStyleBackColor = false;
			this->searchb->Click += gcnew System::EventHandler(this, &MyForm::searchb_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->update);
			this->panel1->Controls->Add(this->add);
			this->panel1->Controls->Add(this->deletep);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 32);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(505, 608);
			this->panel1->TabIndex = 5;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->search->Controls->Add(this->ls8);
			this->search->Controls->Add(this->label38);
			this->search->Controls->Add(this->ls7);
			this->search->Controls->Add(this->label36);
			this->search->Controls->Add(this->ls6);
			this->search->Controls->Add(this->label6);
			this->search->Controls->Add(this->ls2);
			this->search->Controls->Add(this->ls3);
			this->search->Controls->Add(this->ls4);
			this->search->Controls->Add(this->ls5);
			this->search->Controls->Add(this->ls1);
			this->search->Controls->Add(this->label13);
			this->search->Controls->Add(this->label14);
			this->search->Controls->Add(this->label31);
			this->search->Controls->Add(this->label32);
			this->search->Controls->Add(this->label33);
			this->search->Controls->Add(this->panel2);
			this->search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->search->Location = System::Drawing::Point(0, 0);
			this->search->Margin = System::Windows::Forms::Padding(2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(505, 608);
			this->search->TabIndex = 7;
			// 
			// ls8
			// 
			this->ls8->AutoSize = true;
			this->ls8->BackColor = System::Drawing::Color::Transparent;
			this->ls8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls8->ForeColor = System::Drawing::Color::White;
			this->ls8->Location = System::Drawing::Point(225, 436);
			this->ls8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls8->Name = L"ls8";
			this->ls8->Size = System::Drawing::Size(0, 24);
			this->ls8->TabIndex = 47;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(110, 436);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(64, 26);
			this->label38->TabIndex = 46;
			this->label38->Text = L"Date:";
			// 
			// ls7
			// 
			this->ls7->AutoSize = true;
			this->ls7->BackColor = System::Drawing::Color::Transparent;
			this->ls7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls7->ForeColor = System::Drawing::Color::White;
			this->ls7->Location = System::Drawing::Point(225, 151);
			this->ls7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls7->Name = L"ls7";
			this->ls7->Size = System::Drawing::Size(0, 24);
			this->ls7->TabIndex = 45;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(105, 151);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(46, 26);
			this->label36->TabIndex = 44;
			this->label36->Text = L"ID :";
			// 
			// ls6
			// 
			this->ls6->AutoSize = true;
			this->ls6->BackColor = System::Drawing::Color::Transparent;
			this->ls6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls6->ForeColor = System::Drawing::Color::White;
			this->ls6->Location = System::Drawing::Point(225, 492);
			this->ls6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls6->Name = L"ls6";
			this->ls6->Size = System::Drawing::Size(0, 24);
			this->ls6->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(105, 322);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 26);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Room :";
			// 
			// ls2
			// 
			this->ls2->AutoSize = true;
			this->ls2->BackColor = System::Drawing::Color::Transparent;
			this->ls2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls2->ForeColor = System::Drawing::Color::White;
			this->ls2->Location = System::Drawing::Point(225, 208);
			this->ls2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls2->Name = L"ls2";
			this->ls2->Size = System::Drawing::Size(0, 24);
			this->ls2->TabIndex = 41;
			// 
			// ls3
			// 
			this->ls3->AutoSize = true;
			this->ls3->BackColor = System::Drawing::Color::Transparent;
			this->ls3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls3->ForeColor = System::Drawing::Color::White;
			this->ls3->Location = System::Drawing::Point(225, 265);
			this->ls3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls3->Name = L"ls3";
			this->ls3->Size = System::Drawing::Size(0, 24);
			this->ls3->TabIndex = 40;
			// 
			// ls4
			// 
			this->ls4->AutoSize = true;
			this->ls4->BackColor = System::Drawing::Color::Transparent;
			this->ls4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls4->ForeColor = System::Drawing::Color::White;
			this->ls4->Location = System::Drawing::Point(225, 322);
			this->ls4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls4->Name = L"ls4";
			this->ls4->Size = System::Drawing::Size(0, 24);
			this->ls4->TabIndex = 39;
			// 
			// ls5
			// 
			this->ls5->AutoSize = true;
			this->ls5->BackColor = System::Drawing::Color::Transparent;
			this->ls5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls5->ForeColor = System::Drawing::Color::White;
			this->ls5->Location = System::Drawing::Point(225, 379);
			this->ls5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls5->Name = L"ls5";
			this->ls5->Size = System::Drawing::Size(0, 24);
			this->ls5->TabIndex = 38;
			// 
			// ls1
			// 
			this->ls1->AutoSize = true;
			this->ls1->BackColor = System::Drawing::Color::Transparent;
			this->ls1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ls1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ls1->ForeColor = System::Drawing::Color::White;
			this->ls1->Location = System::Drawing::Point(225, 94);
			this->ls1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ls1->Name = L"ls1";
			this->ls1->Size = System::Drawing::Size(0, 24);
			this->ls1->TabIndex = 37;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(105, 208);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(63, 26);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Age :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(105, 265);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 26);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Phone :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(105, 379);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(96, 26);
			this->label31->TabIndex = 34;
			this->label31->Text = L"Gender :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(105, 492);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(103, 26);
			this->label32->TabIndex = 33;
			this->label32->Text = L"Disease :";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(105, 94);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(83, 26);
			this->label33->TabIndex = 32;
			this->label33->Text = L"Name :";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->search_but);
			this->panel2->Controls->Add(this->search_id);
			this->panel2->Location = System::Drawing::Point(33, 40);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(394, 32);
			this->panel2->TabIndex = 17;
			// 
			// search_but
			// 
			this->search_but->BackColor = System::Drawing::Color::Transparent;
			this->search_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_but.BackgroundImage")));
			this->search_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_but->Dock = System::Windows::Forms::DockStyle::Fill;
			this->search_but->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search_but->FlatAppearance->BorderSize = 2;
			this->search_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_but->Location = System::Drawing::Point(359, 0);
			this->search_but->Margin = System::Windows::Forms::Padding(2);
			this->search_but->Name = L"search_but";
			this->search_but->Size = System::Drawing::Size(35, 32);
			this->search_but->TabIndex = 17;
			this->search_but->UseVisualStyleBackColor = false;
			this->search_but->Click += gcnew System::EventHandler(this, &MyForm::search_but_Click);
			// 
			// search_id
			// 
			this->search_id->Dock = System::Windows::Forms::DockStyle::Left;
			this->search_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_id->Location = System::Drawing::Point(0, 0);
			this->search_id->Margin = System::Windows::Forms::Padding(2);
			this->search_id->Name = L"search_id";
			this->search_id->Size = System::Drawing::Size(359, 32);
			this->search_id->TabIndex = 16;
			this->search_id->Text = L"Enter ID Number";
			this->search_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->search_id->Click += gcnew System::EventHandler(this, &MyForm::search_name_Click);
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update->Controls->Add(this->panel20);
			this->update->Controls->Add(this->update_id);
			this->update->Controls->Add(this->update_succed);
			this->update->Controls->Add(this->labl255);
			this->update->Controls->Add(this->panel17);
			this->update->Controls->Add(this->panel16);
			this->update->Controls->Add(this->panel15);
			this->update->Controls->Add(this->panel14);
			this->update->Controls->Add(this->panel13);
			this->update->Controls->Add(this->panel12);
			this->update->Controls->Add(this->update_gender);
			this->update->Controls->Add(this->panel5);
			this->update->Controls->Add(this->label25);
			this->update->Controls->Add(this->label26);
			this->update->Controls->Add(this->label27);
			this->update->Controls->Add(this->label28);
			this->update->Controls->Add(this->label29);
			this->update->Controls->Add(this->label30);
			this->update->Controls->Add(this->update_disease);
			this->update->Controls->Add(this->update_room);
			this->update->Controls->Add(this->update_phone);
			this->update->Controls->Add(this->update_age);
			this->update->Controls->Add(this->update_name);
			this->update->Controls->Add(this->button9);
			this->update->Dock = System::Windows::Forms::DockStyle::Fill;
			this->update->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->update->Location = System::Drawing::Point(0, 0);
			this->update->Margin = System::Windows::Forms::Padding(2);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(505, 608);
			this->update->TabIndex = 9;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::White;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel20->ForeColor = System::Drawing::Color::White;
			this->panel20->Location = System::Drawing::Point(92, 185);
			this->panel20->Margin = System::Windows::Forms::Padding(2);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(312, 2);
			this->panel20->TabIndex = 51;
			// 
			// update_id
			// 
			this->update_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_id->ForeColor = System::Drawing::Color::White;
			this->update_id->Location = System::Drawing::Point(91, 158);
			this->update_id->Margin = System::Windows::Forms::Padding(2);
			this->update_id->Name = L"update_id";
			this->update_id->Size = System::Drawing::Size(310, 21);
			this->update_id->TabIndex = 50;
			// 
			// update_succed
			// 
			this->update_succed->AutoSize = true;
			this->update_succed->BackColor = System::Drawing::Color::Transparent;
			this->update_succed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_succed->ForeColor = System::Drawing::Color::Red;
			this->update_succed->Location = System::Drawing::Point(223, 574);
			this->update_succed->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->update_succed->Name = L"update_succed";
			this->update_succed->Size = System::Drawing::Size(0, 24);
			this->update_succed->TabIndex = 50;
			// 
			// labl255
			// 
			this->labl255->AutoSize = true;
			this->labl255->BackColor = System::Drawing::Color::Transparent;
			this->labl255->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labl255->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labl255->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->labl255->Location = System::Drawing::Point(86, 132);
			this->labl255->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labl255->Name = L"labl255";
			this->labl255->Size = System::Drawing::Size(40, 26);
			this->labl255->TabIndex = 49;
			this->labl255->Text = L"ID:";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::White;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel17->ForeColor = System::Drawing::Color::White;
			this->panel17->Location = System::Drawing::Point(92, 536);
			this->panel17->Margin = System::Windows::Forms::Padding(2);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(312, 2);
			this->panel17->TabIndex = 49;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->ForeColor = System::Drawing::Color::White;
			this->panel16->Location = System::Drawing::Point(92, 426);
			this->panel16->Margin = System::Windows::Forms::Padding(2);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(312, 2);
			this->panel16->TabIndex = 48;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::White;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel15->ForeColor = System::Drawing::Color::White;
			this->panel15->Location = System::Drawing::Point(92, 366);
			this->panel15->Margin = System::Windows::Forms::Padding(2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(312, 2);
			this->panel15->TabIndex = 47;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::White;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->ForeColor = System::Drawing::Color::White;
			this->panel14->Location = System::Drawing::Point(91, 306);
			this->panel14->Margin = System::Windows::Forms::Padding(2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(312, 2);
			this->panel14->TabIndex = 46;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::White;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->ForeColor = System::Drawing::Color::White;
			this->panel13->Location = System::Drawing::Point(92, 246);
			this->panel13->Margin = System::Windows::Forms::Padding(2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(312, 2);
			this->panel13->TabIndex = 45;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->ForeColor = System::Drawing::Color::White;
			this->panel12->Location = System::Drawing::Point(91, 119);
			this->panel12->Margin = System::Windows::Forms::Padding(2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(312, 2);
			this->panel12->TabIndex = 44;
			// 
			// update_gender
			// 
			this->update_gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_gender->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_gender->ForeColor = System::Drawing::Color::White;
			this->update_gender->Location = System::Drawing::Point(91, 399);
			this->update_gender->Margin = System::Windows::Forms::Padding(2);
			this->update_gender->Name = L"update_gender";
			this->update_gender->Size = System::Drawing::Size(310, 21);
			this->update_gender->TabIndex = 43;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->update_search);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Location = System::Drawing::Point(46, 12);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(394, 32);
			this->panel5->TabIndex = 42;
			// 
			// update_search
			// 
			this->update_search->BackColor = System::Drawing::Color::Black;
			this->update_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_search.BackgroundImage")));
			this->update_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->update_search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->update_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update_search->Location = System::Drawing::Point(358, 0);
			this->update_search->Margin = System::Windows::Forms::Padding(2);
			this->update_search->Name = L"update_search";
			this->update_search->Size = System::Drawing::Size(36, 32);
			this->update_search->TabIndex = 17;
			this->update_search->UseVisualStyleBackColor = false;
			this->update_search->Click += gcnew System::EventHandler(this, &MyForm::update_search_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Salmon;
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(358, 32);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"Enter ID Number";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label25->Location = System::Drawing::Point(87, 312);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 26);
			this->label25->TabIndex = 40;
			this->label25->Text = L"Room :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label26->Location = System::Drawing::Point(87, 189);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(63, 26);
			this->label26->TabIndex = 34;
			this->label26->Text = L"Age :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label27->Location = System::Drawing::Point(87, 249);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(87, 26);
			this->label27->TabIndex = 33;
			this->label27->Text = L"Phone :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label28->Location = System::Drawing::Point(86, 372);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(96, 26);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Gender :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label29->Location = System::Drawing::Point(87, 435);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(103, 26);
			this->label29->TabIndex = 31;
			this->label29->Text = L"Disease :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label30->Location = System::Drawing::Point(87, 61);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(83, 26);
			this->label30->TabIndex = 30;
			this->label30->Text = L"Name :";
			// 
			// update_disease
			// 
			this->update_disease->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_disease->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_disease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_disease->ForeColor = System::Drawing::Color::White;
			this->update_disease->Location = System::Drawing::Point(92, 464);
			this->update_disease->Margin = System::Windows::Forms::Padding(2);
			this->update_disease->Name = L"update_disease";
			this->update_disease->Size = System::Drawing::Size(310, 69);
			this->update_disease->TabIndex = 38;
			this->update_disease->Text = L"";
			// 
			// update_room
			// 
			this->update_room->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_room->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_room->ForeColor = System::Drawing::Color::White;
			this->update_room->Location = System::Drawing::Point(91, 340);
			this->update_room->Margin = System::Windows::Forms::Padding(2);
			this->update_room->Name = L"update_room";
			this->update_room->Size = System::Drawing::Size(310, 21);
			this->update_room->TabIndex = 41;
			// 
			// update_phone
			// 
			this->update_phone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_phone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_phone->ForeColor = System::Drawing::Color::White;
			this->update_phone->Location = System::Drawing::Point(91, 279);
			this->update_phone->Margin = System::Windows::Forms::Padding(2);
			this->update_phone->Name = L"update_phone";
			this->update_phone->Size = System::Drawing::Size(311, 21);
			this->update_phone->TabIndex = 37;
			// 
			// update_age
			// 
			this->update_age->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_age->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_age->ForeColor = System::Drawing::Color::White;
			this->update_age->Location = System::Drawing::Point(91, 220);
			this->update_age->Margin = System::Windows::Forms::Padding(2);
			this->update_age->Name = L"update_age";
			this->update_age->Size = System::Drawing::Size(311, 21);
			this->update_age->TabIndex = 36;
			// 
			// update_name
			// 
			this->update_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->update_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->update_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_name->ForeColor = System::Drawing::Color::White;
			this->update_name->Location = System::Drawing::Point(91, 89);
			this->update_name->Margin = System::Windows::Forms::Padding(2);
			this->update_name->Name = L"update_name";
			this->update_name->Size = System::Drawing::Size(311, 21);
			this->update_name->TabIndex = 35;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::SlateBlue;
			this->button9->Location = System::Drawing::Point(426, 552);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 45);
			this->button9->TabIndex = 29;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add->Controls->Add(this->panel19);
			this->add->Controls->Add(this->panel18);
			this->add->Controls->Add(this->label7);
			this->add->Controls->Add(this->add_date);
			this->add->Controls->Add(this->label3);
			this->add->Controls->Add(this->panel11);
			this->add->Controls->Add(this->panel10);
			this->add->Controls->Add(this->panel9);
			this->add->Controls->Add(this->female_but);
			this->add->Controls->Add(this->panel8);
			this->add->Controls->Add(this->male_but);
			this->add->Controls->Add(this->panel7);
			this->add->Controls->Add(this->panel6);
			this->add->Controls->Add(this->succes);
			this->add->Controls->Add(this->button4);
			this->add->Controls->Add(this->label35);
			this->add->Controls->Add(this->label15);
			this->add->Controls->Add(this->label16);
			this->add->Controls->Add(this->label17);
			this->add->Controls->Add(this->label18);
			this->add->Controls->Add(this->label19);
			this->add->Controls->Add(this->add_disease);
			this->add->Controls->Add(this->add_room);
			this->add->Controls->Add(this->add_phone);
			this->add->Controls->Add(this->add_age);
			this->add->Controls->Add(this->add_id);
			this->add->Controls->Add(this->add_name);
			this->add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add->Location = System::Drawing::Point(0, 0);
			this->add->Margin = System::Windows::Forms::Padding(2);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(505, 608);
			this->add->TabIndex = 6;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::White;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel19->ForeColor = System::Drawing::Color::White;
			this->panel19->Location = System::Drawing::Point(77, 129);
			this->panel19->Margin = System::Windows::Forms::Padding(2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(312, 2);
			this->panel19->TabIndex = 42;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::White;
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel18->ForeColor = System::Drawing::Color::White;
			this->panel18->Location = System::Drawing::Point(80, 416);
			this->panel18->Margin = System::Windows::Forms::Padding(2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(312, 2);
			this->panel18->TabIndex = 39;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(76, 77);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 24);
			this->label7->TabIndex = 40;
			this->label7->Text = L"ID:";
			// 
			// add_date
			// 
			this->add_date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_date->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_date->ForeColor = System::Drawing::Color::White;
			this->add_date->Location = System::Drawing::Point(80, 389);
			this->add_date->Margin = System::Windows::Forms::Padding(2);
			this->add_date->Name = L"add_date";
			this->add_date->Size = System::Drawing::Size(311, 21);
			this->add_date->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(76, 366);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 24);
			this->label3->TabIndex = 37;
			this->label3->Text = L"date :";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->ForeColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(80, 356);
			this->panel11->Margin = System::Windows::Forms::Padding(2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(312, 2);
			this->panel11->TabIndex = 36;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->ForeColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(86, 546);
			this->panel10->Margin = System::Windows::Forms::Padding(2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(312, 2);
			this->panel10->TabIndex = 35;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->ForeColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(80, 310);
			this->panel9->Margin = System::Windows::Forms::Padding(2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(312, 2);
			this->panel9->TabIndex = 34;
			// 
			// female_but
			// 
			this->female_but->AutoSize = true;
			this->female_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female_but->ForeColor = System::Drawing::Color::White;
			this->female_but->Location = System::Drawing::Point(248, 322);
			this->female_but->Margin = System::Windows::Forms::Padding(2);
			this->female_but->Name = L"female_but";
			this->female_but->Size = System::Drawing::Size(80, 24);
			this->female_but->TabIndex = 1;
			this->female_but->TabStop = true;
			this->female_but->Text = L"Female";
			this->female_but->UseVisualStyleBackColor = true;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->ForeColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(80, 249);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(308, 2);
			this->panel8->TabIndex = 33;
			// 
			// male_but
			// 
			this->male_but->AutoSize = true;
			this->male_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male_but->ForeColor = System::Drawing::Color::White;
			this->male_but->Location = System::Drawing::Point(171, 321);
			this->male_but->Margin = System::Windows::Forms::Padding(2);
			this->male_but->Name = L"male_but";
			this->male_but->Size = System::Drawing::Size(61, 24);
			this->male_but->TabIndex = 0;
			this->male_but->TabStop = true;
			this->male_but->Text = L"Male";
			this->male_but->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->ForeColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(80, 188);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(308, 2);
			this->panel7->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->ForeColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(80, 68);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(308, 2);
			this->panel6->TabIndex = 31;
			// 
			// succes
			// 
			this->succes->AutoSize = true;
			this->succes->BackColor = System::Drawing::Color::Transparent;
			this->succes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->succes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->succes->ForeColor = System::Drawing::Color::Chartreuse;
			this->succes->Location = System::Drawing::Point(213, 564);
			this->succes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->succes->Name = L"succes";
			this->succes->Size = System::Drawing::Size(0, 26);
			this->succes->TabIndex = 30;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(440, 552);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 37);
			this->button4->TabIndex = 27;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(74, 257);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(71, 24);
			this->label35->TabIndex = 28;
			this->label35->Text = L"Room :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(74, 135);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 24);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Age :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(74, 196);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(76, 24);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Phone :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(74, 318);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 24);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Gender :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(76, 427);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 24);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Disease :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(74, 15);
			this->label19->Margin = System::Windows::Forms::Padding(2);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(71, 24);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Name :";
			// 
			// add_disease
			// 
			this->add_disease->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_disease->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_disease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_disease->ForeColor = System::Drawing::Color::White;
			this->add_disease->Location = System::Drawing::Point(86, 453);
			this->add_disease->Margin = System::Windows::Forms::Padding(2);
			this->add_disease->Name = L"add_disease";
			this->add_disease->Size = System::Drawing::Size(313, 88);
			this->add_disease->TabIndex = 25;
			this->add_disease->Text = L"";
			// 
			// add_room
			// 
			this->add_room->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_room->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_room->ForeColor = System::Drawing::Color::White;
			this->add_room->Location = System::Drawing::Point(80, 283);
			this->add_room->Margin = System::Windows::Forms::Padding(2);
			this->add_room->Name = L"add_room";
			this->add_room->Size = System::Drawing::Size(311, 21);
			this->add_room->TabIndex = 29;
			// 
			// add_phone
			// 
			this->add_phone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_phone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_phone->ForeColor = System::Drawing::Color::White;
			this->add_phone->Location = System::Drawing::Point(80, 222);
			this->add_phone->Margin = System::Windows::Forms::Padding(2);
			this->add_phone->Name = L"add_phone";
			this->add_phone->Size = System::Drawing::Size(310, 21);
			this->add_phone->TabIndex = 24;
			// 
			// add_age
			// 
			this->add_age->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_age->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_age->ForeColor = System::Drawing::Color::White;
			this->add_age->Location = System::Drawing::Point(80, 161);
			this->add_age->Margin = System::Windows::Forms::Padding(2);
			this->add_age->Name = L"add_age";
			this->add_age->Size = System::Drawing::Size(310, 21);
			this->add_age->TabIndex = 22;
			// 
			// add_id
			// 
			this->add_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_id->ForeColor = System::Drawing::Color::White;
			this->add_id->Location = System::Drawing::Point(77, 102);
			this->add_id->Margin = System::Windows::Forms::Padding(2);
			this->add_id->Name = L"add_id";
			this->add_id->Size = System::Drawing::Size(311, 21);
			this->add_id->TabIndex = 41;
			// 
			// add_name
			// 
			this->add_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->add_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->add_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_name->ForeColor = System::Drawing::Color::White;
			this->add_name->Location = System::Drawing::Point(80, 41);
			this->add_name->Margin = System::Windows::Forms::Padding(2);
			this->add_name->Name = L"add_name";
			this->add_name->Size = System::Drawing::Size(308, 21);
			this->add_name->TabIndex = 21;
			// 
			// deletep
			// 
			this->deletep->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->deletep->Controls->Add(this->l8);
			this->deletep->Controls->Add(this->label9);
			this->deletep->Controls->Add(this->l7);
			this->deletep->Controls->Add(this->label12);
			this->deletep->Controls->Add(this->suc);
			this->deletep->Controls->Add(this->panel3);
			this->deletep->Controls->Add(this->Delete);
			this->deletep->Controls->Add(this->l6);
			this->deletep->Controls->Add(this->label10);
			this->deletep->Controls->Add(this->l2);
			this->deletep->Controls->Add(this->l3);
			this->deletep->Controls->Add(this->l4);
			this->deletep->Controls->Add(this->l5);
			this->deletep->Controls->Add(this->l1);
			this->deletep->Controls->Add(this->label20);
			this->deletep->Controls->Add(this->label21);
			this->deletep->Controls->Add(this->label22);
			this->deletep->Controls->Add(this->label23);
			this->deletep->Controls->Add(this->label24);
			this->deletep->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deletep->Location = System::Drawing::Point(0, 0);
			this->deletep->Margin = System::Windows::Forms::Padding(2);
			this->deletep->Name = L"deletep";
			this->deletep->Size = System::Drawing::Size(505, 608);
			this->deletep->TabIndex = 8;
			// 
			// l8
			// 
			this->l8->AutoSize = true;
			this->l8->BackColor = System::Drawing::Color::Transparent;
			this->l8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l8->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l8->Location = System::Drawing::Point(202, 431);
			this->l8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(0, 24);
			this->l8->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label9->Location = System::Drawing::Point(90, 431);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 26);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Date: ";
			// 
			// l7
			// 
			this->l7->AutoSize = true;
			this->l7->BackColor = System::Drawing::Color::Transparent;
			this->l7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l7->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l7->Location = System::Drawing::Point(202, 187);
			this->l7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(0, 24);
			this->l7->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label12->Location = System::Drawing::Point(90, 187);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 26);
			this->label12->TabIndex = 36;
			this->label12->Text = L"ID :";
			// 
			// suc
			// 
			this->suc->AutoSize = true;
			this->suc->BackColor = System::Drawing::Color::Transparent;
			this->suc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->suc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->suc->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->suc->Location = System::Drawing::Point(202, 566);
			this->suc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->suc->Name = L"suc";
			this->suc->Size = System::Drawing::Size(0, 26);
			this->suc->TabIndex = 33;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->delete_search);
			this->panel3->Controls->Add(this->delete_id);
			this->panel3->Location = System::Drawing::Point(40, 42);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(394, 32);
			this->panel3->TabIndex = 32;
			// 
			// delete_search
			// 
			this->delete_search->BackColor = System::Drawing::Color::Transparent;
			this->delete_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_search.BackgroundImage")));
			this->delete_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->delete_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->delete_search->FlatAppearance->BorderSize = 2;
			this->delete_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_search->Location = System::Drawing::Point(359, 0);
			this->delete_search->Margin = System::Windows::Forms::Padding(2);
			this->delete_search->Name = L"delete_search";
			this->delete_search->Size = System::Drawing::Size(35, 32);
			this->delete_search->TabIndex = 17;
			this->delete_search->UseVisualStyleBackColor = false;
			this->delete_search->Click += gcnew System::EventHandler(this, &MyForm::delete_search_Click);
			// 
			// delete_id
			// 
			this->delete_id->Dock = System::Windows::Forms::DockStyle::Left;
			this->delete_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_id->ForeColor = System::Drawing::Color::OrangeRed;
			this->delete_id->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->delete_id->Location = System::Drawing::Point(0, 0);
			this->delete_id->Margin = System::Windows::Forms::Padding(2);
			this->delete_id->Name = L"delete_id";
			this->delete_id->Size = System::Drawing::Size(359, 32);
			this->delete_id->TabIndex = 16;
			this->delete_id->Text = L"Enter ID Number";
			this->delete_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->delete_id->Click += gcnew System::EventHandler(this, &MyForm::delete_name_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::Transparent;
			this->Delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.BackgroundImage")));
			this->Delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Delete->FlatAppearance->BorderSize = 2;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete->Location = System::Drawing::Point(433, 566);
			this->Delete->Margin = System::Windows::Forms::Padding(2);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(52, 37);
			this->Delete->TabIndex = 29;
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// l6
			// 
			this->l6->AutoSize = true;
			this->l6->BackColor = System::Drawing::Color::Transparent;
			this->l6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l6->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l6->Location = System::Drawing::Point(202, 479);
			this->l6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(0, 24);
			this->l6->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label10->Location = System::Drawing::Point(90, 333);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 26);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Room :";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->BackColor = System::Drawing::Color::Transparent;
			this->l2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l2->Location = System::Drawing::Point(202, 236);
			this->l2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(0, 24);
			this->l2->TabIndex = 27;
			// 
			// l3
			// 
			this->l3->AutoSize = true;
			this->l3->BackColor = System::Drawing::Color::Transparent;
			this->l3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l3->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l3->Location = System::Drawing::Point(202, 284);
			this->l3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(0, 24);
			this->l3->TabIndex = 26;
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->BackColor = System::Drawing::Color::Transparent;
			this->l4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l4->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l4->Location = System::Drawing::Point(202, 333);
			this->l4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(0, 24);
			this->l4->TabIndex = 25;
			// 
			// l5
			// 
			this->l5->AutoSize = true;
			this->l5->BackColor = System::Drawing::Color::Transparent;
			this->l5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l5->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l5->Location = System::Drawing::Point(202, 382);
			this->l5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(0, 24);
			this->l5->TabIndex = 24;
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->BackColor = System::Drawing::Color::Transparent;
			this->l1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l1->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->l1->Location = System::Drawing::Point(202, 138);
			this->l1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(0, 24);
			this->l1->TabIndex = 23;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label20->Location = System::Drawing::Point(90, 236);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 26);
			this->label20->TabIndex = 22;
			this->label20->Text = L"Age :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label21->Location = System::Drawing::Point(90, 284);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(87, 26);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Phone :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label22->Location = System::Drawing::Point(90, 382);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(96, 26);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Gender :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label23->Location = System::Drawing::Point(90, 479);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 26);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Disease :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label24->Location = System::Drawing::Point(90, 138);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(83, 26);
			this->label24->TabIndex = 18;
			this->label24->Text = L"Name :";
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(628, 640);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->pn->ResumeLayout(false);
			this->pn->PerformLayout();
			this->pn_add->ResumeLayout(false);
			this->pn_add->PerformLayout();
			this->pn_updat->ResumeLayout(false);
			this->pn_updat->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->search->ResumeLayout(false);
			this->search->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->update->ResumeLayout(false);
			this->update->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->add->ResumeLayout(false);
			this->add->PerformLayout();
			this->deletep->ResumeLayout(false);
			this->deletep->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
// open add panel
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	add->BringToFront();
}
//open delete panel
private: System::Void searchb_Click(System::Object^ sender, System::EventArgs^ e) {
	deletep->BringToFront();
}
// open update panel
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	update->BringToFront();
}
// open search panel
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	search->BringToFront();
}
// call the add function to add a patient to the list
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (add_name->Text == ""|| add_name->Text == " "|| add_name->Text == "  "|| add_name->Text == "   ")
		MessageBox::Show("invalid name","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
	{
		if (male_but->Checked == true)
			gender1 = male_but->Text;
		else
			gender1 = female_but->Text;
		cheak = patient.add(add_name->Text, add_age->Text, add_phone->Text, add_room->Text, gender1, add_disease->Text, add_id->Text, add_date->Text);
		if (cheak)
		{
			succes->Text = "succeed ";
			add_name->Text = "";
			add_age->Text = "";
			add_phone->Text = "";
			add_room->Text = "";
			add_disease->Text = "";
			add_id->Text = "";
			add_date->Text = "";
			male_but->Checked = false;
			female_but->Checked = false;
		}
		else
			MessageBox::Show("ID already exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
// call the update function to change the patient data
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	patient.update(update_name->Text, update_age->Text, update_phone->Text, update_room->Text,update_gender->Text, update_disease->Text,update_id->Text);
	update_succed->Text = "Succed";
}
// call the delete function to delete a patient 
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	patient.delet(delete_id->Text);
	suc->Text = "succeed";
	l1->Text = "";
	l2->Text = "";
	l3->Text = "";
	l4->Text = "";
	l5->Text = "";
	l6->Text = "";
	l7->Text = "";
	l8->Text = "";
}

// search for an existed patient
private: System::Void search_but_Click(System::Object^ sender, System::EventArgs^ e) {
	if (patient.search(search_id->Text))//check if the patient exist
	{
		ls1->Text = patient.ret_name(search_id->Text);
		ls2->Text = patient.ret_age(search_id->Text);
		ls3->Text = patient.ret_phone(search_id->Text);
		ls4->Text = patient.ret_room(search_id->Text);
		ls5->Text = patient.ret_gender(search_id->Text);
		ls6->Text = patient.ret_disease(search_id->Text);
		ls7->Text = patient.ret_id(search_id->Text);
		ls8->Text = patient.ret_date(search_id->Text);
	}
	else
		MessageBox::Show("The patient not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

	   // print the patient data in the delete panel
private: System::Void delete_search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (patient.search(delete_id->Text))//check if the patient exist
	{
		l1->Text = patient.ret_name(delete_id->Text);
		l2->Text = patient.ret_age(delete_id->Text);
		l3->Text = patient.ret_phone(delete_id->Text);
		l4->Text = patient.ret_room(delete_id->Text);
		l5->Text = patient.ret_gender(delete_id->Text);
		l6->Text = patient.ret_disease(delete_id->Text);
		l7->Text = patient.ret_id(delete_id->Text);
		l8->Text = patient.ret_date(delete_id->Text);
	}
	else
		MessageBox::Show("The patient not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

	   // print the patient data in the update panel
private: System::Void update_search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (patient.search(textBox2->Text))//check if the patient exist
	{
		update_name->Text = patient.ret_name(textBox2->Text);
		update_age->Text = patient.ret_age(textBox2->Text);
		update_phone->Text = patient.ret_phone(textBox2->Text);
		update_room->Text = patient.ret_room(textBox2->Text);
		update_gender->Text = patient.ret_gender(textBox2->Text);
		update_disease->Text = patient.ret_disease(textBox2->Text);
		update_id->Text = patient.ret_id(textBox2->Text);
	}
	else
		MessageBox::Show("The patient not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

		//  minimized the program
private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}

	   // close the program
private: System::Void max_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}

	   // maxmized the program
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
	}

}

	   //clear the delete textbox
private: System::Void delete_name_Click(System::Object^ sender, System::EventArgs^ e) {
	if (delete_id->Text == "Enter ID Number")
	{
		delete_id->Text = "";
	}
}

	   //clear the search textbox
private: System::Void search_name_Click(System::Object^ sender, System::EventArgs^ e) {
	if (search_id->Text == "Enter ID Number")
	{
		search_id->Text = "";
	}
}

	   // clear the update textbox
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Enter ID Number")
	{
		textBox2->Text = "";
	}
}
};
}
