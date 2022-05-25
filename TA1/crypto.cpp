#include <iostream>
#include <random>
#include "crypto.h"

unsigned __int64 codificar(unsigned __int64 value)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, 31);

	unsigned positions = 0;

	for (size_t i = 0; i < 6; i++)
	{
		unsigned random = dist(mt); // 0 4 10 12 6 9
		positions = (positions << 5 | random); // 1233345346

		if (testarBit(value, random))
		{
			value = desligarBit(value, random);
		}
		else
		{
			value = ligarBit(value, random);
		}
	} 
	return (value << 32) | (positions << 2);
}

unsigned long long decodificar(unsigned __int64 value)
{
	unsigned vetPos[6];
	unsigned pos = (value << 32) >> 34;
	value = value >> 32;

	for (size_t i = 0; i < 6; i++)
	{
		vetPos[i] = (pos << (5 * i + 2) >> 27);
		if (testarBit(value, vetPos[i]))
		{
			value = desligarBit(value, vetPos[i]);
		}
		else
		{
			value = ligarBit(value, vetPos[i]);
		}
	}

	return value;
}

bool testarBit(unsigned value, unsigned pos)
{
	//	- A máscara me garante que terei 31 zeros e um 1, na posição escrita

	unsigned mask = 1;
	mask = (mask << pos);
	
	//	-  Pego o valor do bit que está na poisção informada e faço a validação.
	
	if (value & mask)
	{
		return true;
	}
	else
	{	
		return false;
	}
}

	//	- Retiro o bit do valor enviado para a função
unsigned desligarBit(unsigned value, unsigned pos)
{
	unsigned mask = 1;
	
	value = value & ~(mask << pos);

	return value;
}
	//	- Insiro o bit na posição enviada.
unsigned ligarBit(unsigned value, unsigned pos)
{
	unsigned mask = 1;

	value = value | (mask << pos);

	return value;
}
