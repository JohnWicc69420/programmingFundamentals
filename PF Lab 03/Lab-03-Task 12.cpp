//Task 12
//This program converts a number to it's binary number

#include <iostream>
using namespace std;
main() 

//promt user to input data
{

  int a, b, c, d, e, n, decimal;

  cout<< "Input a five-digit integer in 1's and 0's: \n";
  cin>>n;

// take module by 10 to get the 5 values and then 
// mutiply by respective power of 2
// to get the binary form 
  a = n % 10;
  b = n / 10 % 10;
  c = n / 100 % 10;
  d = n / 1000 % 10;
  e = n / 10000;

  if ( e == 1 ) {
  e = 16;
}


  if ( d == 1 ) {
  d = 8;
}
  

  if ( c == 1 ) {
  c = 4;
}

  if ( b == 1 ) {
    b = 2;
}

  if ( a == 1 ) {
    a = 1;
}


//cout for results
  decimal = a + b + c + d + e;
  cout<< "\nThe decimal equivalent of that binary number is: "<<decimal;
}


_________________________________________________________

