//PRIMES 2,3,5,7 ETC.
#include <iostream>
#include <vector>
using namespace std;

vector<int> prime;

bool is_prime(int n)
{
	for (int i = 0; i < prime.size(); i++)
		if (n % prime[i] == 0) return false;	
	return true;	
}
int main()
{
	prime.push_back(2);	// consider the smallest prime

	for (int i = 3; i <= 100; i++)	// test all integers [3:100]
		if (is_prime(i)) prime.push_back(i);	// add new prime to vector

	cout << "Primes: ";
	for (int i = 0; i < prime.size(); i++)
		cout << prime[i] << endl;
}