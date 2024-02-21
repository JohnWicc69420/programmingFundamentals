#include <iostream>
using namespace std;


double calculateRetail(double, double);


main()

{
	
    //declare variables to store user input
    double wholesale, markup;

    //prompt user to enter values
    //and read from keyboard
    cout << "Please enter wholesale price: \n";
    cin >> wholesale;
    cout << "Please enter markup percentage: \n";
    cin >> markup;
    
    //validate input
    if(wholesale >= 0 && markup >= 0){
        // redefine the value of the markup percenteage as this is going to be divided by hundred
        // call function 
		// display the final values        

        markup = markup / 100 ;
        cout << "The retail price is: " << calculateRetail ( wholesale , markup ) << ".\n";
        
    }
    
    else
	
	{
        //print error message
        cout << "Please run program again and use only ";
        cout << "positive values!\n";
    }
    return 0;
}

double calculateRetail ( double wholesalePrice , double markupPercent )

{
    return (wholesalePrice + (wholesalePrice * markupPercent));
}

