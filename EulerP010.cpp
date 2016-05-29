//============================================================================
// Name        : EulerP010.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise number 10 from https://projecteuler.net/problem=9
//
//				The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//				Find the sum of all the primes below two million.
//
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	const long LIMIT = 2000000;
	long result = 0;
	int c=1;
	int j= 0;
	int i = 2;
	int raiz = 0;

	for(i=2; i<LIMIT; i++)
	{
		c = 1;
		j = 2;

		raiz = rint(pow(i,0.5));
		while(c==1 and j<=raiz)
		{
			if((c == 1) and (i%j == 0))	{c = 0;}
			j++;
		}


		if(c == 1)
		{
			result += i;
		}
	}

	cout << "La suma es: "<< result << endl; // prints
	return 0;
}
