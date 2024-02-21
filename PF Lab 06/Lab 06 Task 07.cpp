// this is a quiz that asks 5 questions

#include<iostream>
using namespace std;
main()

{
	int a1, a2, a3, a4, a5;
	double correct=0, incorrect=0;
	
	// all of the question have almost no difference regarding coding
	// if the answer is right, use the if statement to increase the correct number by 1 or otherwise increase the incorrect one by 1.  
	// at the end, we use the cout statement to display the correct number of answers as well as the incorrect number of answers
	// and we also display the percentage of correct to the total number of questions
	
	
	
	//01
	
	cout<<"What is 5 times 5? \n";
	cout<<"1. 10 \n";
	cout<<"2. 15 \n";
	cout<<"3. 20 \n";
	cout<<"4. 25 \n";
	cin>>a1;
	if (a1 == 4) 
	{
	cout<<"Congratulations! You got it right!";
	correct++;
	}
	
	else if (a1 != 4) 
	{
	cout<<"You chose the wrong answer. The correct answer was option 4.";
	incorrect++;
	}
	
	
	
	
	//02
	
	cout<<"\n\n\nWhat is 5 divided by 5? \n";
	cout<<"1. 1 \n";
	cout<<"2. 2 \n";
	cout<<"3. 3 \n";
	cout<<"4. 4 \n";
	cin>>a2;
	if (a2 == 1) 
	{
	cout<<"Congratulations! You got it right!";
	correct++;
	}
	
	else if (a2 != 1) 
	{
	cout<<"You chose the wrong answer. The correct answer was option 1.";
	incorrect++;
	}
	
	
	
	
	//03
	
	cout<<"\n\n\nWhat is 68 plus 44? \n";
	cout<<"1. 122 \n";
	cout<<"2. 132 \n";
	cout<<"3. 112 \n";
	cout<<"4. 102 \n";
	cin>>a3;
	if (a3 == 3) 
	{
	cout<<"Congratulations! You got it right!";
	correct++;
	}
	
	else if (a3 != 3) 
	{
	cout<<"You chose the wrong answer. The correct answer was option 3.";
	incorrect++;
	}
	
	
	
	
	//04
	
	cout<<"\n\n\nWhat is 23 multiplied by 27? \n";
	cout<<"1. 611 \n";
	cout<<"2. 616 \n";
	cout<<"3. 621 \n";
	cout<<"4. 626 \n";
	cin>>a4;
	if (a4 == 3) 
	{
	cout<<"Congratulations! You got it right!";
	correct++;
	}
	
	else if (a4 != 3) 
	{
	cout<<"You chose the wrong answer. The correct answer was option 3.";
	incorrect++;
	}
	
	
	
	
	
	//05
	
	cout<<"\n\n\nWhat is 1742 + 2712? \n";
	cout<<"1. 4354 \n";
	cout<<"2. 4454 \n";
	cout<<"3. 4554 \n";
	cout<<"4. 4654 \n";
	cin>>a5;
	if (a5 == 2) 
	{
	cout<<"Congratulations! You got it right!";
	correct++;
	}
	
	else if (a5 != 2) 
	{
	cout<<"You chose the wrong answer. The correct answer was option 2.";
	incorrect++;
	}
	
	
	
	cout<< "\n\n\nYou got "<<correct<<" answers right and "<<incorrect<<" answers wrong.";
	cout<< "The percentage of correct answers is "<<(correct/5)*100<<"%";
	
	
	return 0;

}
