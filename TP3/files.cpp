#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include "main.h"

using std::cout;
using std::cin;

void menu() {
	cout << "Sistema de Controle\n";
	cout << "===============\n";
	cout << "(P)edido\n"
		"(A)dicionar\n"
		"(E)xcluir\n"
		"(L)istar\n"
		"(S)air\n";
	cout << "===============\n\n";
	cout << "Opcao: [_]\b\b";
}

void order(Pedido* inventory) {
	std::ifstream fin;
	int end = std::pow(2, 1), n = 1;
	cout << "\nDigite o Nome do arquivo: ";
	char file[20];
	cin >> file;
	fin.open(file);

	if (!fin.is_open()) {
		cout << "Não foi possivel abrir o arquivo\n\nEncerrando o programa..........\n";
		exit(EXIT_FAILURE);
	}
	char aux[30], pizzaria[30];
	fin >> pizzaria;
	fin >> aux;
	strcat(pizzaria, aux);
	fin >> aux;

	//Inicio da criação dos vetores dinamicos
	Pedido* p = new Pedido[end];
	Pedido* globalPtr = grow(0, end, p);
	//Fim da criação dos vetores dinamicos

	int check = 0;
	while (!fin.eof() || fin.good()) {
		char carac[20];
		char res[20];

		if (check >= end) {
			int tmp = end;
			end = std::pow(2, ++n);
			globalPtr = grow(tmp, end, globalPtr);
		}

		fin >> carac;

		for (int i = 0; i < 20; i++)
			res[i] = tolower(int(carac[i]));

		int cmp = 0;
		for (int i = 0; i < check; i++) {
			if ((!strcmp(res, globalPtr[i].name))) {
				cmp++;
				fin >> carac;
				globalPtr[i].qtd += std::atoi(carac);
			}
		}

		if (!cmp) {
			strcpy(globalPtr[check].name, res);
			fin >> carac;
			globalPtr[check].qtd = std::atoi(carac);
			check++;
		}
	}
	fin.close();
	if (checkInvetory(globalPtr, end, inventory, inventory->qtd, file)) {
		int index{};
		for (index; file[index]; index++);
		file[index - 3] = 'n';
		file[index - 2] = 'f';
		file[index - 1] = 'c';
		std::ofstream fout;
		float total{};
		fout.open(file);
		fout << pizzaria;
		fout << "\n----------------------------------\n";
		for (int i = 0; globalPtr[i].qtd; i++) {
			for (int j = 0; inventory[j].qtd; j++) {
				if (!strcmp(globalPtr[i].name, inventory[j].name)) {
					fout << std::left << std::setw(15) << globalPtr[i].name << std::left << std::setw(6) << globalPtr[i].qtd << std::setw(6) << globalPtr[i].qtd * inventory[j].price << std::endl;
					total += globalPtr[i].qtd * inventory[j].price;

					inventory[j].qtd = inventory[j].qtd - globalPtr[i].qtd;
				}
			}
		}
		fout << "\n----------------------------------\n";
		fout << "Total" << std::setw(15) << "R$" << total << std::fixed << std::setprecision(2) << std::endl;
		if (total > 1000) {
			fout << "Desconto" << std::setw(12) << "R$" << total*0.1 << std::fixed << std::setprecision(2) << std::endl;
			total = total * 0.9;
			fout << "Total" << std::setw(15) << "R$" << total << std::fixed << std::setprecision(2) << std::endl;
		}
		else {
			fout << "Desconto" << std::setw(12) << "R$" << 0 << std::fixed << std::setprecision(2) << std::endl;
			fout << "Total" << std::setw(15) << "R$" << total << std::fixed << std::setprecision(2) << std::endl;
		}
		fout.close();
	}

}

bool checkInvetory(Pedido* order, float orderEnd, Pedido* inventory, float inventoryEnd, char * file) {
	int err{}, check{};

	inventoryEnd == 0 ? cout << "Estoque vazio!\n" : cout << "";

		for (int i = 1; i < inventoryEnd; i++) {
			for (int j = 0; j < orderEnd; j++) {
				if (!strcmp(inventory[i].name, order[j].name)) {
					++check;
					if (inventory[i].qtd < order[j].qtd) {
						cout << "Item " << order[j].name << " solicitado " << order[j].qtd << " disponivel " << inventory[i].qtd << std::endl;

						++err;
					}
				}
			}
	}
		if (err > 0 || inventoryEnd < orderEnd || check < orderEnd) {
			cout << "Pedido falhou!\n";
			return false;
		}
		if (check >= orderEnd) {
			cout << "pedido aceito\nGerando nota fiscal...";
			return true;
		}
}

