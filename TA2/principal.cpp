#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string.h>
#include "biblioteca.h"

int main() {
	//Pede e armazena a quantidade de devoluções do dia
	std::cout << "Qual o número de devoluções para hoje? ";
	int numero_devolucoes;
	std::cin >> numero_devolucoes;
	//Criado tipo de Data para armazenar o dia da devolução informado pelo usuário
	Data data_devolucao;
	//Criado tipo cha como auxiliar para armazenar a "/", já que ñão será necessário armazenar dentro de um tipo Data
	std::cout << "Qual a data de devolução: ";
	std::cin >>data_devolucao;
	//irá exibir 43 vezes o caractere "-"
	line('-', 43);
	//Criado tipo de emprestimo como um vetor dinamico ja que armazena os dados de "n" livros emprestados
	emprestimo* emprestado = new emprestimo[numero_devolucoes];
	//Criado tipo de Data como um vetor dinamico, já que a quantidade será igual ao número de devoluções
	Data* data_emprestimo = new Data[numero_devolucoes];
	//Laço for irá solicitar os dados do emprestimo de acordo com a quantidade de devoluções
	for (int i = 0; i < numero_devolucoes; i++)
	devolucao(emprestado[i], data_emprestimo[i], data_devolucao, numero_devolucoes);

	//irá exibir 43 vezes o caractere "-"
	line('-', 43);
	std::cout << std::endl;
	std::cout << "Resumo do dia " << std::endl;
	for (int i = 0; i < numero_devolucoes; i++) {
		std::cout <<data_devolucao;
		std::cout << std::endl;
	}
	//Chamada da função que exibe todo o resumo do dia
	for (int i = 0; i < numero_devolucoes; i++) {
		exibe(emprestado[i], data_devolucao, data_emprestimo[i]);
	}
	std::cout << std::endl;
	float* multavet = new float[numero_devolucoes];
	//Mostrará o valor total do apurado em multa com duas casas decimais após a vírgula
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total em multas: R$" << totalmultas(numero_devolucoes, multavet) << std::endl;

	std::cout << std::endl;

	//irá exibir 43 vezes o caractere "-"
	line('-', 43);
	std::cout << "Encerrando programa... ";
	//Deleta o conteúdo salvo dentro da memória ocupado em cada um dos vetores dinâmicos
	delete[] emprestado;
	delete[] data_emprestimo;
}