// This program solves Project Euler problem 10: Summation of Primes
//

#include "pch.h"
#include <iostream>

using namespace std;
//This function checks if a number is prime
bool primeCheck(long long int n)
{
	for (long long int i = 2; i < sqrt(2*n); i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

//This function simply checks every number starting at p to see if it's prime. It will return the next higher prime number
int nextHighestPrime(long long int p)
{
	//cout << "nextHighestPrime() called" << endl;
	p++;
	while (!(primeCheck(p)))
	{
		p++;
	}
	return p;
}

int main()
{
	long long int prime = 2;
	long long int sum = 0;
	while (prime < 2000000)
	{
		sum += prime;
		prime = nextHighestPrime(prime);
	}

	cout << "The sum of all primes below two million is: " << sum;
}
