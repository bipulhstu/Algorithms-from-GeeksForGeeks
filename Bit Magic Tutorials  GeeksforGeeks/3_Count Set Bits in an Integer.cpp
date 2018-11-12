#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n)
{
	int count = 0;
	while(n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter an integer to find set bits: "<<endl;
	cin>>n;

	cout<<"\nNumber of set bits are : ";
	cout<<count_set_bits(n)<<endl;

	return 0;
}
