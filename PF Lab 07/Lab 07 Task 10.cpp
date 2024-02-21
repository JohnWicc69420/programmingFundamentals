//bubble sort for ascending
#include <iostream>
using namespace std;

main()
{
    
    
    // declare variables
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	bool swap = true;
	
	// use the while loop so if the swap is true i.e if the first value is greater than the value next to it, it swaps the position so the next (smaller) value comes first and keeps on doing it until all the values are 
	// swapped 
	// and our data is in ascending form
	 
    while (swap)
    {
    	
    	
    	swap = false;
    	
		for (int i=0 ; i<9 ; i++)
    	if (A[i] > A[i+1])
		{
    	
        temp   = A[i];
    	A[i]   = A[i+1];	
    	A[i+1] = temp;	
    	swap = true;	
		}
    }

    
	// display the results
	for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}

______________________________________________



// insertion sort for descending

#include <iostream>
using namespace std;

main()
{
    
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	
	
	// we use the do while loop in this case so when the value that comes first is smaller than the next one, it swaps the places to arrange data in the descending order
    do
    {
    	
    	
		for (int i=0 ; i<10 ; i++)
    	{
    		
    	   temp   = A[i+1];
		   if (A[i+1] < A[i])
    	
             {
	
    	        A[i+1]   = A[i];	
    	        A[i] = temp;		
		     
			}
		}
    }
    while ( A[0] > A[1]);
    
    for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}


______________________________________________



// Selection sort for descending
#include <iostream>
using namespace std;

main()
{
    
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	
	for (int i=0 ; i<10 ; i++)
    {
			
	    for	( int j=0 ; j<10; j++)
        if (A[i] > A[j])
		{
	   	
        temp   = A[i];
    	A[i]   = A[j];	
    	A[j] = temp;	
		}
    }

    for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}


_______________________________________________
