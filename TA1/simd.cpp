#include "simd.h"

int armazena(int num1, int num2, int num3, int num4)
{
	unsigned int value = 0;

	value = value | num1;
	value = (value << 8) | num2;
	value = (value << 8) | num3;
	value = (value << 8) | num4;

	return value;
}

int primeiro(unsigned first)
{
	return first >> 24;
}

int segundo(unsigned second)
{
	return (second << 8) >> 24;
}

int terceiro(unsigned third)
{
	return (third << 16) >> 24;
}

int quarto(unsigned fourth)
{
	return (fourth << 24) >> 24;
}

int soma(unsigned xxma, unsigned xxmb)
{
	int soma = 0;

	soma = soma | (primeiro(xxma) + primeiro(xxmb));
	soma = (soma << 8) | segundo(xxma) + segundo(xxmb);
	soma = (soma << 8) | terceiro(xxma) + terceiro(xxmb);
	soma = (soma << 8) | quarto(xxma) + quarto(xxmb);

	return soma;
}

int mult(unsigned xxma, unsigned xxmb)
{
	int mult = 0;

	mult = mult | (primeiro(xxma) * primeiro(xxmb));
	mult = (mult << 8) | segundo(xxma) * segundo(xxmb);
	mult = (mult << 8) | terceiro(xxma) * terceiro(xxmb);
	mult = (mult << 8) | quarto(xxma) * quarto(xxmb);

	return mult;
}