#pragma once


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	using namespace System::Collections::Generic;
	using namespace System::Globalization;
	using namespace System::IO;


	//using namespace System::cliext;
	//using namespace System::cliext::list;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Tytuł;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbPriorytet;


	private: System::Windows::Forms::ComboBox^ cmbTyp;
	private: System::Windows::Forms::Button^ bEnd;
	private: System::Windows::Forms::Button^ bAdd;

	private: System::Windows::Forms::DateTimePicker^ dpData;


	private: System::Windows::Forms::TextBox^ txtOpis;
	private: System::Windows::Forms::TextBox^ txtTytul;

	private: System::Windows::Forms::Button^ bFiltr;

	private: System::Windows::Forms::Button^ bSort;
	private: System::Windows::Forms::ComboBox^ cmbFiltr;


	private: System::Windows::Forms::ComboBox^ cmbSort;

	private: System::Windows::Forms::Button^ bDel;


	private: System::Windows::Forms::Button^ bDetail;
	private: System::Windows::Forms::ListView^ listOut;

	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::ColumnHeader^ chTytul;
	private: System::Windows::Forms::ColumnHeader^ chData;
	private: System::Windows::Forms::ColumnHeader^ chTyp;
	private: System::Windows::Forms::ColumnHeader^ chPrior;
	private: System::Windows::Forms::ColumnHeader^ chOpis;
	private: System::Windows::Forms::ListBox^ listDetail;
	private: System::Windows::Forms::DateTimePicker^ dpFiltr;
	private: System::Windows::Forms::Button^ bCFiltr;
	private: System::Windows::Forms::Button^ button1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtOpis = (gcnew System::Windows::Forms::TextBox());
			this->txtTytul = (gcnew System::Windows::Forms::TextBox());
			this->dpData = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbPriorytet = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTyp = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tytuł = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listOut = (gcnew System::Windows::Forms::ListView());
			this->chTytul = (gcnew System::Windows::Forms::ColumnHeader());
			this->chData = (gcnew System::Windows::Forms::ColumnHeader());
			this->chTyp = (gcnew System::Windows::Forms::ColumnHeader());
			this->chPrior = (gcnew System::Windows::Forms::ColumnHeader());
			this->chOpis = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bCFiltr = (gcnew System::Windows::Forms::Button());
			this->dpFiltr = (gcnew System::Windows::Forms::DateTimePicker());
			this->bDetail = (gcnew System::Windows::Forms::Button());
			this->bDel = (gcnew System::Windows::Forms::Button());
			this->bFiltr = (gcnew System::Windows::Forms::Button());
			this->bSort = (gcnew System::Windows::Forms::Button());
			this->cmbFiltr = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSort = (gcnew System::Windows::Forms::ComboBox());
			this->bAdd = (gcnew System::Windows::Forms::Button());
			this->bEnd = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->listDetail = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->txtOpis);
			this->panel1->Controls->Add(this->txtTytul);
			this->panel1->Controls->Add(this->dpData);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->cmbPriorytet);
			this->panel1->Controls->Add(this->cmbTyp);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Tytuł);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(294, 189);
			this->panel1->TabIndex = 0;
			// 
			// txtOpis
			// 
			this->txtOpis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtOpis->Location = System::Drawing::Point(92, 43);
			this->txtOpis->Name = L"txtOpis";
			this->txtOpis->Size = System::Drawing::Size(196, 26);
			this->txtOpis->TabIndex = 11;
			// 
			// txtTytul
			// 
			this->txtTytul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtTytul->Location = System::Drawing::Point(92, 9);
			this->txtTytul->Name = L"txtTytul";
			this->txtTytul->Size = System::Drawing::Size(100, 26);
			this->txtTytul->TabIndex = 10;
			// 
			// dpData
			// 
			this->dpData->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dpData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dpData->Location = System::Drawing::Point(92, 80);
			this->dpData->Name = L"dpData";
			this->dpData->Size = System::Drawing::Size(196, 27);
			this->dpData->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->CausesValidation = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Priorytet";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->CausesValidation = false;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Typ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cmbPriorytet
			// 
			this->cmbPriorytet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbPriorytet->FormattingEnabled = true;
			this->cmbPriorytet->Location = System::Drawing::Point(92, 148);
			this->cmbPriorytet->Name = L"cmbPriorytet";
			this->cmbPriorytet->Size = System::Drawing::Size(197, 28);
			this->cmbPriorytet->TabIndex = 4;
			// 
			// cmbTyp
			// 
			this->cmbTyp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTyp->FormattingEnabled = true;
			this->cmbTyp->Location = System::Drawing::Point(91, 113);
			this->cmbTyp->Name = L"cmbTyp";
			this->cmbTyp->Size = System::Drawing::Size(197, 28);
			this->cmbTyp->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->CausesValidation = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Data";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->CausesValidation = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Opis";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Tytuł
			// 
			this->Tytuł->AutoSize = true;
			this->Tytuł->CausesValidation = false;
			this->Tytuł->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tytuł->Location = System::Drawing::Point(8, 10);
			this->Tytuł->Name = L"Tytuł";
			this->Tytuł->Size = System::Drawing::Size(50, 22);
			this->Tytuł->TabIndex = 0;
			this->Tytuł->Text = L"Tytuł";
			this->Tytuł->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel2->Controls->Add(this->listOut);
			this->panel2->Location = System::Drawing::Point(12, 208);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(608, 439);
			this->panel2->TabIndex = 1;
			// 
			// listOut
			// 
			this->listOut->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->chTytul, this->chData,
					this->chTyp, this->chPrior, this->chOpis
			});
			this->listOut->HideSelection = false;
			this->listOut->Location = System::Drawing::Point(6, 8);
			this->listOut->Name = L"listOut";
			this->listOut->Size = System::Drawing::Size(595, 427);
			this->listOut->TabIndex = 0;
			this->listOut->UseCompatibleStateImageBehavior = false;
			this->listOut->View = System::Windows::Forms::View::Details;
			// 
			// chTytul
			// 
			this->chTytul->Text = L"Tytuł";
			this->chTytul->Width = 100;
			// 
			// chData
			// 
			this->chData->Text = L"Data";
			this->chData->Width = 110;
			// 
			// chTyp
			// 
			this->chTyp->Text = L"Typ";
			this->chTyp->Width = 70;
			// 
			// chPrior
			// 
			this->chPrior->Text = L"Priorytet";
			this->chPrior->Width = 70;
			// 
			// chOpis
			// 
			this->chOpis->Text = L"Opis";
			this->chOpis->Width = 400;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->bCFiltr);
			this->panel3->Controls->Add(this->dpFiltr);
			this->panel3->Controls->Add(this->bDetail);
			this->panel3->Controls->Add(this->bDel);
			this->panel3->Controls->Add(this->bFiltr);
			this->panel3->Controls->Add(this->bSort);
			this->panel3->Controls->Add(this->cmbFiltr);
			this->panel3->Controls->Add(this->cmbSort);
			this->panel3->Controls->Add(this->bAdd);
			this->panel3->Controls->Add(this->bEnd);
			this->panel3->Location = System::Drawing::Point(625, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(251, 635);
			this->panel3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 64);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Wczytaj dane z pliku .txt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// bCFiltr
			// 
			this->bCFiltr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCFiltr->Location = System::Drawing::Point(16, 273);
			this->bCFiltr->Name = L"bCFiltr";
			this->bCFiltr->Size = System::Drawing::Size(226, 33);
			this->bCFiltr->TabIndex = 20;
			this->bCFiltr->Text = L"Usun filtr";
			this->bCFiltr->UseVisualStyleBackColor = true;
			this->bCFiltr->Click += gcnew System::EventHandler(this, &Form1::bCFiltr_Click);
			// 
			// dpFiltr
			// 
			this->dpFiltr->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dpFiltr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dpFiltr->Location = System::Drawing::Point(46, 237);
			this->dpFiltr->Name = L"dpFiltr";
			this->dpFiltr->Size = System::Drawing::Size(196, 27);
			this->dpFiltr->TabIndex = 19;
			// 
			// bDetail
			// 
			this->bDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDetail->Location = System::Drawing::Point(12, 419);
			this->bDetail->Name = L"bDetail";
			this->bDetail->Size = System::Drawing::Size(226, 66);
			this->bDetail->TabIndex = 18;
			this->bDetail->Text = L"Pokaz szczegoly wybranego wydarzenia";
			this->bDetail->UseVisualStyleBackColor = true;
			this->bDetail->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// bDel
			// 
			this->bDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDel->Location = System::Drawing::Point(12, 339);
			this->bDel->Name = L"bDel";
			this->bDel->Size = System::Drawing::Size(226, 62);
			this->bDel->TabIndex = 16;
			this->bDel->Text = L"Usun wybrane wydarzenie";
			this->bDel->UseVisualStyleBackColor = true;
			this->bDel->Click += gcnew System::EventHandler(this, &Form1::bDel_Click);
			// 
			// bFiltr
			// 
			this->bFiltr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFiltr->Location = System::Drawing::Point(14, 185);
			this->bFiltr->Name = L"bFiltr";
			this->bFiltr->Size = System::Drawing::Size(107, 46);
			this->bFiltr->TabIndex = 15;
			this->bFiltr->Text = L"Filtruj";
			this->bFiltr->UseVisualStyleBackColor = true;
			this->bFiltr->Click += gcnew System::EventHandler(this, &Form1::bFiltr_Click);
			// 
			// bSort
			// 
			this->bSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSort->Location = System::Drawing::Point(14, 101);
			this->bSort->Name = L"bSort";
			this->bSort->Size = System::Drawing::Size(107, 46);
			this->bSort->TabIndex = 14;
			this->bSort->Text = L"Sortuj";
			this->bSort->UseVisualStyleBackColor = true;
			this->bSort->Click += gcnew System::EventHandler(this, &Form1::bSort_Click);
			// 
			// cmbFiltr
			// 
			this->cmbFiltr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbFiltr->FormattingEnabled = true;
			this->cmbFiltr->Location = System::Drawing::Point(131, 197);
			this->cmbFiltr->Name = L"cmbFiltr";
			this->cmbFiltr->Size = System::Drawing::Size(111, 28);
			this->cmbFiltr->TabIndex = 13;
			// 
			// cmbSort
			// 
			this->cmbSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbSort->FormattingEnabled = true;
			this->cmbSort->Location = System::Drawing::Point(131, 113);
			this->cmbSort->Name = L"cmbSort";
			this->cmbSort->Size = System::Drawing::Size(111, 28);
			this->cmbSort->TabIndex = 12;
			// 
			// bAdd
			// 
			this->bAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAdd->Location = System::Drawing::Point(14, 25);
			this->bAdd->Name = L"bAdd";
			this->bAdd->Size = System::Drawing::Size(226, 60);
			this->bAdd->TabIndex = 8;
			this->bAdd->Text = L"Dodaj nowe wydarzenie ";
			this->bAdd->UseVisualStyleBackColor = true;
			this->bAdd->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// bEnd
			// 
			this->bEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEnd->Location = System::Drawing::Point(12, 565);
			this->bEnd->Name = L"bEnd";
			this->bEnd->Size = System::Drawing::Size(226, 64);
			this->bEnd->TabIndex = 7;
			this->bEnd->Text = L"Zapisz dane do pliku .txt";
			this->bEnd->UseVisualStyleBackColor = true;
			this->bEnd->Click += gcnew System::EventHandler(this, &Form1::bEnd_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel4->Controls->Add(this->listDetail);
			this->panel4->Location = System::Drawing::Point(312, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(308, 189);
			this->panel4->TabIndex = 2;
			// 
			// listDetail
			// 
			this->listDetail->FormattingEnabled = true;
			this->listDetail->ItemHeight = 16;
			this->listDetail->Location = System::Drawing::Point(3, 5);
			this->listDetail->Name = L"listDetail";
			this->listDetail->Size = System::Drawing::Size(298, 180);
			this->listDetail->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(882, 653);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}




#pragma endregion

		//String^ stdDetails = "{0, -17}{1, -18}{2, -17}{3, -17}{4, -32}";
		SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer;

		static int CompareByDate(ListViewItem^ x, ListViewItem^ y) {
			String^ dateX = x->SubItems[1]->Text;
			String^ dateY = y->SubItems[1]->Text;

			// Відповідний формат дати
			DateTime dateTimeX = DateTime::ParseExact(dateX, "dd.MM.yyyy HH:mm", System::Globalization::CultureInfo::InvariantCulture);
			DateTime dateTimeY = DateTime::ParseExact(dateY, "dd.MM.yyyy HH:mm", System::Globalization::CultureInfo::InvariantCulture);

			return DateTime::Compare(dateTimeX, dateTimeY);
		}

		static int CompareByType(ListViewItem^ x, ListViewItem^ y) {
			String^ typeX = x->SubItems[2]->Text;
			String^ typeY = y->SubItems[2]->Text;

			array<String^>^ order = { "Zdrowie", "Rodzina", "Praca", "Rozrywka", "Sport" };

			int indexX = Array::IndexOf(order, typeX);
			int indexY = Array::IndexOf(order, typeY);
			return indexX - indexY;
		}

		static int CompareByPriority(ListViewItem^ x, ListViewItem^ y) {
			String^ priorityX = x->SubItems[3]->Text;
			String^ priorityY = y->SubItems[3]->Text;

			array<String^>^ order = { "Wysoki", "Sredni", "Niski" };

			int indexX = Array::IndexOf(order, priorityX);
			int indexY = Array::IndexOf(order, priorityY);

			return indexX - indexY;
		}



		void SortListView(ListView^ listView, Comparison<ListViewItem^>^ comparison) {
			array<ListViewItem^>^ items = gcnew array<ListViewItem^>(listView->Items->Count);
			for (int i = 0; i < listView->Items->Count; i++) {
				items[i] = listView->Items[i];
			}
			Array::Sort(items, comparison);

			listView->Items->Clear();
			for each (ListViewItem ^ item in items) {
				listView->Items->Add(item);
			}
		}		   




//add data to listOut
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Tytul = txtTytul->Text;
		String^ Data = dpData->Text;
		String^ Typ = cmbTyp->Text;
		String^ Priorytet = cmbPriorytet->Text;
		String^ Opis = txtOpis->Text;

		if (Tytul != "" && Data != "" && Typ != "" && Priorytet != "" && Opis != "") {
			ListViewItem^ item = gcnew ListViewItem(Tytul, 0);
			item->SubItems->Add(Data);
			item->SubItems->Add(Typ);
			item->SubItems->Add(Priorytet);
			item->SubItems->Add(Opis);

			if (Typ == "Praca") {
				item->ForeColor = Color::Black;
				item->BackColor = Color::LightGreen;
			}
			else if (Typ == "Rodzina") {
				item->ForeColor = Color::Black;
				item->BackColor = Color::LightBlue;
			}
			else if (Typ == "Zdrowie") {
				item->ForeColor = Color::Black;
				item->BackColor = Color::LightPink;
			}
			else if (Typ == "Rozrywka") {
				item->ForeColor = Color::Black;
				item->BackColor = Color::LightYellow;
			}
			else if (Typ == "Sport") {
				item->ForeColor = Color::Black;
				item->BackColor = Color::LightCyan;
			}
			else {
				item->ForeColor = Color::Black;
				item->BackColor = Color::White;
			}

			listOut->Items->Add(item);
			txtTytul->Text = "";
			dpData->Text = "";
			cmbTyp->Text = "";
			cmbPriorytet->Text = "";
			txtOpis->Text = "";
		}
		else {
			MessageBox::Show("Wypelni prosze dane o wydarzeniu", "Uwaga", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
//inicialisation of buttons
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		cmbTyp->Items->Add("Praca");
		cmbTyp->Items->Add("Rodzina");
		cmbTyp->Items->Add("Zdrowie");
		cmbTyp->Items->Add("Rozrywka");
		cmbTyp->Items->Add("Sport");

		cmbPriorytet->Items->Add("Niski");
		cmbPriorytet->Items->Add("Sredni");
		cmbPriorytet->Items->Add("Wysoki");

		cmbSort->Items->Add("Typ");
		cmbSort->Items->Add("Data");
		cmbSort->Items->Add("Priorytet");

		cmbFiltr->Items->Add("Praca");
		cmbFiltr->Items->Add("Rodzina");
		cmbFiltr->Items->Add("Zdrowie");
		cmbFiltr->Items->Add("Rozrywka");
		cmbFiltr->Items->Add("Sport");
		cmbFiltr->Items->Add("Wysoki");
		cmbFiltr->Items->Add("Sredni");
		cmbFiltr->Items->Add("Niski");
	}

//delete the row
	private: System::Void bDel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listOut->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listOut->SelectedItems[0];
			listOut->Items->Remove(selectedItem);
		}
	}
