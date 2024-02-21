#include <iostream>
using namespace std;

int main()
{
    int  months = 12;
	int count = 0;
	string name[months] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double rain[months], avg, year = 0, highest, lowest;
	string highMonth, lowMonth;
	
	
	
	// prompt user to enter amount of rainfall for each month
	
	for (count = 0; count < months; count++)

	{
		cout << "How many inches of rain does " << name[count] << " have? \n";
		cin >> rain[count];
		while (rain[count] < 0)
		{
			cout << "Please enter a number that is greater than 0." << endl;
			cin >> rain[count];
		}
	}

	highest = rain[0]; // finds month with the highest amount of rain
	lowest = rain[0]; // finds month with the least amount of rain


// use the for loop to compare the first value of the array to the rest to find out which one of the 12 has the lowest value and vice versa
	for (count = 1; count < months; count++)
	{
		if (rain[count] > highest)
		{
			highMonth = name[count];
			highest = rain[count];
		}
		else if (rain[count] < lowest)
		{
			lowMonth = name[count];
			lowest = rain[count];
		}
	}

	
// use the for loop to add all the values of rain for the whole year also to also diplay the relevant ones with the respective month name
	for (count = 0; count < months; count++)
	{
		year += rain[count];
		cout << name[count] << " has " << rain[count] << " inches of rainfall.\n";
	}
	
// define the value of average	
	avg = year/12;

// display the required results
	cout << "Total Rainfall throughout the year is " << year << " inches" << endl;
	cout << "The average monthly rainfall is " << avg << " inches" << endl;
	cout << "The month with the highest amount of rainfall is " << highMonth << " with " << highest << " inches." << endl;
	cout << "The month with the lowest amount of rainfall is " << lowMonth << " with " << lowest << " inches." << endl;    
    return 0;
}
