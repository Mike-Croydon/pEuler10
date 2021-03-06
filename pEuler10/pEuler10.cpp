// This program solves Project Euler problem 10: Summation of Primes
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "EulerLib.h"

using namespace std;
/*
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

//This function uses the Sieve of Eratosthenes algorithm to calculate all primes < a max
vector<int>  sieveE(int max)
{
	vector<int> nums, marked, primes;
	int p = 2;
	for (int i = 1; i <= max; i++)
	{
		nums.push_back(i);
		marked.push_back(0);
	}

	//This is the main loop. Numbers that are non-prime are marked that way by placing a 1 at their corresponding index
	for (int i = 0; i < max; i++)
	{
		while (p < max)
		{
			int marker = p * p;
			if (marker > max) { break; }	//once the marker is initially greater than the max all future markers will be greater than the max
			//non-primes are marked in this while loop
			while (marker < max)
			{
				marked[marker-1] = 1;
				marker += p;
			}
			//This loop finds the next number which hasn't been marked
			while (p < max)
			{
				p++;
				if (marked[p-1] == 0) { break; }
			}
		}
	}

	//This loops copies all the marked numbers to a new vector containing only primes
	for (int i = 0; i < max; i++)
	{
		if (marked[i] == 0)
		{
			primes.push_back(i+1);
		}
	}

	primes.erase(primes.begin()); //removes 1
	primes.erase(primes.end()-1); //removes max

	return primes;

}
*/

int main()
{
	
	vector<int> primes = EulerLib::Primes::sieveE(2000000);
	long long int sum = 0;
	for (int i = 0; i < primes.size(); i++)
	{
		sum = sum + primes[i];
	}
	
	/*
	long long int prime = 2;
	long long int sum = 0;
	while (prime < 2000000)
	{
		sum += prime;
		prime = nextHighestPrime(prime);
	}
	*/
	cout << "The sum of all primes below two million is: " << sum;
	
}
