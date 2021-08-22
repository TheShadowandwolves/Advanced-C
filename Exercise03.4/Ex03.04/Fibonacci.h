#pragma once
#include <stdio.h>

/// @file fibonacci.h

/**
 * Defining an unsigned long long int in "typeT"
 */
typedef unsigned long long int typeT;

/*
 * @brief Returns the n number of the fibonacci serie
 * @param n returns the index of the serie
 * @return The nth fibonacci number
 */
typeT Fibonacci(size_t n);

/**
 * Initializes resources for Fibonacci
 *
 * @return 0 returns if successes to allocate memory but if not "-1"
 */
int InitFibonacci(void);

/**
 * Frees resources for Fibonacci
 *
 * @note This function can be called multiple times. You need to call this function everytime after calling fibonacci!
 */
void FinalizeFibonacci(void);
