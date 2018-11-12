#include<bits/stdc++.h>
using namespace std;

int swap_bits(int n)
{
	return {(n & 0xAAAAAAAA)>>1 | (n & 0x55555555)<<1};
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


