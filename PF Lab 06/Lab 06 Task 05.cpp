// this programis used to display the results of five players in the form of a bar graph

#include <iostream>
using namespace std;
main()
{
	
	
	// we take in the score of all the five players and then we display a * for every score that player has made and thus we end up creating a bar graph
	// the for loops will keep displaying a * for every score until the numbers of * is not less than the number of scores of that specific person
	
	
	int s1, s2,s3, s4, s5;
	cout<<"What is the score of Ali? \n";
	cin>>s1;
	
	cout<<"What is the score of Foo? \n";
	cin>>s2;
	
	cout<<"What is the score of Cal? \n";
	cin>>s3;
	
	cout<<"What is the score of Dan? \n";
	cin>>s4;
	
	cout<<"What is the score of Zoo? \n";
	cin>>s5;
	
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
