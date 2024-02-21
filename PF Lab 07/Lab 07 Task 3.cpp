#include <iostream>   
using namespace std;    

main() 
{
	
// use the for loop to take the input of all the ten values and no more than that


int values[10], temp;
for (int i=0 ; i<10 ; i++)  

{
cout<<"Enter the value number "<<i+1<<": \n";
cin>>values[i]; 	
}


// now use the for loop so all the values entered by the user get incremnted by one so all the numbers are swapped by their next ones
for (int i=0; i<10; i++) 
{
temp=values[i];
values[i]=values[i+1];
values[i+1]=temp;
}

// use the for loop again so all the values are displayed 
 for (int i=0; i<10 ; i++)
{
 	 
 	cout<< values [i]<<" ";
 	
}
 
 
 
 
 
 
}
