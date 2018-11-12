/*
Magic Number:
            A magic number is defined as a number which can be expressed
            as a power of 5 or sum of unique powers of 5.

            First few: 5, 25, 30(25+5), 125, 130, .....


Method:
       *Iterate for all bits in the given integer.
       *Keep the sum of all powers of five for each bit.
*/
#include<bits/stdc++.h>
using namespace std;

int nthMagicNumber(int n)
{
	int pow = 1, answer = 0;

	///Go through every bit of n
	while(n)
	{
		pow = pow * 5;

		///If last bit of n is set
		if(n & 1)
			answer += pow;

		///Proceed to next bit
		n >>= 1;
	}
	return answer;
}
int main()
{
	int n;
	cout<<"Enter an integer: "<<endl;
	cin>>n;

	cout<<n<<"th Magic Number is : ";
	cout<<nthMagicNumber(n)<<endl;

	return 0;
}


