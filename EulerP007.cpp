//============================================================================
// Name        : EulerP007.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise number 07 from https://projecteuler.net/archives
//
//				 By listing the first six prime numbers:
//				 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//				 What is the 10 001st prime number?
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int longitud = 10001;
	int primes[longitud];


	for(int i=0; i<longitud ;i++)
		primes[i]=0;

	for (int i=1;i<longitud;i++)
	{
		for(int j=1; j<i;j++)
		{
			if ((i%j == 0) and (j != 1))
				primes[i-1] = 1;
		}
	}
	for(int i=0;i<longitud ;i++)
	{
		if(primes[i] == 0)
			cout << i+1 << " "<< endl; // prints
	}
	return 0;
}
