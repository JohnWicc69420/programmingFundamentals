// This program converts a binary number into its decimal form 

#include <iostream>
using namespace std;


main()
 
 
{

     int bin, dec = 0, rem, num, base = 1;
     cout << "Enter a binary number in 1s and 0s only : ";
     cin >> num;
     bin = num;
     while (num > 0) // use the while loop to take the module of the entered value by 10 so we can see what the last entered digit was. The loop keeps doing that and then adds remainder to that value multiplied by 10 
                     // we multiply our base by 2 to make sure that every number is converted to its decimal form
                     // divide the entered number by 10 again
     {
         rem = num % 10;
         dec = dec + rem * base;
         base = base * 2;
         num = num / 10;
     }
     
     cout << "The decimal form of " << bin << " is : " << dec << endl;


}
