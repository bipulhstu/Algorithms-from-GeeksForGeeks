/*
1  Initialize count: = 0
   2  If integer n is not zero
      (a) Do bitwise & with (n-1) and assign the value back to n
          n: = n&(n-1)
      (b) Increment count by 1
      (c) go to step 2
   3  Else return count

*/
#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n)
{
	int count = 0;
	while(n)
	{
		///Brian Kernighans Algorithm
		n &= (n-1);
		count++;
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
