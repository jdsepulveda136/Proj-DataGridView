#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ data_nomes;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cidade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nascimento;
	private: System::Windows::Forms::Button^ bt_inicia;
	private: System::Windows::Forms::Button^ bt_limpa;
	private: System::Windows::Forms::Button^ bt_insere;
	private: System::Windows::Forms::TextBox^ txt_nome;
	private: System::Windows::Forms::TextBox^ txt_cidade;
	private: System::Windows::Forms::TextBox^ txt_ano;
	private: System::Windows::Forms::Button^ bt_mostra;
	private: System::Windows::Forms::Button^ bt_localiza;
	private: System::Windows::Forms::TextBox^ txt_busca;
	private: System::Windows::Forms::Button^ txt_substitui;
	private: System::Windows::Forms::Button^ bt_delvazio;

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
			this->data_nomes = (gcnew System::Windows::Forms::DataGridView());
			this->nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nascimento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt_inicia = (gcnew System::Windows::Forms::Button());
			this->bt_limpa = (gcnew System::Windows::Forms::Button());
			this->bt_insere = (gcnew System::Windows::Forms::Button());
			this->txt_nome = (gcnew System::Windows::Forms::TextBox());
			this->txt_cidade = (gcnew System::Windows::Forms::TextBox());
			this->txt_ano = (gcnew System::Windows::Forms::TextBox());
			this->bt_mostra = (gcnew System::Windows::Forms::Button());
			this->bt_localiza = (gcnew System::Windows::Forms::Button());
			this->txt_busca = (gcnew System::Windows::Forms::TextBox());
			this->txt_substitui = (gcnew System::Windows::Forms::Button());
			this->bt_delvazio = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_nomes))->BeginInit();
			this->SuspendLayout();
			// 
			// data_nomes
			// 
			this->data_nomes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_nomes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nome, this->cidade,
					this->nascimento
			});
			this->data_nomes->Location = System::Drawing::Point(12, 249);
			this->data_nomes->Name = L"data_nomes";
			this->data_nomes->Size = System::Drawing::Size(348, 225);
			this->data_nomes->TabIndex = 0;
			// 
			// nome
			// 
			this->nome->HeaderText = L"Nome";
			this->nome->Name = L"nome";
			// 
			// cidade
			// 
			this->cidade->HeaderText = L"Cidade";
			this->cidade->Name = L"cidade";
			// 
			// nascimento
			// 
			this->nascimento->HeaderText = L"Ano Nasc.";
			this->nascimento->Name = L"nascimento";
			// 
			// bt_inicia
			// 
			this->bt_inicia->Location = System::Drawing::Point(13, 13);
			this->bt_inicia->Name = L"bt_inicia";
			this->bt_inicia->Size = System::Drawing::Size(345, 23);
			this->bt_inicia->TabIndex = 1;
			this->bt_inicia->Text = L"Inicializa a grid com 4 nomes.";
			this->bt_inicia->UseVisualStyleBackColor = true;
			this->bt_inicia->Click += gcnew System::EventHandler(this, &Form1::Bt_inicia_Click);
			// 
			// bt_limpa
			// 
			this->bt_limpa->Location = System::Drawing::Point(13, 43);
			this->bt_limpa->Name = L"bt_limpa";
			this->bt_limpa->Size = System::Drawing::Size(345, 23);
			this->bt_limpa->TabIndex = 2;
			this->bt_limpa->Text = L"Limpa a grid (remove tudo.)";
			this->bt_limpa->UseVisualStyleBackColor = true;
			this->bt_limpa->Click += gcnew System::EventHandler(this, &Form1::Bt_limpa_Click);
			// 
			// bt_insere
			// 
			this->bt_insere->Location = System::Drawing::Point(13, 73);
			this->bt_insere->Name = L"bt_insere";
			this->bt_insere->Size = System::Drawing::Size(345, 23);
			this->bt_insere->TabIndex = 3;
			this->bt_insere->Text = L"Inserir registo";
			this->bt_insere->UseVisualStyleBackColor = true;
			this->bt_insere->Click += gcnew System::EventHandler(this, &Form1::Bt_insere_Click);
			// 
			// txt_nome
			// 
			this->txt_nome->Location = System::Drawing::Point(12, 102);
			this->txt_nome->Name = L"txt_nome";
			this->txt_nome->Size = System::Drawing::Size(129, 20);
			this->txt_nome->TabIndex = 4;
			this->txt_nome->TextChanged += gcnew System::EventHandler(this, &Form1::txt_nome_Click);
			// 
			// txt_cidade
			// 
			this->txt_cidade->Location = System::Drawing::Point(147, 102);
			this->txt_cidade->Name = L"txt_cidade";
			this->txt_cidade->Size = System::Drawing::Size(130, 20);
			this->txt_cidade->TabIndex = 5;
			// 
			// txt_ano
			// 
			this->txt_ano->Location = System::Drawing::Point(283, 102);
			this->txt_ano->Name = L"txt_ano";
			this->txt_ano->Size = System::Drawing::Size(75, 20);
			this->txt_ano->TabIndex = 6;
			// 
			// bt_mostra
			// 
			this->bt_mostra->Location = System::Drawing::Point(13, 129);
			this->bt_mostra->Name = L"bt_mostra";
			this->bt_mostra->Size = System::Drawing::Size(345, 23);
			this->bt_mostra->TabIndex = 7;
			this->bt_mostra->Text = L"Mostra nomes numa messagebox";
			this->bt_mostra->UseVisualStyleBackColor = true;
			this->bt_mostra->Click += gcnew System::EventHandler(this, &Form1::Bt_mostra_Click);
			// 
			// bt_localiza
			// 
			this->bt_localiza->Location = System::Drawing::Point(13, 159);
			this->bt_localiza->Name = L"bt_localiza";
			this->bt_localiza->Size = System::Drawing::Size(161, 23);
			this->bt_localiza->TabIndex = 8;
			this->bt_localiza->Text = L"Localiza nome:";
			this->bt_localiza->UseVisualStyleBackColor = true;
			this->bt_localiza->Click += gcnew System::EventHandler(this, &Form1::Bt_localiza_Click);
			// 
			// txt_busca
			// 
			this->txt_busca->Location = System::Drawing::Point(180, 174);
			this->txt_busca->Name = L"txt_busca";
			this->txt_busca->Size = System::Drawing::Size(178, 20);
			this->txt_busca->TabIndex = 9;
			// 
			// txt_substitui
			// 
			this->txt_substitui->Location = System::Drawing::Point(13, 189);
			this->txt_substitui->Name = L"txt_substitui";
			this->txt_substitui->Size = System::Drawing::Size(161, 23);
			this->txt_substitui->TabIndex = 10;
			this->txt_substitui->Text = L"Remove linha com este nome";
			this->txt_substitui->UseVisualStyleBackColor = true;
			this->txt_substitui->Click += gcnew System::EventHandler(this, &Form1::Txt_substitui_Click);
			// 
			// bt_delvazio
			// 
			this->bt_delvazio->Location = System::Drawing::Point(13, 219);
			this->bt_delvazio->Name = L"bt_delvazio";
			this->bt_delvazio->Size = System::Drawing::Size(345, 23);
			this->bt_delvazio->TabIndex = 11;
			this->bt_delvazio->Text = L"Elimina linha com nome vazio";
			this->bt_delvazio->UseVisualStyleBackColor = true;
			this->bt_delvazio->Click += gcnew System::EventHandler(this, &Form1::Bt_delvazio_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 483);
			this->Controls->Add(this->bt_delvazio);
			this->Controls->Add(this->txt_substitui);
			this->Controls->Add(this->txt_busca);
			this->Controls->Add(this->bt_localiza);
			this->Controls->Add(this->bt_mostra);
			this->Controls->Add(this->txt_ano);
			this->Controls->Add(this->txt_cidade);
			this->Controls->Add(this->txt_nome);
			this->Controls->Add(this->bt_insere);
			this->Controls->Add(this->bt_limpa);
			this->Controls->Add(this->bt_inicia);
			this->Controls->Add(this->data_nomes);
			this->Name = L"Form1";
			this->Text = L"DataGridView";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_nomes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bt_inicia_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		data_nomes->Rows->Add("Ana", "Braga", "1999");
		data_nomes->Rows->Add("Rui", "Braga", "1998");
		data_nomes->Rows->Add("Teo", "porto", "2002");
		data_nomes->Rows->Add("Tico", "Amares", "2005");
	}
	private: System::Void Bt_limpa_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		data_nomes->Rows->Clear();
	}
