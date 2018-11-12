#include<bits/stdc++.h>
using namespace std;

int swap_bits(int n)
{
	///Get all even bits of n
	int even_bits = n & 0xAAAAAAAA;
	///Get all odd bits of n
	int odd_bits = n & 0x55555555;

	even_bits >>= 1;  ///Right Shift even bits
	odd_bits <<= 1;   ///Left Shift odd bits

	return (even_bits | odd_bits); ///combine even and odd bits
}
int main()
{
	int n;
	cout<<"Enter an integer: "<<endl;
	cin>>n;

	cout<<"\nNew integer is : ";
	cout<<swap_bits(n)<<endl;

	return 0;
}

