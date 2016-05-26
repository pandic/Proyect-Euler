//============================================================================
// Name        : EulerP001.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * If we list all the natural numbers below
 * 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <iostream>
using namespace std;
int m3(int a);
int m5(int a);

int main() {
	int suma = 0;

	for(int i=0; i <=1000; i++)
	{
		if ((i%3 == 0) or (i%5 == 0)) suma += i;
	}

	cout << suma <<"\n";


	return 0;
}
