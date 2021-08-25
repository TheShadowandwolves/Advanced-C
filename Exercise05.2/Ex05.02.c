// Ex05.02.c : 
/*
Leonard Blam
900086
C Workshop
Exercise 05 # 2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"

// Function prototype declaration
void addition(int firstNumber);
void subtraction(int firstNumber);
void multiplication(int firstNumber);
void division(int firstNumber);
void calculator_operations();

// Start of Main Program
int main()
{
    int X = 1;
    char Calc_oprn = 'q';
    int firstNumber = 0;

    printf("\n Welcome to C calculator \n\n");
    prinf("Please enter the first number: \n");
    scanf("%d", &firstNumber);
    // Function call 
    calculator_operations();

    while (X)
    {
        printf("\n");
        printf("%s : ", KEY);
        scanf("%c", &Calc_oprn);

        switch (Calc_oprn)
        {
        case '+': addition(firstNumber);
            break;

        case '-': subtraction(firstNumber);
            break;

        case '*': multiplication(firstNumber);
            break;

        case '/': division(firstNumber);
            break;
        case 'Q':
        case 'q': exit(0);
            break;
        default: system("cls");

            printf("\n**********You have entered unavailable option");
            printf("***********\n");
            printf("\n*****Please Enter any one of below available ");
            printf("options****\n");
            calculator_operations();
        }
    }
}

//Function Definitions

void calculator_operations()
{
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void addition(int firstNumber)
{
    int total = 0, number;
 
    printf("Please enter your second number: \n");
    scanf("%d", &number);
    total = firstNumber + number;
    printf("Sum of numbers = %d \n", total);
}

void subtraction(int firstNumber)
{
    int b, c = 0;
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = firstNumber - b;
    printf("\n%d - %d = %d\n", firstNumber, b, c);
}

void multiplication(int firstNumber)
{
    int b, mul = 0;
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul = firstNumber * b;
    printf("\nMultiplication of entered numbers = %d\n", mul);
}

void division(int firstNumber)
{
    int b, d = 0;
    printf("Please enter second number : ");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("Error!!!");
        b = 1;
    }
    d = firstNumber / b;
    printf("\nDivision of entered numbers=%d\n", d);
}
