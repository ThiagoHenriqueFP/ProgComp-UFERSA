#include "vector.h"
#include <cmath>
#define PI 3.14

float modVetor(float x, float y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

float angulo(float x, float y) {
	return atan2(x, y) * (180 / PI);
}