// This program reverses an array

#include <iostream>   
using namespace std;    

main() 
{
// use the for loop to take the size of the array that the user is going to put	
// use the for loop to take the input of all the ten values and no more than that


int s;

cout << "What is the size of the array?\n";
cin >> s;
int arr[s];


for (int i=0 ; i<s ; i++)  

{
cout<<"Enter the value number "<<i+1<<": \n";
cin>>arr[i]; 	
}

// now use the for loop so that the last value of the array (which is also the same number of size of the array) is displayed first and the second last on the second and so on
cout<<"The reverse is: \n";

for (int i=s; i>0 ; i--)
{
	cout<< arr[s-1] <<"\n";
	s--;
	
	
}











}
