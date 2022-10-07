#pragma once
#include "List.h"

namespace Lab5Ejercicio1CarlosDiego {

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
		//llamada a la clase
		List* Lista = new List();

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
	private: System::Windows::Forms::Panel^ panelBotons;
	private: System::Windows::Forms::Button^ btnGetItem;
	private: System::Windows::Forms::Button^ btnLastIndex;
	private: System::Windows::Forms::Button^ btnIndex;
	private: System::Windows::Forms::Button^ btnContains;
	protected:




	private: System::Windows::Forms::Button^ btnCount;
	private: System::Windows::Forms::Button^ btnClear;


	private: System::Windows::Forms::Button^ btnRemoveAt;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnSetItem;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnAdd;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lbLista;

	private: System::Windows::Forms::TextBox^ tbGetItem;

	private: System::Windows::Forms::TextBox^ tbRemove;
	private: System::Windows::Forms::TextBox^ tbContains;
	private: System::Windows::Forms::TextBox^ tbLastIndex;



	private: System::Windows::Forms::TextBox^ tbIndex;

	private: System::Windows::Forms::TextBox^ tbNumeroSet;
	private: System::Windows::Forms::TextBox^ tbRemoveAt;


	private: System::Windows::Forms::TextBox^ tbPosicionSet;

	private: System::Windows::Forms::TextBox^ tbInsert;

