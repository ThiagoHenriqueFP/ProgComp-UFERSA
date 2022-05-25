

//Registro que armazena valores do tipo Data, que contem dia, mes e ano
struct Data {
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};
//Registro que armazena valores do tipo emprestimo, que contem Data de devolu��o e emprestimo, matricula e identificador
struct emprestimo {
	Data datadevolucao;
	unsigned matricula;
	char identificador[5];
	Data dataemprestimo;
};
//
std::ostream& operator << (std::ostream&, Data&);
//
std::istream& operator >> (std::istream&, Data&);
//Fun��o que ir� retornar os dias de atraso entre a data dos 3 dias p�s emprestimo e a data de devolu��o 
int operator-(Data, Data);
//Fun��o que ir� retornar o valor total do apurado das multas do dia de acordo com a quantidade de devolu��es
float totalmultas(int, float*);
//Fun��o armazenar� os dados de emprestimo
void devolucao(emprestimo&, Data, Data, int);
//Fun��o exibir� o resumo do dia
void exibe(emprestimo&, Data, Data);
//Fun��o linha para gerar os tra�os 
void line(char, int);