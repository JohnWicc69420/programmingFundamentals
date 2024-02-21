//Task 09
//This program calculates the 
//amount of money payed to 
//3 salesmen 
//they get 9% of profit from their gross sales 
//and 200$ per week as well

#include<iostream>
using namespace std;
main()

//promt user to enter the values
//and use formulas to calculate
//the profits for each of the
//3 salesmen
{
float profit1, profit2, profit3, pay, grosssales1, grosssales2, grosssales3;
double min, max; 

pay = 200;

cout<< "Enter the amount of gross sales for the first person: \n";
cin>> grosssales1;
profit1 = grosssales1 * 0.09;  
 
if (grosssales1<0)
cout<< "The number can not be a negative value. Please enter a valid number. \n";


//print message in case of a negative number
//multiply by 0.9 to get their 9% profit value

cout<< "Enter the amount of gross sales for the  second person: \n";
cin>> grosssales2;
profit2 = grosssales2 * 0.09;  
 
if (grosssales2<0)
cout<< "The number can not be a negative value. Please enter a valid number. \n";




cout<< "Enter the amount of gross sales for the third person: \n";
cin>> grosssales3;
profit3 = grosssales3 * 0.09;  
 
if (grosssales3<0)
cout<< "The number can not be a negative value. Please enter a valid number. \n";




else if (grosssales1, grosssales2, grosssales3 > 0)
{
cout<<"\nThe 9% of the gross sales plus the weekly pay for the first person is: "<<profit1 + pay;
cout<<"\nThe 9% of the gross sales plus the weekly pay for the second person is: "<<profit2 + pay;
cout<<"\nThe 9% of the gross sales plus the weekly pay for the third person is: "<<profit3 + pay;

//cout the summary
 
cout<<"\nSUMMARY: \n";

cout<<"The average sales were: "<<(grosssales1 + grosssales2 + grosssales3)/3;
}

// use the if else condition
// to make sure that
// the lowest profit is called as a minimum value
// and the highest profit value is called as 
// the max value using
// if somthing is less than the other two
// then it is definitely the minimum value
// and vice versa

     {
		if (profit1 < (profit2 || profit3 ))
        min =grosssales1;

        else if (profit2 < (profit1 || profit3 ))
        min = grosssales2;

        else if (profit3 < (profit1 || profit2 ))
        min = grosssales3;

cout<<"\nThe minimum sales were: "<<min;
}

     {
		if (profit1 > (profit2 || profit3 ))
        max = grosssales1;

        else if (profit2 > (profit1 || profit3 ))
        max = grosssales2;

        else if (profit3 > (profit1 || profit2 ))
        max = grosssales3;

cout<<"\nThe maximum sales were: "<<max;
}



}
  
___________________________________________________________
