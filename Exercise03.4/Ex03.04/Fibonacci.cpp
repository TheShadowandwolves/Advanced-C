#include "Fibonacci.h"
#include <stdlib.h>
#include <malloc.h>


static typeT* fibonacciArray = NULL;
static size_t fibonacciSize = 0;

typeT Fibonacci(size_t n)
{
    size_t oldSize = fibonacciSize;

    // looks up if the table is not yet used
    if (fibonacciArray == NULL)
    {
        InitFibonacci();
    }

    // if needed it increases the size of the table
    if (n >= fibonacciSize)
    {
        fibonacciSize = n + 1;
        fibonacciArray = (typeT*)realloc(fibonacciArray, fibonacciSize * sizeof(typeT));

        // fill lookup table with fibonacci numbers
        for (size_t index = oldSize; index < fibonacciSize; index++)
        {
            fibonacciArray[index] = fibonacciArray[index - 1] + fibonacciArray[index - 2];
        }
    }

    return fibonacciArray[n];
}

int InitFibonacci(void)
{
    // skips if already initialized
    if (fibonacciArray != NULL)
    {
        return 0;
    }

    // initializes the table
    fibonacciSize = 2; // initial size
    fibonacciArray = (typeT*)malloc(fibonacciSize * sizeof(typeT));

    // check if memory allocation was successful
    if (fibonacciArray == NULL)
    {
        return -1;
    }

    // initialize the table with the first two fibonacci numbers (0,1)
    fibonacciArray[0] = 0;
    fibonacciArray[1] = 1;

    return 0;
}

void FinalizeFibonacci(void)
{
    // if lookup table is not initialized, then do nothing
    if (fibonacciArray == NULL)
    {
        return;
    }
    // free the table and array
    free(fibonacciArray);
    fibonacciArray = NULL;
}
