/*
Adam Number:
Adam number is a number when, the square of the number and the square
of the reversed number should be numbers which are reverse of each other.


Input: 12
Output: Adam Number

Explanation:
Square of 12 = 144
Reverser of 12 = 21
Square of 21 = 441
Now square of 12 and square of reverse of 12 are reverse of each other.
Therefore 12 is Adam number.
*/
#include<bits/stdc++.h>
using namespace std;

///To reverse the digits of numbers
int reverse_digits(int num)
{
	int rev = 0;
	while(num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return rev;
}

///To square number
int square(int num)
{
	return (num*num);
}
///To check Adam number
bool check_adam_number(int num)
{
	int a = square(num);
	int b = square(reverse_digits(num));
	if(a == reverse_digits(b))
		return true;
	else
		return false;
}

int main()
{
	int n;
	cout<<"Enter a number to check it is Adam number or not: "<<endl;
	cin>>n;

	bool result = check_adam_number(n);

	if (result == true)
	    cout<<"Adam Number"<<endl;
	else
		cout<<"It is not Adam number"<<endl;

	return 0;
}
