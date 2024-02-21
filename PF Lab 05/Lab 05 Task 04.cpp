#include <iostream>     //declare the header files 
using namespace std;    

main() 
{
    int year, rise = 1.5;

// we have taken the input as an unsigned value so it does not add -ve values
// so if the value is not zero, the remainder would be
// the last digit of the entered input and thus if we have
// 123, 3 would be the last digit and that's exaclty 
// what we want to know ( the last digit )
// after we have the last digit, we repeat the 
// loop and add the second last value or digit of the entered number
// the sum will keep on redefining itself by adding the sum of the digits.
// so if we have 129, it'll take 9 as the remainder and the sum will be redefined
// from 0 to 9 and then in the next loop it'll become last sum (9) plus the new sum (9+2)
// and so on until it adds all the values


    while( year <= 2033 )    // we use the while loop so the year will keep on increasing until it reaches the given number which is 2033 and the rise will keep on increasing by 1.5 as well in every next loop
	{
    year = 2018;
    rise = rise + 1.5;
    year++ ;
    
	
    cout << "Year and the rise of the sea level = " <<year<< " "<<rise<<endl; }

 
    return 0;
    // return 0 for successful termination
    
}
