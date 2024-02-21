//Task 07
//This program calculates the charges for shipping of items
#include <iostream>
using namespace std;
main()
{
	
//prompt user to input data	
 
 float rate, rate500km, weight, distance;
 cout << "What is the weight? \n";
 cin>> weight;
 
 if (weight < 0)
{
cout<<"Invalid amount \n";
} 

//invalid amount means that the value is 
//less than 0 which is 
//not valid

if (weight > 20)
{
cout<<"Unacceptable. Please enter an amount between 0 and 20 \n";
}

 
 cout << "What is the distance? \n";
 cin>> distance;
 
 
if (distance < 10)
{
cout<<"Unacceptable. Please enter an amount between 10 and 3000. \n";

return 0;
}

if (distance > 3000)
{
cout<<"Unacceptable. Please enter an amount between 10 and 3000. \n";
}

else

{


//divide distance by 500
//in order to get the 
//rate per 500km 


 rate500km = distance / 500;

//now use if else statements to 
//check the category of rate 
//that these items fall
  
 if (weight <= 2 && weight > 0)
 {
rate = 50 * rate500km;
 }
 
 else if (weight >=2 && weight <= 6)
 {
rate = 100 * rate500km;
 }
 
 else if (weight >=6 && weight <= 10)
 {
rate = 150 * rate500km;
 }
 
 else if (weight >=10 && weight <= 20)
 {
rate = 200 * rate500km;
 }
//cout the rate value for results

  cout<<"The cost would be Rs. "<<rate;
}
}

________________________________________________________________

