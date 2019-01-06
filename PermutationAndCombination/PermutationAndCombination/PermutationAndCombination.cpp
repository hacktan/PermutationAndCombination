// PermutationAndCombination.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Calculate Permutation and Combination (nCr and nPr)
   Using Function */
#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, c, r, ncr, npr;
	long int fact(int);  /* function Prototype */
	printf("Enter the Value of n and r, n must be n>r :\n");
	scanf_s("%d%d", &n, &r);
	ncr = fact(n) / fact(n - r);
	npr = fact(n) / (n*fact(n - r));
	printf("NCR = %d\n", ncr);
	printf("NPR = %d\n", npr);
}
long int fact(int x)
{
	long int f = 1;
	int i;
	for (i = 1; i <= x; i++)
		f = f * i;
	return(f);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