void listInventory(Pedido* globalInv) {
	int len = globalInv->qtd;
	cout << "\nListagem\n---------\n";
	for (int i = 1; i < len && globalInv[i].qtd; i++) {
		cout << globalInv[i];
	}
	cout << '\n';
}

void exitAndSave(Pedido* globalInv) {
	std::ofstream fout;
	fout.open("inventory.dat", std::ios_base::out | std::ios_base::binary);
	fout.write((char*)&globalInv[0].qtd, sizeof(unsigned));
	for(int i = 1; i < globalInv[0].qtd; i++)
		fout.write((char*)&globalInv[i], sizeof(Pedido));
	fout.close();
	delete[]globalInv;
}

Pedido* addToInventory(Pedido* globalInv) {
	cout << "\nAdicionar ao estoque\n";
	int index = 1;
	char select;
	do {
		int len = globalInv->qtd;
		Pedido p{};
		cin >> p;

		if (index >= len-1) {
			globalInv = grow(len, pow(2, index + 1), globalInv);
			len = pow(2, sqrt(len)+1);
			globalInv->qtd = len;
		}

		for (int i = 1; i < len; i++) {
			if (!strcmp(p.name, globalInv[i].name)) {
				globalInv[i].price = p.price;
				globalInv[i].qtd += p.qtd;
			}
			else if (globalInv[i].qtd == 0) {
				strcpy(globalInv[i].name, p.name);
				globalInv[i].price = p.price;
				globalInv[i].qtd = p.qtd;
				++index;
				break;
			}
		}

		cout << "\nDeseja adiconar outro? ";
		cin >> select;
	} while (select != 'n' && select != 'N');

	return globalInv;
}

Pedido* removeItem(Pedido* globalInv) {
	int len = globalInv->qtd;
	char check;
	do {
		cout << "\nListagem\n---------\n";
		for (int i = 1; i < len && globalInv[i].qtd; i++) {
			cout << i << ")" << globalInv[i].name << std::endl;
		}
		int select;
		do {
			cout << "Selecione um item para excluir ";
			cin >> select;
		} while (select > len);
		
		cout << "\nItem " << globalInv[select] << " removido do estoque";

		for (select; select < len-1; select++) {
			globalInv[select] = globalInv[select + 1];
		}
		strcpy(globalInv[select].name, " ");
		globalInv[select].price = 0;
		globalInv[select].qtd = 0;

		cout << "\nDeseja continuar? ";
		cin >> check;

	} while (check != 'n' && check != 'N');
	
	return globalInv;
}

Pedido* grow(int olderLen, int newLen, Pedido* oldP) {

	Pedido* newP = new Pedido[newLen]{};
	if(olderLen > 0)
		std::copy(oldP, oldP + olderLen, newP);
	delete [] oldP;
	oldP = newP;

	return newP;
}

Pedido* loadInventory() {
	std::ifstream fin;

	float index= 1;

	Pedido* globalInventory;

	fin.open("inventory.dat", std::ios_base::binary | std::ios_base::in);
	if (!fin.is_open()) {
		cout << "\nArquivo não encontrado ou aberto, sera criado um novo arquivo de estoque ao fim da execucao\n";
		fin.close();
	}

	//Lê a quantidade de registros e passa o valor para a criação do vetor e para o primeiro elemento do vetor
	//para facilitar o uso de laços
	fin.read((char*)&index, sizeof(int));
	globalInventory = new Pedido[index];
	globalInventory[0] = { "inventory", index, 0 };
	//------> Começa do segundo item, o primeiro é reservado
	for (int i = 1; i < index; i++) 
		fin.read((char*)&globalInventory[i], sizeof(Pedido));
	fin.close();

	return globalInventory;
}

std::istream& operator >> (std::istream& strm, Pedido& p) {
	char name[20];
	cout << "\nNome: ";
	strm >> name;

	for (int i = 0; i < 20; i++)
		name[i] = tolower(int(name[i]));

	strcpy(p.name, name);

	cout << "Quantidade em estoque: ";
	strm >> p.qtd;
	cout << "Preco: ";
	strm >> p.price;
	return strm;
}

std::ostream& operator << (std::ostream& strm, Pedido& p) {
	// strm << p.name << "\t-\t R$" << p.price << "\t-\t" << p.qtd << "kg\n";
	strm << std::left << std::setw(15) << std::fixed << std::setprecision(2) << p.name << "R$" << p.price << "\t" << p.qtd << "kg\n";
	return strm;
}