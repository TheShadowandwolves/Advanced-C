// Ex06.03.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      /* printf */
/// @brief this function will recursive go over the number and output its binary respresentation of it by recursivly devide the number 
/// in 2 and while coming back its saving if this current value the remainder is 0 or 1 and output it
/// @param number is the given number from user
/// @param binaryV contains the 0 or 1 value
void PrintBin(int number)
{
    /// @brief if number is already by 0 there is no point to devide more. Just go back and output its current value (surely 0!) 
    if (!number)
    {
        printf_s("%d", number);
        return number;
    }
    int binaryV = (number % 2) ? 1 : 0;
    PrintBin(number / 2);
    printf_s("%d", binaryV);

}
int main(void)
{
    int givenNumber = 0;
        /* byte to binary string */
    printf("Enter a number: \n");
    scanf_s("%u", &givenNumber);
    PrintBin(givenNumber);
    return 0;
}