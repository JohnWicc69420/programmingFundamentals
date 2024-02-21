#include <iostream>
using namespace std;
main()

{
	
	
	
	// declare all the string values
	string names[] = { "Khizar", "Abdul Rehman", "Ali Talha", "Amina"};
    string phoneNumbers[] = {"0333-8000258", "0303-3023302", "0321-420048", "0900-78601"};
    
    string targetName, targetPhone;
	
	cout<<"What is the name of the person that you are looking for?\n";
	cin>>targetName;
    
	
		// use the if statements and match the name with their phone number and if it matches, output the answer
     if (targetName == "Khizar")
	{
		cout<<"The phone number of Khizar is: "phoneNumbers[0];
		
	}
	
     if (targetName == "Abdul Rehman")
	{
		cout<<"The phone number of Amina is: "phoneNumbers[1];
		
	}
	
     if (targetName == "Ali Talha")
	{
		cout<<"The phone number of Amina is: "phoneNumbers[2];
		
	}
	
	  if (targetName == "Amina")
	{
		cout<<"The phone number of Amina is: "phoneNumbers[3];
		
	}
	
}
