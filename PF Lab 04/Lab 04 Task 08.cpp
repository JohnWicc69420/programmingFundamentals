//This program is used to calculate the total amount
//of money a customer will have to pay at their stay at the hotel



#include <iostream>
using namespace std;
main()
{

int n1,n2,r1,r2,r3;
cout<<"Please select one of the three options: \n";
cout<<"1. Queen's Bed (Rs. 25000) \n";
cout<<"2. King's Bed (Rs. 39000) \n";
cout<<"3. Suite with King's bed and a Pullout Couch. (Rs. 65000) \n";
cin>>n1;
r1=25000;
r2=39000;
r3=65000;

//use the if else statement to help checking if they want the first type of room or the rest


if(n1 != 1 && n1!=2 && n1 != 3)
{
	cout<<"PLease select a valid number";
	r1=0;
	r2=0;
	r3=0;
}


//prompt user to input the data to see wether they want the lake view or don't
//if they don't select any of the two options, the first option is automatically selected

else
cout<<"What would you like? \n";
cout<<"1. Lake View (Extra Rs. 15000)\n";
cout<<"2. Park View \n";
cin>>n2;


//cout the answers
{

if(n2 != 1 && n2 != 2)
{
	n2=1;	
}
}
  if(n1 == 1 && n2 ==1)
  {
    cout<<"The total price would be "<<r1+15000;
  }
  else if(n1 == 2 && n2 ==1)
  {
    cout<<"The total price would be "<<r2+15000;
  }
  else if(n1 == 3 && n2 ==1)
  {
    cout<<"The total price would be "<<r3+15000;
  }
    else if(n1 == 1 && n2 ==2)
  {
    cout<<"The total price would be "<<r1;
  }
  else if(n1 == 2 && n2 ==2)
  {
    cout<<"The total price would be "<<r2;
  }
  else if(n1 == 3 && n2 ==2)
  {
    cout<<"The total price would be "<<r3;
  }
  
 
  }
