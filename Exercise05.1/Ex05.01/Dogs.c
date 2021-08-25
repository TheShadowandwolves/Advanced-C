#include <stdio.h>
#include <malloc.h>
#include "Dogs.h"

void SortByName(Dog dogs[], int sizeArray)
{
	Dog tempDog;
	for (auto i = 0; i < sizeArray-1; i++)
	{
		for (auto j = 0; j < sizeArray; j++)
		{
			if (dogs[i].name > dogs[j].name)
			{
				tempDog = dogs[i];
				dogs[i] = dogs[j];
				dogs[j] = tempDog;
			}
		}
	}
}

void SortByWeight(Dog dogs[], int sizeArray)
{
	Dog tempDog;
	for (auto i = 0; i < sizeArray - 1; i++)
	{
		for (auto j = 0; j < sizeArray; j++)
		{
			if (dogs[i].kg > dogs[j].kg)
			{
				tempDog = dogs[i];
				dogs[i] = dogs[j];
				dogs[j] = tempDog;
			}
		}
	}
}
