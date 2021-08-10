// Ex05.cpp : 
// Leonard Blam
// 900086
// Advance c
// Exercise 1 #5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/// @brief this program will read 9 digit of a israeli id card and verify it.
/// @return true or false if the given id is valid or not
int main()
{
	const int lengthofId = 9;
	int israeliId[lengthofId];
	char validstatusofId = false;
	int jindex = lengthofId-2;
	int sumofAllDigits = 0;
	printf_s("Enter digits of your ID: \n");
	/// @brief reads lengthofId integers
	/// @return array of ints
	for (int index = 0; index < lengthofId; index++)
	{
		scanf_s("%d", &israeliId[index]);
	}
	/// @brief jindex is not the length minus 2 (second last place), while jindex is not less or equal it will loop
	while (jindex >= 1)
	{
		int temp = israeliId[jindex]*2;
		/// @brief only if "temp" the result is over 9 than it will substract 9 of it
		if (temp > 9)
		{
			temp -= 9;
		}
		/// @brief each number needs to be stored back to the array, so that summing up is easier. 
		israeliId[jindex] = temp;
		// jindex needs to decrement by 2. Two values to the left 
		jindex -= 2;
	}
	/// @brief sums up all containing numbers 
	/// @return returns final result that we need for checking
	for (int kindex = 0; kindex < lengthofId; kindex++)
	{
		sumofAllDigits += israeliId[kindex];
	}
	if (sumofAllDigits%10 == 0)
	{
		validstatusofId = true;
	}
	// we had a boolean that only would turn true if %10 is 0, that means the id is correct and valid
	printf_s("The Id is %s", validstatusofId ? "Valid" : "Not Valid");
	return 0;
}