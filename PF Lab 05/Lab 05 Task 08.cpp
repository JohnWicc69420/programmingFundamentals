//This program checks whether 
//a number is a palindrome or not


#include <iostream>
using namespace std;

int main()
{
     int digit, n, num, reverse = 0;

     cout << "Enter a number to see if it's a palindrome or not: ";
     cin >> num;

     x = num;

     while ( num != 0)  // use a while loop so we can get the last digit and then the second last and so on until all the digits are successfully determined.
                        // we also make a reversed value by adding it to the digit value and if it is equal to the number entered, it is a palindrome
	 {
         digit = num % 10;
         reverse = (reverse * 10) + digit;
         num = num / 10;
     } 
	 

	 if (x == reverse)
         cout << "The number is a palindrome.";
     else
         cout << "The number is not a palindrome.";

    return 0;
}

