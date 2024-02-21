//This program arranges three of the inputted numbers
//into an ascending order


#include <iostream>
using namespace std;
main()
{

int n1,n2,n3;
cout<<"Enter the first number ";
cin>>n1;
cout<<"Enter the second number ";
cin>>n2;
cout<<"Enter the third number ";
cin>>n3;

  if(n1 > n2 && n2 > n3)             //use the if else statements to see if one of them is greater than both of the other two 
                                     //and repeat the step for all of the rest ones
  {
    cout<< n1 <<" "<<n2<<" "<<n3;
  }
  else if(n2 > n1 && n1 > n3)
  {
    cout<<n2<<" "<<n1<<" "<<n3;
  }
  else if(n3 > n2 && n2 > n1)
  {
    cout<<n3<<" "<<n2<<" "<<n1;
  }
  else
  {
    cout<<n1<<" "<<n3<<" "<<n2;
  }
  }
