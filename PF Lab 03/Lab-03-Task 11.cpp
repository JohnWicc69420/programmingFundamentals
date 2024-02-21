//Task 11
//This prgram wether 
//a 5 digit number is a palindrome or not


#include <iostream>
using namespace std;
main() 

{
  int n, a, b, c, d, e;

  cout<<"Enter a 5 digit number: \n";
  cin>>n;

// divide by 10000 to get the first digit of the five and so on...
  a = n / 10000;
  b = n / 1000 % 10;
  c = n / 100 % 10;
  d = n / 10 % 10;
  e = n % 10;

// now check wether the values are equal e.g 
// the 1st and 2nd values are equal to 4th and 5th respectively 
//cout for results

  if ( a == e && b == d ) 
  {
  cout<<"The number is a palindrome \n";
  }


  if ( a != e || b != d ) 
  {
  cout<<"The number is not a palindrome \n";
  }
  }

__________________________________________________________
