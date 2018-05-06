//Problem 7 :
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long n) {
	for(long i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	int i = 10001;
	long num = 2;

	while(i > 0) {
		if(isPrime(num++)) i--;
	}
	cout << endl << (--num) << endl;

	return 0;
}

/*OUTPUT:
104743
*/
