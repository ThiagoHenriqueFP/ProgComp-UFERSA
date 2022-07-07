#include <iostream>
#include <fstream>

struct Produto {
	int productId;
	int qtd;
	float price;
	float priceDesc;
};

float order(Produto, int);
float total(Produto*, int*, int);

int main() {
	std::ifstream fin;
	fin.open("produtos.txt");

	if (!fin.is_open()) {
		std::cout << "Não foi possivel abrir o arquivo\n\a";
		exit(EXIT_FAILURE);
	}
	

	int numTotal;
	fin >> numTotal;
	Produto* produtos = new Produto[numTotal];

	//create products
	for (int i = 0; i < numTotal; i++) {
		float prices;
		char aux[10];
		int qtd;
		produtos[i].productId = i + 1;
		fin >> aux;
		fin >> prices;
		produtos[i].price = prices;
		fin >> aux;
		fin >> prices;
		produtos[i].priceDesc = prices;
		fin >> aux;
		fin >> qtd;
		produtos[i].qtd = qtd;
	}
	fin.close();

	int* produtosQtd = new int[numTotal];

	fin.open("pedidos.txt");

	if (!fin.is_open()) {
		std::cout << "Não foi possivel abrir o arquivo\n\a";
		exit(EXIT_FAILURE);
	}

	int aux;
	fin >> aux;

	for (int i = 0; i < numTotal; i++) {
		fin >> aux;
		produtosQtd[i] = aux;
	}
	float sum = total(produtos, produtosQtd, numTotal);
	std::cout << sum;
}

float order(Produto p, int qtd)
{
	float sum = 0;
	switch (p.productId)
	{
	case 1:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price* qtd;
		break;
	case 2:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price * qtd;
		break;
	case 3:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price * qtd;
		break;
	case 4:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price * qtd;
		break;
	case 5:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price * qtd;
		break;
	case 6:
		if (qtd >= p.qtd)
			sum = p.priceDesc * qtd;
		else
			sum = p.price * qtd;
		break;
	default:
		std::cout << "Não existe esse produto\n\n";
		break;
	}

	return sum;
}

float total(Produto* p, int* qtd, int len) {
	float sum = 0;
	for (int i = 0; i < len; i++)
		sum += order(p[i], qtd[i]);

	return sum;
}