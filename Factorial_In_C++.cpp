#include <iostream.h>
#define ll long long
using namespace std;

ll fact(int n)
{
	if(n==1)
	return n;
	else
	return n*fact(n-1)
}
int main()
{
    ll n; 
    cout << "Enter a positive integer: ";
    cin >> n;
    ll factorial = fact(n);
    cout << "Factorial of " << n << " = " << factorial;
    // Done using recursion.
    
    return 0;
}