	private: System::Windows::Forms::TextBox^ tbAdd;
	private: System::Windows::Forms::Label^ label2;


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
			this->panelBotons = (gcnew System::Windows::Forms::Panel());
			this->tbGetItem = (gcnew System::Windows::Forms::TextBox());
			this->tbRemove = (gcnew System::Windows::Forms::TextBox());
			this->tbContains = (gcnew System::Windows::Forms::TextBox());
			this->tbLastIndex = (gcnew System::Windows::Forms::TextBox());
			this->tbIndex = (gcnew System::Windows::Forms::TextBox());
			this->tbNumeroSet = (gcnew System::Windows::Forms::TextBox());
			this->tbRemoveAt = (gcnew System::Windows::Forms::TextBox());
			this->tbPosicionSet = (gcnew System::Windows::Forms::TextBox());
			this->tbInsert = (gcnew System::Windows::Forms::TextBox());
			this->tbAdd = (gcnew System::Windows::Forms::TextBox());
			this->btnGetItem = (gcnew System::Windows::Forms::Button());
			this->btnLastIndex = (gcnew System::Windows::Forms::Button());
			this->btnIndex = (gcnew System::Windows::Forms::Button());
			this->btnContains = (gcnew System::Windows::Forms::Button());
			this->btnCount = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnRemoveAt = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnSetItem = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbLista = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelBotons->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelBotons
			// 
			this->panelBotons->Controls->Add(this->label2);
			this->panelBotons->Controls->Add(this->tbGetItem);
			this->panelBotons->Controls->Add(this->tbRemove);
			this->panelBotons->Controls->Add(this->tbContains);
			this->panelBotons->Controls->Add(this->tbLastIndex);
			this->panelBotons->Controls->Add(this->tbIndex);
			this->panelBotons->Controls->Add(this->tbNumeroSet);
			this->panelBotons->Controls->Add(this->tbRemoveAt);
			this->panelBotons->Controls->Add(this->tbPosicionSet);
			this->panelBotons->Controls->Add(this->tbInsert);
			this->panelBotons->Controls->Add(this->tbAdd);
			this->panelBotons->Controls->Add(this->btnGetItem);
			this->panelBotons->Controls->Add(this->btnLastIndex);
			this->panelBotons->Controls->Add(this->btnIndex);
			this->panelBotons->Controls->Add(this->btnContains);
			this->panelBotons->Controls->Add(this->btnCount);
			this->panelBotons->Controls->Add(this->btnClear);
			this->panelBotons->Controls->Add(this->btnRemoveAt);
			this->panelBotons->Controls->Add(this->btnRemove);
			this->panelBotons->Controls->Add(this->btnSetItem);
			this->panelBotons->Controls->Add(this->btnInsert);
			this->panelBotons->Controls->Add(this->btnAdd);
			this->panelBotons->Controls->Add(this->label1);
			this->panelBotons->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelBotons->Location = System::Drawing::Point(0, 0);
			this->panelBotons->Name = L"panelBotons";
			this->panelBotons->Size = System::Drawing::Size(840, 687);
			this->panelBotons->TabIndex = 1;
			this->panelBotons->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelBotons_Paint);
			// 
			// tbGetItem
			// 
			this->tbGetItem->Location = System::Drawing::Point(482, 406);
			this->tbGetItem->Name = L"tbGetItem";
			this->tbGetItem->Size = System::Drawing::Size(100, 22);
			this->tbGetItem->TabIndex = 21;
			// 
			// tbRemove
			// 
			this->tbRemove->Location = System::Drawing::Point(26, 561);
			this->tbRemove->Name = L"tbRemove";
			this->tbRemove->Size = System::Drawing::Size(100, 22);
			this->tbRemove->TabIndex = 20;
			// 
			// tbContains
			// 
			this->tbContains->Location = System::Drawing::Point(482, 153);
			this->tbContains->Name = L"tbContains";
			this->tbContains->Size = System::Drawing::Size(100, 22);
			this->tbContains->TabIndex = 19;
			// 
			// tbLastIndex
			// 
			this->tbLastIndex->Location = System::Drawing::Point(482, 332);
			this->tbLastIndex->Name = L"tbLastIndex";
			this->tbLastIndex->Size = System::Drawing::Size(100, 22);
			this->tbLastIndex->TabIndex = 18;
			// 
			// tbIndex
			// 
			this->tbIndex->Location = System::Drawing::Point(482, 233);
			this->tbIndex->Name = L"tbIndex";
			this->tbIndex->Size = System::Drawing::Size(100, 22);
			this->tbIndex->TabIndex = 17;
			// 
			// tbNumeroSet
			// 
			this->tbNumeroSet->Location = System::Drawing::Point(26, 396);
			this->tbNumeroSet->Name = L"tbNumeroSet";
			this->tbNumeroSet->Size = System::Drawing::Size(100, 22);
			this->tbNumeroSet->TabIndex = 16;
			this->tbNumeroSet->Text = L"numero";
			// 
			// tbRemoveAt
			// 
			this->tbRemoveAt->Location = System::Drawing::Point(26, 477);
			this->tbRemoveAt->Name = L"tbRemoveAt";
			this->tbRemoveAt->Size = System::Drawing::Size(100, 22);
			this->tbRemoveAt->TabIndex = 15;
			// 
			// tbPosicionSet
			// 
			this->tbPosicionSet->Location = System::Drawing::Point(26, 347);
			this->tbPosicionSet->Name = L"tbPosicionSet";
			this->tbPosicionSet->Size = System::Drawing::Size(100, 22);
			this->tbPosicionSet->TabIndex = 14;
			this->tbPosicionSet->Text = L"posicion";
			// 
			// tbInsert
			// 
			this->tbInsert->Location = System::Drawing::Point(36, 225);
			this->tbInsert->Name = L"tbInsert";
			this->tbInsert->Size = System::Drawing::Size(100, 22);
			this->tbInsert->TabIndex = 13;
			this->tbInsert->Text = L"posicion";
			// 
			// tbAdd
			// 
			this->tbAdd->Location = System::Drawing::Point(36, 155);
			this->tbAdd->Name = L"tbAdd";
			this->tbAdd->Size = System::Drawing::Size(100, 22);
			this->tbAdd->TabIndex = 12;
			this->tbAdd->Text = L"numero";
			// 
			// btnGetItem
			// 
			this->btnGetItem->Location = System::Drawing::Point(633, 405);
			this->btnGetItem->Name = L"btnGetItem";
			this->btnGetItem->Size = System::Drawing::Size(122, 23);
			this->btnGetItem->TabIndex = 11;
			this->btnGetItem->Text = L"Get Item";
			this->btnGetItem->UseVisualStyleBackColor = true;
			this->btnGetItem->Click += gcnew System::EventHandler(this, &MyForm::btnGetItem_Click);
			// 
			// btnLastIndex
			// 
			this->btnLastIndex->Location = System::Drawing::Point(633, 332);
			this->btnLastIndex->Name = L"btnLastIndex";
			this->btnLastIndex->Size = System::Drawing::Size(122, 23);
			this->btnLastIndex->TabIndex = 10;
			this->btnLastIndex->Text = L"Last Index";
			this->btnLastIndex->UseVisualStyleBackColor = true;
			this->btnLastIndex->Click += gcnew System::EventHandler(this, &MyForm::btnLastIndex_Click);
			// 
			// btnIndex
			// 
			this->btnIndex->Location = System::Drawing::Point(633, 233);
			this->btnIndex->Name = L"btnIndex";
			this->btnIndex->Size = System::Drawing::Size(122, 23);
			this->btnIndex->TabIndex = 9;
			this->btnIndex->Text = L"Index";
			this->btnIndex->UseVisualStyleBackColor = true;
			this->btnIndex->Click += gcnew System::EventHandler(this, &MyForm::btnIndex_Click);
			// 
			// btnContains
			// 
			this->btnContains->Location = System::Drawing::Point(633, 153);
			this->btnContains->Name = L"btnContains";
			this->btnContains->Size = System::Drawing::Size(122, 30);
			this->btnContains->TabIndex = 8;
			this->btnContains->Text = L"Contains";
			this->btnContains->UseVisualStyleBackColor = true;
			this->btnContains->Click += gcnew System::EventHandler(this, &MyForm::btnContains_Click);
			// 
			// btnCount
			// 
			this->btnCount->Location = System::Drawing::Point(492, 516);
			this->btnCount->Name = L"btnCount";
			this->btnCount->Size = System::Drawing::Size(122, 23);
			this->btnCount->TabIndex = 7;
			this->btnCount->Text = L"Count";
			this->btnCount->UseVisualStyleBackColor = true;
			this->btnCount->Click += gcnew System::EventHandler(this, &MyForm::btnCount_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(492, 569);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(122, 23);
			this->btnClear->TabIndex = 6;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnRemoveAt
			// 
			this->btnRemoveAt->Location = System::Drawing::Point(172, 476);
			this->btnRemoveAt->Name = L"btnRemoveAt";
			this->btnRemoveAt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnRemoveAt->Size = System::Drawing::Size(122, 23);
			this->btnRemoveAt->TabIndex = 5;
			this->btnRemoveAt->Text = L"Remover At";
			this->btnRemoveAt->UseVisualStyleBackColor = true;
			this->btnRemoveAt->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveAt_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(172, 560);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(122, 23);
			this->btnRemove->TabIndex = 4;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnSetItem
			// 
			this->btnSetItem->Location = System::Drawing::Point(172, 336);
			this->btnSetItem->Name = L"btnSetItem";
			this->btnSetItem->Size = System::Drawing::Size(122, 91);
			this->btnSetItem->TabIndex = 3;
			this->btnSetItem->Text = L"Set Item";
			this->btnSetItem->UseVisualStyleBackColor = true;
			this->btnSetItem->Click += gcnew System::EventHandler(this, &MyForm::btnSetItem_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(182, 225);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(122, 23);
			this->btnInsert->TabIndex = 2;
			this->btnInsert->Text = L"Insert";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &MyForm::btnInsert_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(182, 155);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(122, 23);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Laboratorio 5: \r\nCarlos Daniel Barrientos Castillo -1040121\r\nDiego Andre Cordon H"
				L"ernandez -1094021";
			// 
			// lbLista
			// 
			this->lbLista->FormattingEnabled = true;
			this->lbLista->ItemHeight = 16;
			this->lbLista->Location = System::Drawing::Point(949, 51);
			this->lbLista->Name = L"lbLista";
			this->lbLista->Size = System::Drawing::Size(165, 596);
			this->lbLista->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(261, 17);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Este insert inserta el dato del boton Add";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1275, 687);
			this->Controls->Add(this->lbLista);
			this->Controls->Add(this->panelBotons);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panelBotons->ResumeLayout(false);
			this->panelBotons->PerformLayout();
			this->ResumeLayout(false);

		}
		void LLenarLista() {
			lbLista->Items->Clear();
			for (int i = 0; i < Lista->Count(); i++)
			{
				lbLista->Items->Add(Lista->GetItem(i));
			}
		}
#pragma endregion
	private: System::Void panelBotons_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int dato = Convert::ToInt32(tbAdd->Text);
		Lista->Add(dato);
		LLenarLista();
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToUInt32(tbInsert->Text);
		int dato = Convert::ToInt32(tbAdd->Text);
		Lista->Insert(posicion, dato);
		LLenarLista();
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnSetItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToUInt32(tbPosicionSet->Text);
		int dato = Convert::ToInt32(tbNumeroSet->Text);
		if (posicion < Lista->Count())
		{
			Lista->SetItem(posicion, dato);
			LLenarLista();
		}
		else {
			MessageBox::Show("La posicion que busca es mayor a la cantidad de elementos que posee la Lista",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnRemoveAt_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToInt32(tbRemoveAt->Text);
		if (posicion < Lista->Count())
		{
			Lista->RemoveAt(posicion);
			LLenarLista();
		}
		else {
			MessageBox::Show("La posicion que busca es mayor a la cantidad de elementos que posee la Lista",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (Lista->Count() != 0)
		{
			int dato = Convert::ToInt32(tbRemove->Text);
			if (Lista->Remove(dato)) {
				MessageBox::Show("Se elimino el dato",
					"Operacion Exitosa",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No se pudo eliminar el dato",
					"Operacion fallida",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			LLenarLista();
		}
		else {
			MessageBox::Show("No se pudo eliminar algo porque la lista esta vacia",
				"Operacion fallida",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnContains_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int datoABuscar = Convert::ToInt32(tbContains->Text);
		if (Lista->Contains(datoABuscar)) {
			MessageBox::Show("El dato si se encuentra en la lista",
				"Operacion exitosa",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("El dato no se encuentra en la lista",
				"Operacion fallida",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnIndex_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
	int indice = Convert::ToInt32(tbIndex->Text);
	int indiceResultado = Lista->IndexOf(indice);
	if (Lista->Contains(indice))
	{
		MessageBox::Show("Primer indice: " + indiceResultado,
			"Operacion Exitosa",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No se pudo encontrar el indice",
			"Operacion Fallida",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
}
	   catch (Exception^ e)
	   {
		   MessageBox::Show("No se pudo concretar la operacion",
			   "Error",
			   MessageBoxButtons::OK,
			   MessageBoxIcon::Warning);
	   }
}
private: System::Void btnLastIndex_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int indice = Convert::ToInt32(tbLastIndex->Text);
		int IndiceResultado = Lista->LastIndexOf(indice);
		if (Lista->Contains(indice))
		{
			MessageBox::Show("El ultimo indice es " + IndiceResultado,
				"Operacion Exitosa",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se pudo encontrar el indice",
				"Operacion Fallida",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnGetItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int posicion = Convert::ToInt32(tbGetItem->Text);
		if (posicion < 0 || posicion > Lista->Count()) {
			MessageBox::Show("La posicion que quizo ingresar no es valida",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
		else {
			int dato = Lista->GetItem(posicion);
			MessageBox::Show("Dato de la posicion: " + dato,
				"Obtener dato",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnCount_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int datosLista = Lista->Count();
		MessageBox::Show("Cantidad de datos: " + datosLista,
			"Funcion Contar",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Lista->Count() > 0) {
			Lista->Clear();
			LLenarLista();
		}
		else {
			MessageBox::Show("La lista ya esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo concretar la operacion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
};
}
