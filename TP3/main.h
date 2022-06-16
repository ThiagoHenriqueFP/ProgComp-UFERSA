#pragma once

//Registros
struct Pedido {
	char name[20];
	float qtd;
	float price;
};

//Files
void menu();
void order(Pedido*);
void listInventory(Pedido*);
void exitAndSave(Pedido*);
bool checkInvetory(Pedido*, float, Pedido*, float, char*);
Pedido* addToInventory(Pedido*);
Pedido* removeItem(Pedido*);
Pedido* grow(int, int, Pedido*);
Pedido* loadInventory();

std::istream& operator >> (std::istream&, Pedido&);
std::ostream& operator << (std::ostream&, Pedido&);