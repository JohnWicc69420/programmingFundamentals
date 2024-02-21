//This program is used to make a diamond shaped structure 


#include <iostream>
using namespace std;

main ()
{
   
    int i, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    
   // we use the for loops to display a space or a *
   // all of it depends upon the fact that if the block of the for loop is true, it will give us a space and will keep doing that until the block of code is not true anymore
   // then, it will display a * and will keep doing it again until the number that we have entered is reached
   
   
    
   for( i=0; i<=rows; i++ )
   {
     for( j=1; j<=rows-i; j++ )
     cout<<" ";
     for ( j=1; j<=2*i-1; j++ )
       cout<<"*";
     cout<<endl;
   }
   
   
   
   
   for ( i=rows-1; i>=1; i-- )
   {
     for ( j=1; j<=rows-i; j++ )
     cout<<" ";
     for( j=1; j<=2*i-1; j++ )
       cout<<"*";
     cout<<endl;;
   }
   
   return 0;
}