private: System::Void Bt_insere_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ nome = txt_nome->Text;
	String^ cidade = txt_cidade->Text; 
	String^ ano = txt_ano->Text;

	data_nomes->Rows->Add(nome , cidade , ano);
	}
private: System::Void Bt_mostra_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ nomes = " ";
	
	for (size_t i = 0; i < data_nomes->Rows->Count; i++)
	{
		nomes = nomes + data_nomes->Rows[i]->Cells[0]->Value + " ";
	}

	MessageBox::Show(nomes);
	}


private: System::Void Bt_localiza_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ busca = txt_busca->Text;

	for (int i = 0; i < data_nomes->Rows->Count; i++)
	{
		if (Convert::ToString(data_nomes->Rows[i]->Cells[0]->Value) == busca)
		{
			MessageBox::Show(Convert::ToString(i+1));
		}
	}
	}
private: System::Void Txt_substitui_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ busca = txt_busca->Text;

	for (int i = 0; i < data_nomes->Rows->Count; i++)
	{
		if (Convert::ToString(data_nomes->Rows[i]->Cells[0]->Value) == busca)
		{
			data_nomes->Rows->RemoveAt(i);
		}
	}
	}
private: System::Void Bt_delvazio_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	for (int i = 0; i < data_nomes->Rows->Count; i++)
	{
		if (data_nomes->Rows[i]->Cells[0]->Value == "")
		{
			data_nomes->Rows->RemoveAt(i);
		}
	}
	}

	private: System::Void txt_nome_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//txt_nome->Text = " ";
	}
};
}
