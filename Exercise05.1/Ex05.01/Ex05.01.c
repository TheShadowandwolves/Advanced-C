// Ex05.01.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 05 #1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Dogs.h"
/// @brief prints all character inside the struct seperatly one by one from the array
/// @param dogs is the array
/// @param sizeArray contains the size of array
void printArray(Dog dogs[], int sizeArray)
{
	for (auto i = 0; i < sizeArray; i++)
	{
		printf("%s", dogs[i].name);
		printf("%d", dogs[i].kg);
	}
}
/// @brief creates dogs element of struct with the given size and sorts the array by name and kg with printing each seperatly
void newDogs(Dog dogs[], int sizeArray)
{
	printf("Enter size of Array: \n");
	scanf_s("%d", &sizeArray);
	/// @brief if size is smaller than 1 then there is no way that array should work
	if (sizeArray<1)
	{
		printf("Wrong input, size of Array 20!\n");
		sizeArray = 20;
	}
	for (int i = 0; i < sizeArray; i++)
	{
		printf("Enter name first and then kg: \n");
		scanf("%s", dogs[i].name);
		scanf("%d", dogs[i].kg);
	}
	SortByName(dogs, sizeArray);
	printArray(dogs, sizeArray);
	SortByWeight(dogs, sizeArray);
	printArray(dogs, sizeArray);
}

int main()
{
	int sizeArray = 20;
	Dog dogs[20];
	newDogs(dogs, sizeArray);
	return 0;
}
