// this program is used to display a pattern that is just like that of a pyramid
#include <iostream>
using namespace std;

main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

// we use the for loop 
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    return 0;
}

