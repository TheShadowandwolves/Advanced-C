#pragma once
#include <stdio.h>
#define CELL_WIDTH      3
#define CELL_PRECISION  0

/// @file transpose.h

typedef double matrixElement;

/// enum for matrix types
enum matrixTypes
{
    None, SymmetricMatrix, SkewSymmetricMatrix
};

 ///@brief Recieves a square matrix and transposes it
 ///@return corresponding value from the enum whether it is symmetric, skew-symmetric, or neither
enum matrixTypes TransposeMatrix(matrixElement** matrix, size_t size);

 ///@brief Swaps two matrix elements
void swapElements(matrixElement* first, matrixElement* second);

void printMatrix(matrixElement** matrix, size_t size);