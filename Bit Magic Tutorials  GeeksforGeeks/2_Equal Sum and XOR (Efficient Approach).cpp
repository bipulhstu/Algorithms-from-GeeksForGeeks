/*
Method 2 (Efficient) :
An efficient solution is as follows

Since we know a + b = a ^ b + 2 * (a & b)

We can write, n + i = n ^ i + 2 * (n & i)

So n + i = n ^ i implies n & i = 0

Hence our problem reduces to finding values of i such that n & i = 0.
How to find count of such pairs? We can use the count of unset-bits in
the binary representation of n. For n & i to be zero, i must unset all
set-bits of n. If the kth bit is set at a particular in n, kth bit in i
must be 0 always, else kth bit of i can be 0 or 1

Hence, total such combinations are 2^(count of unset bits in n)

For example, consider n = 12 (Binary representation : 1 1 0 0).
All possible values of i that can unset all bits of n are 0 0 0/1 0/1
where 0/1 implies either 0 or 1. Number of such values of i are 2^2 = 4.
*/
/* c++ program to print count of values such
that n+i = n^i */
#include <bits/stdc++.h>
using namespace std;

// function to count number of values less than
// equal to n that satisfy the given condition
int countValues(int n)
{
	// unset_bits keeps track of count of un-set
	// bits in binary representation of n
	int unset_bits=0;
	while (n)
	{
		if ((n & 1) == 0)
			unset_bits++;
		n=n>>1;
	}

	// Return 2 ^ unset_bits
	//return 1 << unset_bits;
	return pow(2, unset_bits);
}

// Driver code
int main()
{
	int n = 12;
	cout << countValues(n);
	return 0;
}
