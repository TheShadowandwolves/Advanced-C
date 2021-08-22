// Ex03.04.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 3 #4
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Fibonacci.h"

/**
 * @brief Test the lazy evaluation Fibonacci function
 */
int main()
{
    int checkNumber = 3;
    // calculate and store the first 94 Fibonacci numbers
    for (size_t number = 0; number <= 100; ++number)
    {
        printf("[%zu] %20llu\n", number, Fibonacci(number));
    }
    printf("Enter a number to check: \n");
    scanf("%d", &checkNumber);
    // check that Fibonacci retrieves values from the table
    printf("[%d] %20llu\n", checkNumber, Fibonacci(checkNumber));

    // free ressources
    FinalizeFibonacci();

    return 0;
}