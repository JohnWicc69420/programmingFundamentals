#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (int argc, char *argv[])
{
       int lottery[5], user[5], matchcount = 0;
       bool allmatch = true, nomatch = true;
       
	        
	// use srand and time(0) so the generated numbers are totally random and do not follow any algorithm that can be easily predicted		
srand (time(0));
  // now we use %10 so we get a remainder of maximum of 9 and minimum of 0
lottery[0] = rand() % 10;
lottery[1] = rand() % 10;
lottery[2] = rand() % 10;
lottery[3] = rand() % 10;
lottery[4] = rand() % 10;
 
 
 
 // we use the for loops now to get the five values from the user
  for(int i = 0; i < 5; i++)
  {
    cout <<"Enter the numbers: ";
    cin>>user[i];
    
	// use the while loop to display an error in case of a negative value
	while (user[i]<0 || user[i]>9)
    {
    cout << "Please enter a valid number between 0 and 0: ";
    cin >> user[i];
    }
    
    // diplay the 5 values of the lottery
  }
  cout<<"\nLottery :       ";
  for(int i = 0; i < 5; i++)
  {
         cout<<lottery[i];
         cout<<"|";
  }
  
  
  
  // we use the for loop to get 5 values from the user
cout<<"\nUser :          ";
  for(int i = 0; i < 5; i++)
  {
         cout<<user[i];
         cout<<"|";
  }
 
 
 // now again we use the for loops to see if the first value of the user matches the one of the lottery (the random number) or not
 // if it does, we just make the values true and say that the values actually matched otherwise not
  for(int i = 0; i < 5; i++)
  {
         if(user[i] == lottery[i])
         {
               matchcount++;
               nomatch = false;
         }
     
         if(user[i] != lottery[i])
         {
               allmatch = false;
         }
  }
  
// use the if statements to see if the some or all of the other values match and 
// display the ones that actually match
// otherwise, it says that the user wasn't able able to get atleast one of them right  
      if(nomatch == true)
         {
              cout<<"\n\n\nSorry! None of the values matched."<<endl;
         }
 
         if(allmatch == true)
         {
              cout<<"\n\n\nCongratulation! You Won a Grand Prize"<<endl;
         }
         
// if the user failed to get any of them right, the program just displays the message saying that user had no matched values
    if(matchcount != 0)
       cout<<"\n\n"<<matchcount<<" Match"<<endl;
       return 0;
       
}
