//Task 10
//This program calculates the the total credit 
//of a person and also checks wether
//their credit limit is exceeded or not
 
#include <iostream>
using namespace std;
main()

//prompt user to input values

{
	int acc_num;
	float charges;
	float b_bal;     //beginning balance
	float new_bal;   //new balance
	float credits;
	float c_l;       //credit limit

	cout << "Enter account number (in integers): ";
	cin >> acc_num;

	{
		cout << "Enter the Beginning Balance: ";
		cin >> b_bal;

		cout << "Enter the Total Charges: ";
		cin >> charges;

		cout << "Enter the Total Credits: ";
		cin >> credits;

		cout << "Enter Credit Limit: ";
		cin >> c_l;

//formula to calculate the new balance
		new_bal = b_bal + charges - credits;

//cout for results

		if ( new_bal > c_l )
			{
			cout << "\nAccount: " << acc_num;
			cout << "\nCredit Limit: " << c_l;
			cout << "\nBalance: " << new_bal;
			cout << "Credit limit Exceeded!";
			}
          
        else
		{
			cout << "\nAccount: " << acc_num;
			cout << "\nCredit Limit: " << c_l;
			cout << "\nBalance: " << new_bal;
		}  
		}

}


_____________________________________________________________

