// Ex08.01.cpp : 
// Leonard Blam
// 900086
// Advanced C
// Exercise 1 #8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int WhatsBiggerNumber(int firstVal, int secondVal)
{
	if (firstVal > secondVal)
	{
		return firstVal;
	}
	return secondVal;
}
int WhatsSmallerNumber(int firstVal, int secondVal)
{
	if (firstVal < secondVal)
	{
		return firstVal;
	}
	return secondVal;
}
int main()
{
	const int maxSize = 1000;
	int index = -1;
	int localInt;
	int secondindex = 0;
	int inputedNumber = 0;
	int numberofUser[maxSize];
	int secondhighestnumber=0, secondsmallestnumber=0;
	int highestTemp = 0;
	int lowestTemp = 0;
	printf("Enter a number: \n");
	do
	{
		index++;
		scanf(" %d", &inputedNumber);
		numberofUser[index] = inputedNumber;
	} while (numberofUser[index]);
	while (numberofUser[secondindex])
	{
		localInt = WhatsBiggerNumber(secondindex, highestTemp);
			secondhighestnumber = highestTemp;
			highestTemp = localInt;
		localInt = WhatsSmallerNumber(secondindex,lowestTemp);
			secondsmallestnumber = lowestTemp;
			lowestTemp = localInt;
		secondindex++;
	}
	printf("The second highest number is %d \n", secondhighestnumber);
	printf("And the second lowest number is %d \n", secondsmallestnumber);
	return 0;
}
