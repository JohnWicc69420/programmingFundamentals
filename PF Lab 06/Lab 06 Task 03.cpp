// this program displays the in between numbers of two entered values


#include <iostream>  
using namespace std;    

main() 
{
int num1, num2;
cout<<"Enter the first number: ";
cin>>num1;

cout<<"Enter the second number: ";
cin>>num2;

// use the for loop so the given number keeps on increasing by one until the second number is reached
// use two loops for two cases
// case 1: if the first number is greater than the second one
for  (num1; num1>num2; num2)
{
	cout<<++num2<<"   ";
	
	
}

// case 2: if the first number is smaller than the second one
for  (num2; num1<num2; num1)
{
	cout<<num1++<<"   ";
	
	
}

}
