//============================================================================
// Name        : EulerP004.cpp
// Author      : Carlos Perez
// Version     :
// Copyright   : Your copyright notice
// Description : A palindromic number reads the same both ways.
//				 The largest palindrome made from the product of
//				 two 2-digit numbers is 9009 = 91 × 99.
//
//				 Find the largest palindrome made from the product
//				 of two 3-digit numbers.
//============================================================================

#include <iostream>
using namespace std;
int palindramo(int numero);
int main() {
	int number=0;
	int aux=0;
	int num1, num2 = 0;
	cout << "El mayor palindramo con un producto de dos numeros de 3 digitos es: \n " << endl; // prints
	for(int i = 100; i<1000; i++)
	{
		for(int j = 100; j<1000; j++)
		{
			aux = i*j;
			if ((palindramo(aux) == 1) and aux > number)
			{
				number = aux;
				num1 = i;
				num2 = j;
			}
		}
	}
	cout << "Los numeros multiplicados son: " << num1 << " y " << num2 << endl;
	cout << number;
	return 0;
}

int palindramo (int numero)
{
	int a = 0;
	int b = 0;
	int n1, n2,n3 = 0;
	int divisor = 1000;
	a = numero / divisor;
	b = numero % divisor;
	n1 =  b % 10;
	b = b / 10;
	n2 = b % 10;
	n3 = b / 10;
	b = n1*100 + n2*10 + n3;
	if (a == b)
		return 1;
	else
		return 0;
}
