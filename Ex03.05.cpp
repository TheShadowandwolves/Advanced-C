// Ex03.05.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 3 # 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include "TransposedMatrix.h"

 ///@brief Test the transpose function
 
int main()
{
    // read in the size of the matrix
    size_t matrixSize;
    printf("Enter the size of the matrix: ");
    scanf("%zu", &matrixSize);

    // Allocate memory for the matrix
    matrixElements** matrix = (matrixElements**)malloc(matrixSize * sizeof(matrixElements*));
    for (size_t row = 0; row < matrixSize; row++)
    {
        // Allocate memory for the row
        matrix[row] = (matrixElements*)malloc(matrixSize * sizeof(matrixElements));
        // Fill the row of the matrix with its overall index
        for (size_t col = 0; col < matrixSize; col++)
        {
            matrix[row][col] = row * matrixSize + col;
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    PrintMatrix(matrix, matrixSize);

    // Transpose the matrix
    TransposeMatrix(matrix, matrixSize);

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    PrintMatrix(matrix, matrixSize);

    return 0;
}