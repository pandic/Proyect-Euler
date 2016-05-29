//============================================================================
// Name        : EulerP009.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise number 09 from https://projecteuler.net/problem=9
//
//				A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//				a2 + b2 = c2
//				For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//				There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//				Find the product abc.
//============================================================================

#include <iostream>
#include <cmath>


using namespace std;

int main() {
	int a=1;
	int b=1;
	int c=1;

	const int limit = 1000;
	for (int i = 0; i< limit; i++)
	{
		for(int j = i; j< limit; j++)
		{
			//if(((i*i + j*j) == ((1000-i-j)*(1000-i-j))))
			if(500000 == 1000*(i+j)-i*j)
			{
				if((a<i) or (b<j) or ((c*c)<(i*i + j+j)))
				{
					a = i;
					b = j;
					c = sqrt(a*a + b*b);
				}
			}
		}
	}
	cout << "Los numeros elegidos son: "<< a << " "<<b<<" "<<c<< endl; // prints

	return 0;
}
