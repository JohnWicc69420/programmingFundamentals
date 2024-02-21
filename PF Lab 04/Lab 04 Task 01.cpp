// This program lets users to get any help fom the system
// The user first has to select an option first
// so we know the type of help they want
 



#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"Please choose one of the following options: \n";
	cout<<"Help on:"<<endl<<"1. If"<<endl<<"2. If-then else"<<endl<<"3. If and else if"<<endl<<"4. Nested If statements"<<endl;
	
	//prompt user to input data
	//cout the statements using if else statements 
	//to provide them with the help they want
	
	
	cin>>n;
	if(n==1)
	{
	cout<<"To use the if statement, you have to type 'if' and then enter the condition in braces right next to it."<<endl<<"e.g if(condition)"<<endl<<"{ then statement }";
	}
	
	
	else if(n==2)
    { 
    cout<<"To use the if-then-else statement, you have to type 'if' and then enter the condition in braces right next to it."<<endl<<"After that, type your then statement in the curly braces starting from the next line"<<endl<<"and then if you want to type the else statement, type it after the curly braces right after the first curly braces."<<endl<<"e.g if(condition)"<<endl<<"{ then statement }"<<endl<<"else"<<endl<<"{ then statement }";
	}
	
	
	else if(n==3)
	{
	cout<<"To use the if and else if statement, you have to type 'if' and then enter the condition in braces right next to it and then write the then statement in the next line in curly braces."<<endl<<"Type else in the next line and treat it just the way you treated your if statement."<<endl<<"if(condition)"<<endl<<"{ then statement }"<<endl<<"else if(condition)"<<endl<<"{ then statement }";	
	}
	
	
	else if(n==4)
    {
    cout<<"To use the nested if statements, type your statements in this manner"<<endl<<"if (C1,R1,if(C2,R2,if(C3,R3,if(C4,R4))))"<<endl<<"where C=Condition and R=Result";	
	}
  
    else
    {
    cout<<"Please select a number between 1 and 4";	
	}


}
