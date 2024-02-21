//This is a program used to calculate of a lot of things


#include <iostream>
using namespace std;

main()
{
    cout << "Enter two numbers.\n";
    float firstNum ;
    float secondNum ;

    cout << "First number: \n";
       cin >> firstNum;
       cout << "Second number: \n";
       cin >> secondNum;

// first of all we take input from the user of two numbers and calculate all the even numbers that can fit into those two numbers
// we use the while loop so when the value is modulable by 2, we increase the number by 1. Otherwise, we don't display the number

    cout << "\n\n\n\n\nAll even numbers between those two values are as follows.\n";
    int number = firstNum;


    while (number <= secondNum)
    {
        if (number % 2)
            {
			number = number + 1;       
            cout << number++ << "\n";
            }
		else
        {
            number++;
            continue;
        }
    }
    
	
// in the second part, we take the sum of all the even numbers 
// use the while loop again and if the value is not an even number, add a sum (initially equal to 0) to the number and increase it by one.
// then we display it.
	
	cout << "\n\n\n\n\nSum of all even numbers betwee those two values is as follows.\n";
    number = firstNum;
    
    
    int sum = 0;
    while (number <= secondNum)
    {
        if (!(number % 2))
            sum = sum + number++;
        else
        {
            number++;
            continue;
        }
    }
    cout << "Sum: " << sum << "\n\n\n\n\n";



// use the while loop to calculate the square of that number.


    cout << "The square of those numbers is as follows.\n";
    number = 1;
    while (number <= 10)
    {
        cout << "Square of " << number << " is " << number * number << '\n';
        number++;
    }

// in the fourth part, just take the square of the number and then take the sum of all the entered values

    cout << "\n\n\n\n\nSum of the square of the odd numbers \n";
    number = firstNum;
    sum = 0;
    while (number <= secondNum)
    {
        if (number % 2)
        {
            sum = sum + (number * number);
            number++;
        }
        else
        {
            number++;
            continue;
        }
    }
    cout << "Sum: " << sum << "\n\n\n\n\n";




    cout << "All upper case letters.\n";
    int c = 65;


    while (c < 91)
        cout << char(c++) << ", ";
    cout << "\n";
return 0;

}
