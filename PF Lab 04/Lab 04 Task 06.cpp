//This program checks wether the entered integer is even or odd

#include <iostream>
using namespace std;
main()
{

int n,ans;
cout<<"What is the number? ";
cin>>n;
ans=n%2;


//Take the module of that integer and if it returns a value of 1
//then the number is said to be an odd number 
//otherwise the number is said to be even

if (ans==1)
{
	cout<<"The number is odd";
}
//use the if else statement to see wether the module is zero or odd
//and see wether the answer is an odd or an even number

else
{
	cout<<"The number is even";
}

}
