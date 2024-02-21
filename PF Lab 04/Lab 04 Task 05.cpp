//This program calculates the speed of five racers and
//takes the average of those five racers 
//and the speed of an individual racer is greater than the
//average of the five racers then the
//racer is declared to be qualified


#include <iostream>
using namespace std;
main()
{


//prompt user to input data

int r1,r2,r3,r4,r5,s1,s2,s3,s4,s5,avg;
cout<<"What was the speed of the first racer? ";
cin>>s1;
cout<<"What was the speed of the second racer? ";
cin>>s2;
cout<<"What was the speed of the third racer? ";
cin>>s3;
cout<<"What was the speed of the fourth racer? ";
cin>>s4;
cout<<"What was the speed of the fifth racer? ";
cin>>s5;
avg=(s1+s2+s3+s4+s5)/5;                          // take the average of those five racers
if (s1>avg)
cout<<"The first racer qualifies and his speed was "<<s1<<endl;
if (s2>avg)
cout<<"The second racer qualifies and his speed was "<<s<<endl;
if (s3>avg)
cout<<"The third racer qualifies and his speed was "<<s3<<endl;
if (s4>avg)
cout<<"The fourth racer qualifies and his speed was "<<s4<<endl;s
if (s5>avg)
cout<<"The fifth racer qualifies and his speed was "<<s5<<endl;




}
