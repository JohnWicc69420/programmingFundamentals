#include <iostream>
using namespace std;

main()
{
    //declare the variables that we want to display at the end
    
	int numbers[10];
    int lowest, highest;

    //prompt the user the enter the 10 numbers and create a loop for that so the number does not exceed 10
    
	for(int i = 0; i < 10; i++)
	{
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    // declare that the lowest and the highest can be anyone of the entered numbers 
    lowest = numbers[0];
    highest = numbers[0];

    // use the for loop for all elements and keep 
	// updating lowest
    // and highest accordingly
    
    for(int i = 0; i < 10; i++){
        //update lowest
        if(numbers[i] < lowest)
            lowest = numbers[i];

        //update highest
        if(numbers[i] > highest)
            highest = numbers[i];
    }

    // display the highest and the lowest numbers 
    
    cout << "\nThe lowest number entered is: " << lowest;
    cout << "\nThe highest number entered is: " << highest;

    // return 0 for successful termination of program
    return 0;
 
 }  