//
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		listDetail->Items->Clear();

		if (listOut->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listOut->SelectedItems[0];

			for (int i = 0; i < selectedItem->SubItems->Count; i++) {
				String^ detail = selectedItem->SubItems[i]->Text;
				listDetail->Items->Add(detail);
			}
		}
	}

//filtr data listOut
	private: System::Void bFiltr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filterValue;
		if (cmbFiltr->SelectedIndex != -1) {
			filterValue = cmbFiltr->SelectedItem->ToString();
		}
		else {
			filterValue = dpFiltr->Value.ToShortDateString();
		}

		List<ListViewItem^>^ filteredItems = gcnew List<ListViewItem^>();

		for each (ListViewItem ^ item in listOut->Items) {
			String^ typ = item->SubItems[0]->Text;
			String^ data = item->SubItems[1]->Text;
			String^ piopytet = item->SubItems[2]->Text;

			if (typ == filterValue || data == filterValue || piopytet == filterValue) {
				filteredItems->Add(item);
			}
		}

		listOut->Items->Clear();

		for each (ListViewItem ^ filteredItem in filteredItems) {
			listOut->Items->Add(filteredItem);
		}
	}

//cancel fitr data
	private: System::Void bCFiltr_Click(System::Object^ sender, System::EventArgs^ e) {
		cmbFiltr->SelectedIndex = -1;
		dpFiltr->Value = DateTime::Now;

		bFiltr_Click(sender, e);
	}

