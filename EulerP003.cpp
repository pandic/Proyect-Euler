//============================================================================
// Name        : EulerP003.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : The prime factors of 13195 are 5, 7, 13 and 29.
// 		 What is the largest prime factor of the number 600851475143 ?
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include    <cstdlib>
#include    <ctime>
#include    <sys/timeb.h>

using namespace std;

int main() {
	const double NUMERO = 600851475143;
	double Naux = NUMERO;
	double i = 0.0;
	cout.precision(18);
	i = 0;
	while (i <= Naux)
	{
		if ( fmod(NUMERO,i)== 0.0)
		{
			cout <<"Valor " << i <<endl;
			Naux = Naux / i;
		}
		i = i + 1 ;
	}
	return 0;
}
