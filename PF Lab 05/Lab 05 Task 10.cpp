// this program asks user to enter the 
// the annual interest rate, the starting balance, and the                 
// number of months that have been passed since the account was established.
// in order to calculate the balance of a 
// saving account at the end
// of a period of time



#include <iostream>
using namespace std;

main()
{
	
	
	// declaring all the values and setting
	// the sums of all the values i.e the
	// total of those values to zero as
	// this is the starts of the program
	
	
    float   interestRate;
    double  initialBalance,            accountBalance,
            monthlyDeposit,            totalDeposit = 0,
            monthlyWithdrawn,          totalWithdrawn = 0,
            monthlyInterestEarned,     totalInterestEarned = 0;
    int     months, counter;

    do
    
	{
		
		// ask user to enter the annual interest rate so
		// we can see if the value is a negative
		// number or a positve value
		// and if it is a negative number then
		// we should ask the user to enter a value
		// that is a positve value
		
		
        cout << "What is the annual interest rate? ";
        cin >> interestRate;
        if (interestRate < 0)
            cout << "It should be a positive number.\n\n";
    }   while(interestRate < 0);

    do 
	
	{
        // ask user to enter the starting balance 
		// and if it is a negative number then
		// we should ask the user to enter a value
		// that is a positve value   
		// and declare it is the current balance of the account
 
 
        cout << "What is the starting balance? ";
        cin >> initialBalance;
        if (initialBalance < 0)
            cout << "It should be a positive number.\n\n";
    }   while(initialBalance < 0);
        accountBalance = initialBalance;

    do 
    
	{
		
		
		// ask user to enter the number of months 
		// and if it is a negative number then
		// we should ask the user to enter a value
		// that is a positve value   
		
		
		
        cout << "How many months have passed since the account was established? ";
        cin >> months;
        if (months < 0)
            cout << "Months should be a positive number.\n\n";
    }   while(months < 0);

    cout << endl;



                // now we have to use the for loop so 
                // when the values are  added and we now
                // want to know the deposits for each month
                // we will easily be able to do that
                // because we will set the counter to 1
                // and when the counter reaches the 
                // number of months, the program stops asking the
                // user their deposits and withdraws from that month 
                // and all other months as well and if the given number is
                // a negative value, then the user should see the
                // message saying that the number should be positive



    for (counter = 1; counter <= months; counter++)
    {
            do
        {
            cout << "How much money was deposited in the month number "<<counter<<" ?\n23432";
            cin >> monthlyDeposit;
            if (monthlyDeposit < 0)
            cout << "It should be a positive number.\n\n";

        }   while (monthlyDeposit < 0);
        accountBalance += monthlyDeposit;


            do 
		
		{
            cout << "How much money was withdrawn from account? ";
            cin >> monthlyWithdrawn;
            if (monthlyWithdrawn < 0)
            cout << "It should be a positive number.\n\n";

        }   while (monthlyWithdrawn < 0);
        accountBalance -= monthlyWithdrawn;

        
        // now we should use the formula to calculate the monthly interest that
        // the person has earned by multiplying the current account balance
        // with the 12th of the interest rate as we are calculating it for 12 months
        // then the account balance should be added the value of monthly interest earned
        
        monthlyInterestEarned = accountBalance * ( interestRate / 12 );
        accountBalance += monthlyInterestEarned;

        
        
        // define the values and make an increment in them as well
        
        totalDeposit += monthlyDeposit;
        totalWithdrawn += monthlyWithdrawn;
        totalInterestEarned += monthlyInterestEarned;

        cout << endl;
    }

        // display all the results 


       cout << "Ending balance: " << accountBalance << endl
            << "Total deposit: " << totalDeposit << endl
            << "Total withdrawn: " << totalWithdrawn << endl
            << "Total interest earned: " << totalInterestEarned << endl;


}

