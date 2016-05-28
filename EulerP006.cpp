//============================================================================
// Name        : EulerP006.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise number 06 from https://projecteuler.net/archives
//
//				 The sum of the squares of the first ten natural numbers is,
//
//				 12 + 22 + ... + 102 = 385
//				 The square of the sum of the first ten natural numbers is,
//
//				 (1 + 2 + ... + 10)2 = 552 = 3025
//				 Hence the difference between the sum of the squares of the
//				 first ten natural numbers and the square of the sum is
//				 3025 − 385 = 2640.
//
//				 Find the difference between the sum of the squares of the
//				 first one hundred natural numbers and the square of the sum.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=0;
	int b=0;
	for(int i=1;i<101;i++)
		{
			b = b + i*i;
			a = a + i;
		}
	cout << a*a - b << endl; // prints
	return 0;
}
