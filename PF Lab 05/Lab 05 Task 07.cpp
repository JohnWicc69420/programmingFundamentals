//this program calculates the 
//percentage of occupied rooms 
//we tell the program the number of
//total floors and
//total rooms and
//then the program tells us the 
//occupied no of rooms


#include<iostream>
using namespace std;
main()

//define all the values and set them to
//0  as we have to start calculating from scratch



{
    int rooms = 0;
    float totalRooms = 0.00;
    int totalFloors = 0;
    int occupiedRooms = 0;
    float totalOccupiedRooms = 0.00;
    float percentOccupied = 0.00;


//prompt user to enter the number of floors
//that the hotel possesses


    cout << "Enter the number of floors: ";
    cin >> totalFloors;

//use the while loop so we give program the condition 
//to only run this block of code 
//if the user enters a postitve number
//that is not less than 0

 
    while (totalFloors < 1)
    {
        cout << "Number of floors must be at least 1. Please enter the value again ";
        cin >> totalFloors;
    }

//prompt user to enter the number of rooms as well and 
//use the while loop again so the 
//value or the number of rooms is not 
//less than 10
   
            cout << "Enter the number of rooms on the floor ";
            cin >> rooms;

            while (rooms < 10)
            {
                cout << "Number of rooms on floor must be at least 10. Please enter the value again ";
                cin >> rooms;
            }
//use the formula to calculate the 
//percentage of the occupied rooms to free rooms 


            cout << "How many rooms are occupied? ";
            cin >> occupiedRooms;
            totalRooms += rooms;
            totalOccupiedRooms += occupiedRooms;
                                   
//display the values asked by the user
//subtract the number of occupied rooms from the
//total rooms to get the number of free rooms 
    
    percentOccupied = (totalOccupiedRooms / totalRooms) * 100;

    cout << "The hotel has  " << totalFloors << " floors\n";
    cout << "The hotel has  " << totalRooms << " rooms\n";
    cout << "There are " << totalOccupiedRooms << " rooms occupied\n";
    cout << "There are " << totalRooms - totalOccupiedRooms << " empty rooms\n";
    cout << "Percentage of occupied rooms is " <<percentOccupied;
    return 0;
}
