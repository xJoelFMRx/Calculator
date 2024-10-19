#pragma once
#include "math.h"

namespace EjercicioCalculadoraClase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Calculadora
	/// </summary>
	public ref class Calculadora : public System::Windows::Forms::Form
	{
	public:
		Calculadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Calculadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxPantalla;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonSuma;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ buttonMultiplicacion;
	private: System::Windows::Forms::Button^ buttonPunto;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonIgual;
	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ buttonPotencia;














	private: System::Windows::Forms::Button^ buttonRaiz;
	private: System::Windows::Forms::Button^ buttonLimpiar;
	private: System::Windows::Forms::Button^ buttonResta;












	protected:

	private:
		double primernumero, segundonumero, resultado = 0;
		char operacion;
		bool punto = false;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxPantalla = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonSuma = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiplicacion = (gcnew System::Windows::Forms::Button());
			this->buttonPunto = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonIgual = (gcnew System::Windows::Forms::Button());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->buttonPotencia = (gcnew System::Windows::Forms::Button());
			this->buttonRaiz = (gcnew System::Windows::Forms::Button());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonResta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxPantalla
			// 
			this->textBoxPantalla->Location = System::Drawing::Point(26, 34);
			this->textBoxPantalla->Multiline = true;
			this->textBoxPantalla->Name = L"textBoxPantalla";
			this->textBoxPantalla->Size = System::Drawing::Size(479, 91);
			this->textBoxPantalla->TabIndex = 0;
			this->textBoxPantalla->TextChanged += gcnew System::EventHandler(this, &Calculadora::textBoxPantalla_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculadora::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(149, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 57);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculadora::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(272, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculadora::button3_Click);
			// 
			// buttonSuma
			// 
			this->buttonSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSuma->Location = System::Drawing::Point(392, 162);
			this->buttonSuma->Name = L"buttonSuma";
			this->buttonSuma->Size = System::Drawing::Size(113, 57);
			this->buttonSuma->TabIndex = 4;
			this->buttonSuma->Text = L"+";
			this->buttonSuma->UseVisualStyleBackColor = true;
			this->buttonSuma->Click += gcnew System::EventHandler(this, &Calculadora::buttonSuma_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(26, 240);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 57);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculadora::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(149, 240);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 57);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculadora::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(272, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 57);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculadora::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(26, 319);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 57);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculadora::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(149, 319);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 57);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculadora::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(272, 319);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 57);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculadora::button9_Click);
			// 
			// buttonMultiplicacion
			// 
			this->buttonMultiplicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonMultiplicacion->Location = System::Drawing::Point(392, 319);
			this->buttonMultiplicacion->Name = L"buttonMultiplicacion";
			this->buttonMultiplicacion->Size = System::Drawing::Size(113, 57);
			this->buttonMultiplicacion->TabIndex = 12;
			this->buttonMultiplicacion->Text = L"X";
			this->buttonMultiplicacion->UseVisualStyleBackColor = true;
			this->buttonMultiplicacion->Click += gcnew System::EventHandler(this, &Calculadora::buttonMultiplicacion_Click);
			// 
			// buttonPunto
			// 
			this->buttonPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPunto->Location = System::Drawing::Point(26, 398);
			this->buttonPunto->Name = L"buttonPunto";
			this->buttonPunto->Size = System::Drawing::Size(113, 57);
			this->buttonPunto->TabIndex = 13;
			this->buttonPunto->Text = L".";
			this->buttonPunto->UseVisualStyleBackColor = true;
			this->buttonPunto->Click += gcnew System::EventHandler(this, &Calculadora::buttonPunto_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(149, 398);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(113, 57);
			this->button0->TabIndex = 14;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Calculadora::button0_Click);
			// 
			// buttonIgual
			// 
			this->buttonIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonIgual->Location = System::Drawing::Point(272, 398);
			this->buttonIgual->Name = L"buttonIgual";
			this->buttonIgual->Size = System::Drawing::Size(113, 57);
			this->buttonIgual->TabIndex = 15;
			this->buttonIgual->Text = L"=";
			this->buttonIgual->UseVisualStyleBackColor = true;
			this->buttonIgual->Click += gcnew System::EventHandler(this, &Calculadora::buttonIgual_Click);
			// 
			// buttonDivision
			// 
			this->buttonDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivision->Location = System::Drawing::Point(392, 398);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->Size = System::Drawing::Size(113, 57);
			this->buttonDivision->TabIndex = 16;
			this->buttonDivision->Text = L"/";
			this->buttonDivision->UseVisualStyleBackColor = true;
			this->buttonDivision->Click += gcnew System::EventHandler(this, &Calculadora::buttonDivision_Click);
			// 
			// buttonPotencia
			// 
			this->buttonPotencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPotencia->Location = System::Drawing::Point(26, 471);
			this->buttonPotencia->Name = L"buttonPotencia";
			this->buttonPotencia->Size = System::Drawing::Size(150, 57);
			this->buttonPotencia->TabIndex = 17;
			this->buttonPotencia->Text = L"Potencia";
			this->buttonPotencia->UseVisualStyleBackColor = true;
			this->buttonPotencia->Click += gcnew System::EventHandler(this, &Calculadora::buttonPotencia_Click);
			// 
			// buttonRaiz
			// 
			this->buttonRaiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRaiz->Location = System::Drawing::Point(181, 471);
			this->buttonRaiz->Name = L"buttonRaiz";
			this->buttonRaiz->Size = System::Drawing::Size(160, 57);
			this->buttonRaiz->TabIndex = 19;
			this->buttonRaiz->Text = L"Raiz";
			this->buttonRaiz->UseVisualStyleBackColor = true;
			this->buttonRaiz->Click += gcnew System::EventHandler(this, &Calculadora::buttonRaiz_Click);
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLimpiar->Location = System::Drawing::Point(345, 471);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(160, 57);
			this->buttonLimpiar->TabIndex = 20;
			this->buttonLimpiar->Text = L"Limpiar";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Calculadora::buttonLimpiar_Click);
			// 
			// buttonResta
			// 
			this->buttonResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonResta->Location = System::Drawing::Point(392, 240);
			this->buttonResta->Name = L"buttonResta";
			this->buttonResta->Size = System::Drawing::Size(113, 57);
			this->buttonResta->TabIndex = 21;
			this->buttonResta->Text = L"-";
			this->buttonResta->UseVisualStyleBackColor = true;
			this->buttonResta->Click += gcnew System::EventHandler(this, &Calculadora::buttonResta_Click);
			// 
			// Calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 545);
			this->Controls->Add(this->buttonResta);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->buttonRaiz);
			this->Controls->Add(this->buttonPotencia);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->buttonIgual);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonPunto);
			this->Controls->Add(this->buttonMultiplicacion);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonSuma);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxPantalla);
			this->Name = L"Calculadora";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Calculadora::Calculadora_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calculadora_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxPantalla_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "9";
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Text += "0";
}
private: System::Void buttonSuma_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	textBoxPantalla->Clear();
	operacion = '+';
	punto = false;
}
private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPantalla->Clear();
	primernumero = segundonumero = resultado = 0;
	punto = false;
}
private: System::Void buttonResta_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	textBoxPantalla->Clear();
	operacion = '-';
	punto = false;
}
private: System::Void buttonPunto_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!punto)
	{
		textBoxPantalla->Text += ".";
		punto = true;
	}
}
private: System::Void buttonMultiplicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	textBoxPantalla->Clear();
	operacion = '*';
	punto = false;
}
private: System::Void buttonDivision_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	textBoxPantalla->Clear();
	operacion = '/';
	punto = false;
}
private: System::Void buttonPotencia_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	resultado = pow(primernumero, 2);
	textBoxPantalla->Text = Convert::ToString(resultado);
	primernumero = resultado;
	punto = false;
}
private: System::Void buttonRaiz_Click(System::Object^ sender, System::EventArgs^ e) {
	primernumero = Convert::ToDouble(textBoxPantalla->Text);
	resultado = sqrt(primernumero);
	textBoxPantalla->Text = Convert::ToString(resultado);
	primernumero = resultado;
	punto = false;
}
private: System::Void buttonIgual_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxPantalla->Text != "Error") {
		segundonumero = Convert::ToDouble(textBoxPantalla->Text);
		switch (operacion)
		{
		case '+':
			resultado = primernumero + segundonumero;
			break;
		case '-':
			resultado = primernumero - segundonumero;
			break;
		case '*':
			resultado = primernumero * segundonumero;
			break;
		case '/':
			if (segundonumero != 0) {
				resultado = primernumero / segundonumero;
			}
			else {
				textBoxPantalla->Text = "Error";
				return; //Salimos de la funci�n si hay error
			}
			break;
		}
		textBoxPantalla->Text = Convert::ToString(resultado);
		punto = false;
	}
}
};
}