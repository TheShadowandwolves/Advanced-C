// Ex06.02.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 06 #2
*/

#include <stdio.h>
/// @brief prints the hexadecimal number of given number
/// @param givenNumber is entered by the user (can also be char!)
void PrintHex(int givenNumber)
{
	printf("Hexadezimal: %X.\n", givenNumber);
}
int main()
{
	int givenNumber;
	printf_s("Enter a symbol to convert it to hexa: \n");
	// since givenNumber is a int format it will read any input into int (make sure not to use strings and other not supported formats!)
	scanf_s("%u", &givenNumber);
	// just printing out what the user just gave
	printf("Dezimal: %u.\n", givenNumber);
	PrintHex(givenNumber);
	return 0;
}
