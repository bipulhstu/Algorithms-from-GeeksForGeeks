/*
Space and time efficient Binomial Coefficient:
Write a function that takes two parameters n and k and returns the value of
Binomial Coefficient C(n, k). For example, your function should return 6 for
n = 4 and k = 2, and it should return 10 for n = 5 and k = 2

C(n, k) = n! / (n-k)! * k!
        = [n * (n-1) *....* 1]  / [ ( (n-k) * (n-k-1) * .... * 1) *
                                    ( k * (k-1) * .... * 1 ) ]
After simplifying, we get
C(n, k) = [n * (n-1) * .... * (n-k+1)] / [k * (k-1) * .... * 1]

Also, C(n, k) = C(n, n-k)  // we can change r to n-r if r > n-r
*/
// Program to calculate C(n ,k)
#include <stdio.h>

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
	int res = 1;

	// Since C(n, k) = C(n, n-k)
	if ( k > n - k )
		k = n - k;

	// Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

/* Drier program to test above function*/
int main()
{
	int n = 8, k = 2;
	printf ("Value of C(%d, %d) is %d ", n, k, binomialCoeff(n, k) );
	return 0;
}

