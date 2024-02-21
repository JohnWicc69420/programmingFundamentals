#include <iostream>   
#include <cmath>
using namespace std;    
double presentValue ( double , double , double);

main ()
{
	// declare all the values and prompt the user to enter the values that
	// are going to be put into that
	double f, r, n ; 
	cout << "What is the value that you want to have in the future? ";
	cin >> f;
	
	cout << "What is the annual interest rate? ";
	cin >> r;
	
	cout << "What is the number of years as the argument? ";
	cin >> n;
	
	// call the function and then display the values
	 
    cout << "The value that you need to deposit now is "<< presentValue(f, r , n)	;
	
}


// declare the values
 double presentValue ( double f, double r, double n)
{
	return (f)/pow (1 + r , n); 
}
