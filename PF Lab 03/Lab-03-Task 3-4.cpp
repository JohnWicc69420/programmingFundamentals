//Task 03

//This program calculates BMI of a person
#include <iostream>
using namespace std;
main()

{
	// prompt user to input data
float BMI, w, h;

cout<<"What is your weight? \n";
cin>>w;

cout<<"What is your height? \n";
cin>>h;

//input formula to calculate BMI
BMI =(w * 703) / (h*h);




// use if else condition for the results
if (BMI<18.5)
{
cout<<"You are under weighted \n";
}
else if(BMI>25)
cout<<"You are over weighted \n";

else cout<<"Your weight is optimal. \n";
}


_______________________________________________________________

//Task 04
// This program is used to see wether the object is heavy or light
#include <iostream>
using namespace std;
main()


//prompt user to input data
{
float w, m;
cout<<"What is the mass? \n";
cin>>m;

// use if greater and if less than condition for results
if ((m*9.8) < 1000)
{
cout<<"The object is too light. \n";
}

else if((m*9.8) > 1000)
{
cout<<"The object is too heavy. \n";
}

}

_______________________________________________________________


