#include <iostream>     //declare the header files 
using namespace std;    

main() 
{
    int n, rn = 0, r;
    
    // n is the entered integer that we want to find the 
    // reverse of
    // rn stands for reversed number
    // and r starnds for remainder


// prompt the user to enter the integer value

    cout << "Enter an integer: ";

    cin >> n;


// we use the while loop to get the remainder and them use the formula to get the reversed number and then divide it by 10 and the loop continues until all the values are done being reversed
// so if the value is not zero, the remainder would be
// the last digit of the entered input and thus if we have
// 12345, 5 would be the last digit and that's exaclty 
// what we want to know ( the last digit )


    while(n != 0) 
	{
    r = n%10;
    rn = rn * 10 + r;
    n = n/10;
    }

    cout << "Reversed Value = " << rn;
    return 0;
    // return 0 for successful termination
    
}
