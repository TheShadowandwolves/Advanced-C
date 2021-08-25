#include "TransposedMatrix.h"
#include <stdio.h>

void TransposeMatrix(matrixElements** matrix, size_t size)
{
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = row + 1; col < size; col++)
        {
            // swap the rows and coloumns of the matrix 
            SwapElements(*(matrix + row) + col, *(matrix + col) + row);
        }
    }
}

void SwapElements(matrixElements* first, matrixElements* second)
{
    matrixElements temp = *first;
    *first = *second;
    *second = temp;
}

void PrintMatrix(matrixElements** matrix, size_t size)
{
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = 0; col < size; col++)
        {
            // print all cells with left padding defined in the header
            printf("%*.*lf ", CELL_WIDTH, CELL_PRECISION, matrix[row][col]);
        }
        printf("\n");
    }
}
