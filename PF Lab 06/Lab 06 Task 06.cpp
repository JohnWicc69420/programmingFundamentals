// this is a program that displays a * for every 10 points scored by the user

#include <iostream>
using namespace std;
main()
{
	int s1, s2,s3, s4, s5;
	cout<<"What is the score of Ali? \n";
	cin>>s1;
	s1=s1/10;
	
	cout<<"What is the score of Foo? \n";
	cin>>s2;
	s2=s2/10;
	
	cout<<"What is the score of Cal? \n";
	cin>>s3;
	s3=s3/10;
	
	cout<<"What is the score of Dan? \n";
	cin>>s4;
	s4=s4/10;
	
	cout<<"What is the score of Zoo? \n";
	cin>>s5;
	s5=s5/10;
	
	// we take in all the values and then display a * for every 10 points scored using for loops
	// the for loops will keep displaying a * for every 10 scores until the numbers of * is not less than the 10th of score of that specific person
	
	
	cout<<"SCORES\n";
	cout<<"Ali: ";
	for(int a = 0; a<s1; a++)	
	{
	cout<<"*";
    }
    
    cout<<"\n";
    cout<<"Foo: ";
	for(int b = 0; b<s2; b++)	
	{
	cout<<"*";
    }
	
	cout<<"\n";
	cout<<"Cal: ";
	for(int c = 0; c<s3; c++)	
	{
	cout<<"*";
    }
	
	cout<<"\n";
	cout<<"Dan: ";
	for(int d = 0; d<s4; d++)	
	{
	cout<<"*";
    }
	
	cout<<"\n";
	cout<<"Zoo: ";
	for(int e = 0; e<s5; e++)	
	{
	cout<<"*";
    }
	
	
	return 0;
}
