// this program displays Fibonacci Series
#include <iostream>
using namespace std;


main() 

{
   
    int n, n1 = 0, n2 = 1, nextnum = 0;

    cout << "Enter the number: ";
    cin >> n;

// get the values

    cout << "Fibonacci Series: ";


// use the for loop to determine whether to use a comma or enter the next number
// next, still using the for loop, we add the sum of previous two digits


    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << n1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << n2 << ", ";
            continue;
        }
        nextnum = n1 + n2;
        n1 = n2;
        n2 = nextnum;
        
    cout << nextnum << ", ";
    }
    return 0;

}


