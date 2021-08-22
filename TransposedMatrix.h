#pragma once
#include <stdio.h>
#define CELL_WIDTH      3
#define CELL_PRECISION  0

/// @file TransposedMatrix

typedef double matrixElements;

///@brief Recieves a square matrix and transposes it in place
 
void TransposeMatrix(matrixElements** matrix, size_t size);

/// @brief swaps the elements of the matrix of rows and coloumns
/// @param first rows
/// @param second coloumns
void SwapElements(matrixElements* first, matrixElements* second);

/// prints Matrix
void PrintMatrix(matrixElements** matrix, size_t size);