//This is a program that calculates the factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n, fac = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    // take in the number that they want the factorial of 


// use the for loop and set the initial values to 1 
// the loop will keep multiplying the number with its lower ones until the answer is reached and then cout the answer
    for (int i = 1; i <=n; i++)
    {
    	
    fac *= i;

    }

    cout << "The factorial of " << n << " is " << fac;    
    return 0;
}
