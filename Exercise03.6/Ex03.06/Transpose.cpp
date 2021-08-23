#include "Transpose.h"
#include <stdio.h>
#include <stdbool.h>

enum matrixTypes TransposeMatrix(matrixElement** matrix, size_t size)
{
    bool isSymmetric = true;
    bool isSkewSymmetric = true;
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = row + 1; col < size; col++)
        {
            matrixElement* first = *(matrix + row) + col;
            matrixElement* second = *(matrix + col) + row;
            // swap matrix[row][col] and matrix[col][row]
            swapElements(first, second);
            // check if matrix is still symmetric
            if (*first != *second)
            {
                isSymmetric = false;
            }
            // check if matrix is still skew symmetric
            if (*first != -(*second))
            {
                isSkewSymmetric = false;
            }
        }
    }
    // return the matrix type
    return isSymmetric ? SymmetricMatrix : (isSkewSymmetric ? SkewSymmetricMatrix : None);
}

void swapElements(matrixElement* first, matrixElement* second)
{
    matrixElement temp = *first;
    *first = *second;
    *second = temp;
}

void printMatrix(matrixElement** matrix, size_t size)
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