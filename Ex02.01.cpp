// Ex02.01.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop
Exercise 02 #1,2
*/

#include <stdio.h>

int main()
{
	int a = 0;
	/// @brief 	while (a<1000)
	//00007FF6F63039C2  cmp         dword ptr[a], 3E8h
	// 	   sets up the letter a with number
	//	00007FF6F63039C9  jge         main + 35h(07FF6F63039D5h)
	// adds the number a certain value
	/// @return 
	while (a < 1000)
	{
		a++;

	}
	/*	for (int i = 0; i < 10; i++)
00007FF6F63039D5  mov         dword ptr [rbp+24h],0
00007FF6F63039DC  jmp         main+46h (07FF6F63039E6h)
00007FF6F63039DE  mov         eax,dword ptr [rbp+24h]
00007FF6F63039E1  inc         eax
00007FF6F63039E3  mov         dword ptr [rbp+24h],eax
00007FF6F63039E6  cmp         dword ptr [rbp+24h],0Ah
00007FF6F63039EA  jge         main+56h (07FF6F63039F6h)
 more commants are being executed for a for loop
*/
	for (int i = 0; i < 10; i++)
	{
		a++;
	}
	/*
	while (a > 2000);
00007FF6F63039FE  cmp         dword ptr [a],7D0h
00007FF6F6303A05  jg          main+56h (07FF6F63039F6h)
	do while loop executes the same as just a while loop. It does not seem like there is
	an execution happening only by while...
	*/
	do
	{
		a--;
	} while (a > 2000);
}
