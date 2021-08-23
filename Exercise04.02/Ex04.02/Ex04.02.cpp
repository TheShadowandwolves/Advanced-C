// Ex04.02.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 04 #2
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

 ///@brief Reverses the word
 
 ///@brief Reverses the words in a string.
  ///@param str The string to be reversed.
char* ReverseWords(char* str, size_t length)
{
    // make an empty string to hold the reversed string
    char* reversed = (char*)malloc(sizeof(char) * (length + 1));

    char* current = str;

    // iterate through the string and copy the characters to the new string
    while (*current != '\0')
    {
        // pointer to the current character
        char* begin = current;
        // loop through the string
        while (*current != ' ' && *current != '\0')
        {
            current++;
        }
        // copy characters from word to reversed
        strncpy(reversed + length - (current - str), begin, current - begin);
        // exit if we have reached the end of the string
        if (current - str == length)
        {
            break;
        }
        // add a space before the word
        *(reversed + length - (current - str) - 1) = ' ';
        // move the pointer to the character after the space
        current++;
    }
    // terminate the string
    reversed[length] = '\0';
    // return the reversed string
    return reversed;
}
int main()
{
    int maxSize = 20;
    char* input;
    scanf_s("%s", &input, maxSize);

    char *reversed = ReverseWords(input, maxSize);

    printf("%s\n", reversed);

    free(reversed);

    return 0;
}