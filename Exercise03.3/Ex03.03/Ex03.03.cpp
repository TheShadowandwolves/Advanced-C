// Ex03.03.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 3 #3
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    int index, userGivenNum;

    // initialize first and second terms
    int t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms: \n");
    scanf("%d", &userGivenNum);

    // print the first two terms t1 and t2
   //printf("Fibonacci Series: %d, %d, ", t1, t2);

    // print 3rd to nth terms
    for (index = 3; index <= userGivenNum; ++index) {
       // printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("This is your fibonacci Number: \n");
    printf("%d", nextTerm);
    return 0;
}
