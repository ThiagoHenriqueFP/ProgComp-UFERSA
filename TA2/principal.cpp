#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string.h>
#include "biblioteca.h"

int main() {
	//Pede e armazena a quantidade de devolu��es do dia
	std::cout << "Qual o n�mero de devolu��es para hoje? ";
	int numero_devolucoes;
	std::cin >> numero_devolucoes;
	//Criado tipo de Data para armazenar o dia da devolu��o informado pelo usu�rio
	Data data_devolucao;
	//Criado tipo cha como auxiliar para armazenar a "/", j� que ��o ser� necess�rio armazenar dentro de um tipo Data
	std::cout << "Qual a data de devolu��o: ";
	std::cin >>data_devolucao;
	//ir� exibir 43 vezes o caractere "-"
	line('-', 43);
	//Criado tipo de emprestimo como um vetor dinamico ja que armazena os dados de "n" livros emprestados
	emprestimo* emprestado = new emprestimo[numero_devolucoes];
	//Criado tipo de Data como um vetor dinamico, j� que a quantidade ser� igual ao n�mero de devolu��es
	Data* data_emprestimo = new Data[numero_devolucoes];
	//La�o for ir� solicitar os dados do emprestimo de acordo com a quantidade de devolu��es
	for (int i = 0; i < numero_devolucoes; i++)
	devolucao(emprestado[i], data_emprestimo[i], data_devolucao, numero_devolucoes);

	//ir� exibir 43 vezes o caractere "-"
	line('-', 43);
	std::cout << std::endl;
	std::cout << "Resumo do dia " << std::endl;
	for (int i = 0; i < numero_devolucoes; i++) {
		std::cout <<data_devolucao;
		std::cout << std::endl;
	}
	//Chamada da fun��o que exibe todo o resumo do dia
	for (int i = 0; i < numero_devolucoes; i++) {
		exibe(emprestado[i], data_devolucao, data_emprestimo[i]);
	}
	std::cout << std::endl;
	float* multavet = new float[numero_devolucoes];
	//Mostrar� o valor total do apurado em multa com duas casas decimais ap�s a v�rgula
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total em multas: R$" << totalmultas(numero_devolucoes, multavet) << std::endl;

	std::cout << std::endl;

	//ir� exibir 43 vezes o caractere "-"
	line('-', 43);
	std::cout << "Encerrando programa... ";
	//Deleta o conte�do salvo dentro da mem�ria ocupado em cada um dos vetores din�micos
	delete[] emprestado;
	delete[] data_emprestimo;
}