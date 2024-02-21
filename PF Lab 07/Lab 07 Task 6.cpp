// This program an array merges two arrays and puts them in an ascending order in the third array

#include <iostream>   
using namespace std;    

main() 
{
// use the for loop to take the size of the array that the user is going to put	
// use the for loop to take the input of all the ten values and no more than that


int s1, s2, s3;

cout << "What is the size of the first array?\n";
cin >> s1;
int arr1[s1];

for (int i=0 ; i<s1 ; i++)  

{
cout<<"Enter the value number "<<i+1<<": \n";
cin>>arr1[i]; 	
}


cout << "\n\nWhat is the size of the second array?\n";
cin >> s2;
int arr2[s2];

for (int i=0 ; i<s2 ; i++)  

{
cout<<"Enter the value number "<<i+1<<": \n";
cin>>arr2[i]; 	
}
int arr3[s3];


// we need to declare the size of the third array because we want to keep our for loop working until all the values of the third (mergrd) arrays are checked for their size
s3 = s1+s2-2;

// now the first for loop checks the first value of the 3rd loop and compared it to all the other values using the second loop
// and if it comes out to be the smallest, it's written. Otherwise, it is ignored
// the same thing happens for all the other values

cout<<"\n\n\n";
for (int i=0; i<s3 ; i++)
{
	for (int j = 0; j<s1-1 ;j++)
	{
	   if( arr1[i] <= arr1[j] && arr2[j] )
 	   {
		cout << arr1[i]<<"\n";
       }
       
       if( arr2[i] <= arr1[j] && arr2[j] )
 	   {
		cout << arr1[i]<<"\n";
       }
	
	
	}
	
	
	
}

}
