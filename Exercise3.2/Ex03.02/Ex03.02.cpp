// Ex03.02.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 3 #2
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>    

int main()
{
    //Initialize array
    const int maxSize = 20;
    int arr[maxSize] = { 0 };
    int temp = 0;
    int index = 0;
    int length = 0;
    /// @brief asks the user how long the array should be
    printf("Input the number of elements to store in the array (under 20) :\n");
    scanf("%d", &length);

    printf("Input the given number of elements in the array :\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
   // int length = index;
    //Displaying elements of original array    
    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    //Sort the array in ascending order    
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");

    //Displaying elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}