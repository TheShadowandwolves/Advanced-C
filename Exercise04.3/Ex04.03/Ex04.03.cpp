// Ex04.03.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 4 #3
*/
#include<stdio.h>
#include <stdbool.h>

bool IsSwitch(const char* arg);
bool IsUpperCase(const char* arg);
bool IsLowerCase(const char* arg);
void PrintStats(int argc, char* argv[])
{
    // Initialize variables
    size_t switches = 0, upper = 0, lower = 0, none = 0;

    for (size_t index = 1; index < argc; ++index)
    {
        char* arg = argv[index];

        // print the current parameter
        printf("%s\n", arg);

        // check if the current parameter is a switch
        if (IsSwitch(arg))
        {
            ++switches;
        }

        // increment the counter for the case type
        size_t* caseType = IsUpperCase(arg) ? &upper : (IsLowerCase(arg) ? &lower : &none);
        ++(*caseType);
    }

    // print the number of parameters
    printf("Number of parameters: %d\n", argc - 1);

    // print the number of switches
    printf("Number of switches: %zu\n", switches);

    // print case type statistics
    printf("Number of uppercase: %zu\n", upper);
    printf("Number of lowercase: %zu\n", lower);
    printf("Neither uppercase nor lowercase: %zu\n", none);
}

bool IsSwitch(const char* arg)
{
    return arg[0] == '-' || arg[0] == '/';
}

bool StringInRange(const char* arg, char start, char end)
{
    // loop through the string
    for (size_t index = 0; arg[index] != '\0'; ++index)
    {
        // check if the current character is not uppercase
        if (arg[index] < start || arg[index] > end)
        {
            return false;
        }
    }
    return true;
}

bool IsUpperCase(const char* arg)
{
    return StringInRange(arg, 'A', 'Z');
}

bool IsLowerCase(const char* arg)
{
    return StringInRange(arg, 'a', 'z');
}

int main(int argc, char* argv[])
{
    PrintStats(argc, argv);

    return 0;
}