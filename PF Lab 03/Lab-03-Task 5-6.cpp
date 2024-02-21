//Task 05

//This program calculates the days or hours or minutes in a given amount of seconds

#include<iostream>
using namespace std;
main()
 {
   //declare variable to store user input
   int seconds;

   //prompt user to enter number of seconds
   cout << "Enter number of seconds:\n";
   cin >> seconds;
   //us if/else statements to determine the number of hours and days etc. 
   if(seconds >= 60 && seconds < 3600)
   {
   cout << "There are " << seconds/60 << " minutes in " << seconds << " seconds.\n";
   }
   else if(seconds >= 3600 && seconds < 86400)
   {
   cout << "There are " << seconds/3600 << " hours in " << seconds << " seconds.\n";
   }
   else if(seconds >= 86400)
   {
   cout << "There are " << seconds/86400 << " days in " << seconds << " seconds.\n";
   }

 }

____________________________________________________________

//Task 06
//This program calculates the total service fee of a bank
#include <iostream>
using namespace std;
main()


//prompt user to input data
{
int checks = 0;    
double balance, fee;

    cout << "What is your balance? \n";
    cin >> balance;
    
	if (balance >=0 )
	{
    cout << "What is the number of written checks? \n";
    cin >> checks;

//if else condition for proper resuts
    if (checks < 0) 
	{
    cout << "Account is overdrawn \n";
    }
    
    if (checks < 20 ) 
	{
    fee = 10 * checks;
    cout << "Service charges of bank for the month is Rs. "<< fee;
    }
    
    else if (checks <=39 && checks >=20)
	{
    fee = 8 * checks;
    cout << "Service charges of bank for the month is Rs. "<< fee;
    }
    
	else if (checks <=59 && checks >=40 ){
    fee = 6 * checks;
    cout << "Service charges of bank for the month is Rs. "<< fee;

    }
    else if (checks >60 )
	{
    fee = 4 * checks;
    cout << "Service charges of bank for the month is Rs."<< fee;
    }

    if ( balance <15000){
    fee=fee + 100;
    cout<<"\nThe total service fee is "<<fee;
    }
    }
    }

_____________________________________________________________

