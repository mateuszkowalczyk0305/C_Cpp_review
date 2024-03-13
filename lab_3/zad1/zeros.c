#include "zeros.h"
#include <stdio.h>
#include <math.h>

void zeros (float z, float b, float c)
{
	if (a > 0)
	{
		float delta = ((b*b)- (4*a*c));
	}
	if (delta < 0)
	{
		printf("Delta jest ujemna.\n");
	}
	if (delta > 0)
	{
		float x1 = (-1*b - sqrt(delta))/(2*a);
		float x2 = (-1*b + sqrt(delta))/(2*a);
		printf("Miejsca zeroswe funkcji x1: %f , x2: %f\n", x1, x2);
	}
}