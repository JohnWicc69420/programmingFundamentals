// This program calculates the sum of a geometric series 
// in the form ar + ar2 + ar3 .......
// where a and r are both equal to 0.5

#include <iostream>
#include <math.h>
using namespace std;
main()
{
	double a = 0.5, n;
	double r = 0.5;
	double ans = 0;
	double result = 0;
	
	cout<<"What is he value of n? \n";
	cin>>n;
	
	// take the value of n or in other
	// words the power from where the users wants
	// to start the sum of the numbers
	
	while (n >= 0)      // we have used the while loop so the new result will be the ans added to the new value and n will be incremented by 1.
	{
		
		// take the power of the number and 
		// then the results adds up the value of the first
		// geometric series and proceeds to take in the sums of the rest of
		// of the values as well
		
		
		ans = a * pow(r,(n));
		result = ans + result;
		n++;
		cout << result <<endl;		
	
	}

	return 0;
}
