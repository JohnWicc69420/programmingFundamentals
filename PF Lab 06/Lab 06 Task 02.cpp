//This program makes a T pattern


#include <iostream>   
using namespace std;    

main() 
{
  // we use the for loop which
  // checks the conditions and then displays a space or if the second for loop is true,
  // it displays a T and so on until the whole pattern is ready
  
  for (int x=1; x<=7 ; x++)
  {
  	for ( int y = 6; y >= x; y--)
  	{
	cout<<" ";
    }
  	
  	for (int z=1; (z <= 2*x - 1) ; z++)
  	{
	cout<<"T";
    }
    cout<<"\n";
    }
}
