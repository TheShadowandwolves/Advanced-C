// Ex02.03.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 2 #3
*/

#include <stdio.h>

int main()
{
	int caseNumber = 0;
	int readNumber = 0;
	scanf_s(" %d", &readNumber);
	while (caseNumber != 3)
	{
		/*	switch (caseNumber)
00A31894  mov         eax,dword ptr [caseNumber]  
00A31897  mov         dword ptr [ebp-0E0h],eax  
00A3189D  cmp         dword ptr [ebp-0E0h],0  
00A318A4  je          __$EncStackInitStart+6Eh (0A318BAh)  
00A318A6  cmp         dword ptr [ebp-0E0h],1  
00A318AD  je          __$EncStackInitStart+7Dh (0A318C9h)  
00A318AF  cmp         dword ptr [ebp-0E0h],2  
00A318B6  je          __$EncStackInitStart+95h (0A318E1h)  
00A318B8  jmp         __$EncStackInitStart+0BAh (0A31906h)  
switch takes a couple of load words
*/
		switch (caseNumber)
		{
		case 0:
			/*	if (readNumber)
00A318BA  cmp         dword ptr [readNumber],0  
00A318BE  je          __$EncStackInitStart+7Bh (0A318C7h)  
single comparisment and than jump to address
*/
			if (readNumber)
			{
				caseNumber = 1;
			}
			break;
		case 1:
			/*		if (readNumber > 10)
00A318C9  cmp         dword ptr [readNumber],0Ah  
00A318CD  jle         __$EncStackInitStart+8Ch (0A318D8h)  
			{
				caseNumber = 2;
00A318CF  mov         dword ptr [caseNumber],2  
			}
00A318D6  jmp         __$EncStackInitStart+93h (0A318DFh)  
			else
			{
				caseNumber = 3;
00A318D8  mov         dword ptr [caseNumber],3  
			} does the same as normal if
			*/
			if (readNumber > 10)
			{
				caseNumber = 2;
			}
			else
			{
				caseNumber = 3;
			}
			break;
		case 2:
			/*		caseNumber = readNumber < 10 ? 3 : 1;
00A318E1  cmp         dword ptr [readNumber],0Ah  
00A318E5  jge         __$EncStackInitStart+0A7h (0A318F3h)  
00A318E7  mov         dword ptr [ebp-0E0h],3  
00A318F1  jmp         __$EncStackInitStart+0B1h (0A318FDh)  
00A318F3  mov         dword ptr [ebp-0E0h],1  
00A318FD  mov         eax,dword ptr [ebp-0E0h]  
00A31903  mov         dword ptr [caseNumber],eax  
installs all different arguments and calls jump command twice
*/
			caseNumber = readNumber < 10 ? 3 : 1;
			break;
		default:
			break;
		}
	}
}

