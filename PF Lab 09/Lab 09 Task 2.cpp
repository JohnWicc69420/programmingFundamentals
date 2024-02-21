#include <iostream>

using namespace std;

main()
{

    //declare variables needed
   
    int poundsEaten[3][7];
    int highest, lowest, total = 0;
    double average;

    //get input from user
    for(int monkey = 0; monkey < 3; monkey++){
        for(int day = 0; day < 7; day++){
            cout << "Monkey " << monkey + 1;
            cout << ", Day " << day + 1 << ": ";
            cin >> poundsEaten[monkey][day];

            //add it to accumulator
            total += poundsEaten[monkey][day];
        }
        cout << endl;
    }

    //initialize highest and lowest to first
    //monkey, first day
    lowest = highest = poundsEaten[0][0];

    //loop on all monkeys all days and update
    //accordingly
    for(int monkey = 0; monkey < 3; monkey++){
        for(int day = 0; day < 7; day++){
            //update lowest
            if(poundsEaten[monkey][day] < lowest)
                lowest = poundsEaten[monkey][day];

            //update highest
            if(poundsEaten[monkey][day] > highest)
                highest = poundsEaten[monkey][day];
        }
    }


    //calculate average
    average = total/15.0;

    //display final output
    cout << "\nThe daily average is: " << average;
    cout << "\nThe least amount eaten: " << lowest;
    cout << "\nThe highest amount eaten: " << highest;

    //return 0 to mark successful completion of program
    return 0;
 }
