#pragma once
#include <stdio.h>

typedef struct Dog
{
	char name[20];
	int kg;
}Dog;

void SortByName(Dog dogs[], int sizeArray);
void SortByWeight(Dog dogs[], int sizeArray);

