// This program solves Project Euler problem 10: Summation of Primes
//

#include "pch.h"
#include <iostream>

using namespace std;
//This function checks if a number is prime
bool primeCheck(int n)
{
	for (int i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

//This function simply checks every number starting at p to see if it's prime. It will return the next higher prime number
int nextHighestPrime(int p)
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
    std::cout << "Hello World!\n"; 
}
