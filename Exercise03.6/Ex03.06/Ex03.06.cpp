// Ex03.06.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 03 #6
*/

#include <stdio.h>
#include <malloc.h>
#include "Transpose.h"


 /// @brief checks for symmetry/skew-symmetry
 
int main()
{
    // read in the size of the matrix
    size_t matrixSize;
    printf("Enter the size of the matrix: ");
    scanf("%zu", &matrixSize);

    // Allocate memory for the matrix
    matrixElement** matrix = (matrixElement**)malloc(matrixSize * sizeof(matrixElement*));
    for (size_t row = 0; row < matrixSize; row++)
    {
        // Allocate memory for the row
        matrix[row] = (matrixElement*)malloc(matrixSize * sizeof(matrixElement));
        for (size_t coloumn = 0; coloumn < matrixSize; coloumn++)
        {
            *(*(matrix + row) + coloumn) = row * matrixSize + coloumn;
        }
    }

    printf("Original matrix: \n");
    printMatrix(matrix, matrixSize);

    // Transpose the matrix
    enum matrixTypes matrixType = TransposeMatrix(matrix, matrixSize);

    // Print the type of matrix
    printf("\nType of matrix: %s\n", matrixType == SymmetricMatrix ? "Symmetric" : (matrixType == SkewSymmetricMatrix ? "Skew-Symmetric" : "Neither Symmetric nor Skew-Symmetric"));

    // Print the transposed matrix
    printf("\nTransposed matrix:\n");
    printMatrix(matrix, matrixSize);

    return 0;
}