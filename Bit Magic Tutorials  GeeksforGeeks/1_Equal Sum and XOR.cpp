/*

Equal Sum and XOR

Given a positive integer n, find count of positive integers i such that 0 <= i <= n and n+i = n^i
Examples :

Input  : n = 7
Output : 1
Explanation:
7^i = 7+i holds only for only for i = 0
7+0 = 7^0 = 7


Input n = 12
Output: 4
12^i = 12+i hold only for i = 0, 1, 2, 3
for i=0, 12+0 = 12^0 = 12
for i=1, 12+1 = 12^1 = 13
for i=2, 12+2 = 12^2 = 14
for i=3, 12+3 = 12^3 = 15



Method 1 (Simple) :
One simple solution is to iterate over all values of i 0<= i <= n and count all satisfying values.
*/

/* C++ program to print count of values such
   that n+i = n^i */
#include <iostream>
using namespace std;

// function to count number of values less than
// equal to n that satisfy the given condition
int countValues (int n)
{
    int countV = 0;

    // Traverse all numbers from 0 to n and
    // increment result only when given condition
    // is satisfied.
    for (int i=0; i<=n; i++ )
        if ((n+i) == (n^i) )
            countV++;

    return countV;
}

// Driver program
int main()
{
    int n = 12;
    cout << countValues(n);
    return 0;
}
