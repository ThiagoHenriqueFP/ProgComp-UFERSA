

//Registro que armazena valores do tipo Data, que contem dia, mes e ano
struct Data {
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};
//Registro que armazena valores do tipo emprestimo, que contem Data de devolução e emprestimo, matricula e identificador
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
//Função que irá retornar os dias de atraso entre a data dos 3 dias pós emprestimo e a data de devolução 
int operator-(Data, Data);
//Função que irá retornar o valor total do apurado das multas do dia de acordo com a quantidade de devoluções
float totalmultas(int, float*);
//Função armazenará os dados de emprestimo
void devolucao(emprestimo&, Data, Data, int);
//Função exibirá o resumo do dia
void exibe(emprestimo&, Data, Data);
//Função linha para gerar os traços 
void line(char, int);