// Ex03.01.cpp :
///Leonard Blam
/// Advanced C
/// 900086
/// Exercise 1 #3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/// @brief gets a string from main and counts each char until it reaches the 0 place
/// @param sentence is the word given from the user, it gets seperated in chars
/// @returns the length of the sentence
size_t StringLength(const char* sentence)
{
	int lengthofSentence = 0;
	while (sentence[lengthofSentence] != '\0')
	{
		lengthofSentence++;
	}
	return lengthofSentence;
}

int main()
{
	const int maxSize = 20;
	// max Size can be changed
	char sentence[maxSize] = "0";
	printf_s("Enter your sentence: \n");
	// reads the whole sentence from the user until not entered "enter"
	scanf_s(" %s", sentence, maxSize);
	printf_s("The word that you entered is %u characters long. \n", StringLength(sentence));
	return 0;
}