//load data to AdministratorWydarzenOut
	private: System::Void bEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = "AdministratorWydarzenOut.txt";

		if (!File::Exists(filePath)) {
			FileStream^ fs = File::Create(filePath);
			fs->Close();
		}

		StreamWriter^ outFile = gcnew StreamWriter(filePath);

		if (outFile != nullptr) {
			for each (ListViewItem ^ item in listOut->Items) {
				for (int i = 0; i < item->SubItems->Count; i++) {
					outFile->Write(item->SubItems[i]->Text + "\t");
				}
				outFile->WriteLine();
			}
			outFile->Close();
			MessageBox::Show("Dane zapisane do pliku AdministratorWydarzenOut.txt", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Nie udalo sie otworzyc plik AdministratorWydarzenOut.txt", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

//load data from AdministratorWydarzenIn
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = "AdministratorWydarzenIn.txt";

		if (File::Exists(filePath)) {
			StreamReader^ inFile = gcnew StreamReader(filePath);

			if (inFile != nullptr) {
				String^ line;
				while ((line = inFile->ReadLine()) != nullptr) {
					array<String^>^ components = line->Split('\t');
					ListViewItem^ newItem = gcnew ListViewItem(components[0]);
					for (int i = 1; i < components->Length; i++) {
						newItem->SubItems->Add(components[i]);
					}

					listOut->Items->Add(newItem);
				}

				inFile->Close();
				MessageBox::Show("Dane sa wczytane z pliku AdministratorWydarzenIn.txt", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Nie udalo sie otworzyc plik do odczytu", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Plik AdministratorWydarzenIn.txt nie istnie", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

//sorting data
/*private: System::Void bSort_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sortBy = cmbSort->SelectedItem->ToString();

	Comparison<ListViewItem^>^ comparer = nullptr;

	if (sortBy == "Typ") {
		comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByType);
	}
	else if (sortBy == "Priorytet") {
		comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByPriority);
	}
	else if (sortBy == "Data") {
		comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByDate);
	}
	else {
		MessageBox::Show("Wybierz kryterium sortowania.", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	List<ListViewItem^>^ sortedItems = gcnew List<ListViewItem^>();
	for each (ListViewItem ^ item in listOut->Items) {
		sortedItems->Add(item);
	}

	sortedItems->Sort(comparer);

	String^ sortedListMessage = "Lista uporządkowana według " + sortBy + ":\n"; // System.InvalidOperationException: 'Failed to compare two elements in the array.'
	for each (ListViewItem ^ item in sortedItems) {
		sortedListMessage += item->Text + "\n";
	}

	MessageBox::Show(sortedListMessage, "Posortowana lista", MessageBoxButtons::OK, MessageBoxIcon::Information);
}*/
	private: System::Void bSort_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sortBy = (cmbSort->SelectedItem != nullptr) ? cmbSort->SelectedItem->ToString() : nullptr; // Check if SelectedItem is not null

		if (sortBy == nullptr) {
			// Show an error message if no sorting criteria is selected
			MessageBox::Show("Wybierz kryterium sortowania.", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Comparison<ListViewItem^>^ comparer = nullptr;

		// Select the comparison function based on the sorting criteria
		if (sortBy == "Typ") {
			comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByType);
		}
		else if (sortBy == "Priorytet") {
			comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByPriority);
		}
		else if (sortBy == "Data") {
			comparer = gcnew Comparison<ListViewItem^>(&Form1::CompareByDate);
		}
		else {
			// Handle unexpected sorting criteria
			MessageBox::Show("Nieprawidłowe kryterium sortowania.", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Create a list to hold sorted items
		List<ListViewItem^>^ sortedItems = gcnew List<ListViewItem^>();
		for each (ListViewItem ^ item in listOut->Items) {
			sortedItems->Add(item);
		}

		// Sort the items using the selected comparison function
		sortedItems->Sort(comparer);

		// Create a message to display the sorted list
		String^ sortedListMessage = "Lista uporządkowana według " + sortBy + ":\n";
		for each (ListViewItem ^ item in sortedItems) {
			sortedListMessage += item->Text + "\n";
		}

		// Display the sorted list in a message box
		MessageBox::Show(sortedListMessage, "Posortowana lista", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



private: System::Void bFormatData_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
