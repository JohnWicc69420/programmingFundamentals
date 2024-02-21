//Task 01
//This program sees if the year equals month times day
#include <iostream>
using namespace std;
main()

//prompt user to input data
{
int day, month, year, x;

cout<<"Please enter all the values in numeric form \n";

cout<<"\nEnter the day \n";
cin>>day;

cout<<"Enter the month \n";
cin>>month;

cout<<"Enter the year \n";
cin>>year;

// use this formula to see if the year is equal to month times day
x=month * day;

// if else condition for proper results

if ( x==year ){

cout<<"The date is magic \n";
}
else {

cout<<"The date is not magic \n";
}


}



_______________________________________________________________

//Task 02
//This program calculates the area of 2 rectangles and checks which one of them has a greater area

#include <iostream>
using namespace std;
main()
//prompt user to enter data
{
float rect1, rect2, l1, l2, h1, h2, a1, a2;

cout<<"What is the length of the first rectangle? \n";
cin>>l1;

cout<<"What is the height of the first rectangle? \n";
cin>>h1;

cout<<"What is the length of the second rectangle? \n";
cin>>l2;

cout<<"What is the height of the second rectangle? \n";
cin>>h2;

//formula to calcluate the area of both triangles
a1=l1 * h1;
a2=l2 * h2;

//if else condition to see which one of them has a greater area
if ( a1>a2 ){

cout<<"The area of the first rectangle is greater than the second one. \n";
}
else {

cout<<"The area of the second rectangle is greater than the first one. \n";
}


}


________________________________________________________________
