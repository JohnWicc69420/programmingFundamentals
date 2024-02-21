#include <iostream>

using namespace std;

main ()
{
	int total_shares = 600;
	float price_p_s = 21.77;
	float total = total_shares * price_p_s;
	float commission = total * 0.02;
	cout<<"The amount paid for the stock (without commission) is Rs. "<<total<<endl;
	cout<<"The amount of commission is Rs. "<<commission<<endl;
    cout<<"The total amount (stock + commission) paid by Kathryn is Rs. "<<total + commission <<endl;
	}

