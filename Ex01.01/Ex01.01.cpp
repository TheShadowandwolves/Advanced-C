// Ex01.01.cpp : 
/// Leonard Blam
/// Advanced C
/// 900086
/// Exercise 1 #1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/// @brief prints the character given from the user
/// @param inputofUser first set to 0 since no input was made and than saves the entered value inside it
/// @return the program needs to output the character so that the while loop can determent if it is q or Q
char ReadAndPrintTheCharacter(char inputofUser)
{
    printf_s("Enter a character\n");
    scanf_s(" %c/n", &inputofUser);
    printf_s("The character entered is: %c\n", inputofUser);
    return inputofUser;
}

int main()
{
    char inputofUser = 0;
    inputofUser = ReadAndPrintTheCharacter(inputofUser);
    /// @brief loops over again until user inputs a q or Q
    while (inputofUser != 'q' && inputofUser != 'Q')
    {
       inputofUser = ReadAndPrintTheCharacter(inputofUser);
    }
    return 0;
}