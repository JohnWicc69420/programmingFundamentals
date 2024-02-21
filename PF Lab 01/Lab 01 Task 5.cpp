#include <iostream>

using namespace std;

main ()
{
	int mealcost = 4450;
	float tax = 0.0675 * (mealcost);
	float tip = 0.15 * (mealcost + tax);
	float total = mealcost + tax + tip;
	cout<<"The mealcost is Rs. "<<mealcost<<endl;
	cout<<"The tax amount is Rs. "<<tax<<endl;
	cout<<"The tip amount is Rs. "<<tip<<endl;
	cout<<"The total bill is Rs. "<<total<<endl;
	cout<<"Thank You for choosing our restaurant! We're glad we were able to serve you!";
	
	}

