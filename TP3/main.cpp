#include <fstream>
#include <iostream>
#include "main.h"

using std::cin;
using std::cout;

int main() {
	Pedido* inventory = loadInventory();

	int len;
	inventory->qtd == 0 ? len = 1 : len = inventory->qtd;
	Pedido* globalInv = new Pedido[len];

	std::copy(inventory, inventory + len, globalInv);

	char select;
	do
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 'p':
		case 'P':
			order(globalInv);
			break;
		case 'a':
		case 'A':
			globalInv = addToInventory(globalInv);
			break;
		case 'l':
		case 'L':
			listInventory(globalInv);
			break;
		case 'e':
		case 'E':
			globalInv = removeItem(globalInv);
			break;
		default:
		case 's':
		case 'S':
			exitAndSave(globalInv);
			break;
		}
	} while (select !='s' && select !='S');
}