// This program displays even numbers of an array

#include <iostream>   
using namespace std;    

main() 
{
// use the for loop to take the size of the array that the user is going to put	
// use the for loop to take the input of all the ten values and no more than that


int s, e;

cout << "What is the size of the array?\n";
cin >> s;
int arr[s];


for (int i=0 ; i<s ; i++)  

{
cout<<"Enter the value number "<<i+1<<": \n";
cin>>arr[i]; 	
}


// now we want to know how which of the entered values are actually even
// in order to do that, we will use a for loop so we can check every value to see whether it is an even number or not
// for that purpose, we will use the if condition and display the even values and the rest will just be ignored

cout<<"\nThe even numbers are: \n";
for (int i=0; i<s ; i++)
{	
	if	(arr[i] % 2-1)
	{
		cout<<arr[i] << endl;  	
	}}}
