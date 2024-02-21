//This program calculates the position 
//using the formula

#include <iostream>
using namespace std;
main()
{
//prompt user to input data
float x,a=-9.81,t=10,vi=0,xi=0,position;


  x= 0.5 *( a*(t*t)+ vi*t + xi );
	
cout<<"The position is "<<x<<" m.";	
}
