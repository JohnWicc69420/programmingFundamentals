#include<iostream>
using namespace std;

//Function declaration
void showIntro();
int getCups();
int cupsToOunces(int cups);
void displayResult(int fluidOunces);

//Main Function
main()

{

int cups; //To store number of cups
int fluidOunces;
showIntro(); 

//Printing intro of the store


//Taking the input in number of cups


cups = getCups();

//convert the given cups into fluid ounces

fluidOunces = cupsToOunces(cups);

//Displaying the result in fluid ounces

displayResult(fluidOunces);


}

//Function definition
//This function gives introduction about the grocery store
void showIntro()

{

cout<<"Welcome to Stark's grocery store"<<endl;
cout<<"Please input your order "<<endl;


}

int getCups()
{

int cups;

cout<<"Enter the order in cups:";

cin>>cups; //Taking the order in number of cups

return cups; //returning the number of cups for conversion

}

int cupsToOunces(int cups)
{
return cups*8; //since 1 cup = 8 fluid ounces
}

void displayResult(int fluidOunces)

{

//printing the result in fluid ounces
cout<<"The given order is "<<fluidOunces<<" Fluid ounces";

}
