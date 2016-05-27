//============================================================================
// Name        : EulerP005.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise number 05 from https://projecteuler.net/archives
//				 2520 is the smallest number that can be divided
//				 by each of the numbers from 1 to 10 without any remainder.
//				 What is the smallest positive number that is evenly
//				 divisible by all of the numbers from 1 to 20?
//============================================================================

#include <iostream>
using namespace std;

int esDivisible(int a);

int main() {
	int c= 0;
	int numero = 20;
	while(c==0)
	{
		if (esDivisible(numero) == 1)
			c=1;
		else
			numero++;
	}

	cout << "El numero es: " << numero << endl;
	return 0;
}

int esDivisible(int a)
{
	for(int i=1; i < 21; i++)
	{
		if(a%i != 0)
			return 0;
	}
	return 1;
}
