//This program calculates the total amount of pay that an 
//employee receives from its hourly paid job 


#include <iostream>
using namespace std;
main()
{

float tp,rd,op,r,rp,ans,s,s1=17,s2=18.5,s3=22,h,h1;

cout<<"How many hours have you worked? \n";
cin>>h;
if(h>40)

{
	h1=h-40;
}


//ask the user to enter the shift they work in as the salaries are
//hourly rate depends on the shift they are currently working in

cout<<"What is your shift\n";
cout<<"1. First shift \n";
cout<<"2. Second shift \n";
cout<<"3. Third shift \n";
cin>>s;

if(s==1)
{
 r=s1;
}

else if(s==2)
{
 r=s2;
}

else if(s==3)
{
 r=s3;
}

//enter the formulas that are used to calculates the rates

rp=r*h;
op=h1*(r/2);
tp=rp + op;


if(s==2 || s==3)
{
	
	cout<<"\nWould you like to activate the retirement plan? \n";
	cout<<"Please select one of the two options";
	cout<<"\n1. Yes! ";
	cout<<"\n2. No! \n";
    cin>>ans;
	
	if(ans==1)
	{
	rd=tp*0.03;
	tp=tp*0.97;
	
	
	}   
	
    
}

//cout for all the answers
cout<<"\nThe total hours worked are "<<h;
cout<<"\nYour shift is "<<s;
cout<<"\nYour hourly pay rate is "<<r;
cout<<"\nYour regular pay is "<<rp;
cout<<"\nYour overtime pay is "<<op;
cout<<"\nThe total of regular and overtime pay is "<<tp;
cout<<"\nYour retirement deduction is "<<rd;
cout<<"\nThe net pay is "<<tp;


 
}
