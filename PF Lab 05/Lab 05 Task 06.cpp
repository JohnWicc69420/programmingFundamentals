#include<iostream>
using namespace std;

main()
{

		
	int days;          // the total of the number of days that the population is going to increase
	float pi;          // pi = population increase        // increase percentage by each day
    double ps;         // ps = population size            // starting population size
	
	
	cout << "What is the starting size of the population\n";
	cin >> ps;

	//if the user enters a number less than 2, ask for a greater number
	while(ps < 2)
	{
		
		cout << "\nEnter a number a number greater than one";
		cin >> ps;
	 
	}

	cout << "\nWhat s the daily population increase (by percentage)?\n";
	cin >> pi;

	//if the user enters a negative value, ask for a postive number
	
	if(pi < 0)
	{
		
		cout << "\nPlease enter a positive number.\n";
		cin >> pi;
	
	}

	cout << "\nEnter the number of days the population is going to increase?\n";
    cin >> days;

	//if user enters a number less than 1, ask for a number greater than 0
	if(days < 1)
	{
		cout << "\nPlease enter a number greater than zero.\n";
		cin >> days;
	}

   for (int n = 1; n <= days; n++)
	{
		cout << "Day " << n << endl;
		ps = ps + ( (pi/100) * ps ) ;                             
		cout << "Population Size: " << ps << endl;
	}

	return 0;
}
