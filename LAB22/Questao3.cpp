#include <iostream>

using std::cout;
using std::cin;

struct Prato {
	char name[20];
	float preco;
};

int main() {
	int total = 0;
	Prato cardapio[] = { "File a parme", 44, "Churrasco", 35, "Arroz a grega", 6};
	char slct;
	
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " " << cardapio->name << " :" << cardapio->preco << std::endl;
	}

	do {
		cout << "Digite a opcao de prato no menu\n\nE digite 0 para sair\n";
		cin >> slct;
		switch (slct)
		{
		case 1:
			total += cardapio[0].preco;
			break;
		case 2:
			total += cardapio[1].preco;
			break;
		case 3:
			total += cardapio[2].preco;
			break;
		default:
			cout << "Opcao invalida";
			break;
		}
	} while (slct != 0);

	cout << "O total do pedido foi: " << total;
}