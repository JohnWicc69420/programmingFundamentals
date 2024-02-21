//Task 08
//This program calculates the number of calories in food
//and checks if the food is high in calories
//or low in calories


#include<iostream>
using namespace std;
main()
{
    //declare variables 
    
	float calories, fat;

    
	//prompt user to input data
    cout << "Enter the number of calories: \n";
    cin >> calories;
    cout << "Enter the number of grams of fat: \n";
    cin >> fat;

    
	//make sure the input shouldn't be a negative value
    if(calories < 0 && fat < 0)
	{
    cout<<"The number should be a positive value \n";
    }
    
	//the number of fats should not exceed the total calories
    
	if   ((( fat * 9 ) / calories ) < 0.3 )
    {
	cout << "This food is low in fat! \n ";
    }
    
	else if   ((( fat * 9 ) / calories ) > 0.3 )
    {
	cout << (( fat *9 ) / calories ) * 100 << " % of calories come from fat. \n";
    }
    
    else
	{
    
	//print error message if the number of fat calories is more than the total calories
    
	cout << "Either the calories or fat grams were inserted incorrectly!\n";
    }
    }


_______________________________________________________________


