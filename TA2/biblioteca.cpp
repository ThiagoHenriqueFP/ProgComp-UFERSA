#include <iostream>
#include "biblioteca.h"

std::ostream& operator<<(std::ostream& os, Data& dt) {
	std::printf("%2.2i", dt.dia);
	os << " de ";
	const char* meses[] = { " ", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	for (int i = dt.mes; i = dt.mes; i++)
		os << meses[i];
	os << " de " <<dt.ano << std::endl;

	return os;
}
std::istream& operator>> (std::istream& is, Data& dat) {
	char barra;
	is>>dat.dia >> barra >>dat.mes >> barra >>dat.ano;

	return is;
}

int operator-(Data inicio, Data fim) {
	unsigned short diaemprestimo, diadevolucao;
	unsigned short def_anos = 0;

	//guarda o numero de dias em cada mes para anos normais
	int diasmes[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//Pega a data do emprestimo e armazena em outra variavel pra fazer a verifica��o
	diaemprestimo = inicio.dia;
	//Pega o mes do emprestimo e inicia diminuindo um dia, que � o dia atual, logo apos, enquanto mes for maior que zero ir� acrescentar ao dia do emprestimo o valor em dia do mes naquela posi��o
	for (int i = inicio.mes - 1; i > 0; --i)
		diaemprestimo += diasmes[i];
	//Pega a data do emprestimo e armazena em outra variavel pra fazer a verifica��o
	diadevolucao = fim.dia;
	//Pega o mes da devolu��o e inicia diminuindo um dia, que � o dia atual, logo apos, enquanto mes for maior que zero ir� acrescentar ao dia da devolu��o o valor em dia do mes naquela posi��o
	for (int i = fim.mes - 1; i > 0; --i)
		diadevolucao += diasmes[i];
	//Assim retorna o valor de dias entre a data de emprestimo e o da devolu��o retirando 3 que s�o os dias de emprestimo
	return (def_anos - diaemprestimo + diadevolucao) - 3;
}
//Ir� somar todos os valores de multas e retornar� na fun��o
float totalmultas(int numero_devolucao, float *multa) {
	float totalapurado = 0;
	//Cada vez que o la�o for executado, ir� somar o valor da multa com o anterior, retornando a soma total
	for (int i = 0; i < numero_devolucao; i++)
		totalapurado += multa[i];

	return totalapurado;
}
//Fun��o Solicita alguns dados ao usu�rio e retorna valor de dias de atraso e a multa de acordo com os dados preenchidos
void devolucao(emprestimo& emprestado, Data data_emprestimo, Data data_devolucao, int numero_devolucoes) {
	//Armazena cada valor da multa em um espa�o dentro do vetor
	float* multavet = new float[numero_devolucoes];
	//Ir� solicitar os dados do usu�rio de acordo com a quantidade de devolu��es do dia
	for (int i = 0; i < numero_devolucoes; i++) {
		std::cout << "Aluno: ";
		std::cin >> emprestado.matricula;
		std::cout << "Livro     : ";
		std::cin >> emprestado.identificador;
		std::cout << "Empr�stimo: ";
		std::cin >> data_emprestimo;
		//Chama a fun��o para exibir a quantidade de dias de atraso
		std::cout << "Atraso    : " << operator-(data_emprestimo, data_devolucao) << " dia(s)" << std::endl;
		//Chama a fun��o para exibir o valor da multa de acordo com os dias de atraso
		std::cout << "Multa     : R$";
		//Faz-se o c�lculo de dias em atraso e multiplica pelo valor di�rio da multa, e armazena o valor no vetor de acordo com a sua posi��o
		multavet[i] = operator-(data_emprestimo, data_devolucao) * 0.80f;
		std::printf("%.2f", multavet[i]);

		std::cout << std::endl;
		//ir� exibir 33 vezes o caractere "-"
		line('-', 33);
	}
}
//Exibir� as informa��es das devolu��es, o resumo do dia
void exibe(emprestimo& emprestado, Data data_devolucao, Data data_emprestimo) {
	float multa;
	std::cout << emprestado.matricula << " " << emprestado.identificador << " ";
	std::printf("%2.2i", data_emprestimo.dia);
	std::cout << "/";
	std::printf("%2.2i", data_emprestimo.mes);
		multa = ((data_emprestimo-data_devolucao) * 0.80);
		std::cout << "/" << data_emprestimo.ano << " -> R$";
		std::printf("%.2f", multa);
		std::cout << std::endl;

}
//Fun��o linha ir� mostrar o caractere armazenado em "c" a quantidade de vezes que foi atribuido a "n"
void line(char c, int n) {
	for (int i = 0; i < n; i++)
		std::cout << c;
	std::cout << std::endl;
}