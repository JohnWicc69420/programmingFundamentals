//Task 01

If user enters        Value of variable value3 displayed

2	                           6
5	                           27
4.3	                           20.49
6                                  38   

//In this program, we raised the power of the inserted value by 2.0 and then multiplied it by 2. Then we divided the value by 2 and then respectively substacted and added 1 and 3.    
_____________________________________

//Task 02

#include <iostream>
using namespace std;
main()

{
	double max,used,avail;
	cout<<"What is your maximum amount of credit? ";
	cin>>max;
	cout<<"How much credit have you used? ";
	cin>>used;
	avail=max-used;
	cout<<"Your remaining credit is "<<avail;
}
 

_____________________________________

//Task 03

#include <iostream>
using namespace std;
main()

{
	double s1, s2, s3, t, avg;
	cout<<"Please enter your 1st golf score ";
	cin>>s1;
	cout<<"Please enter your 2nd golf score ";
	cin>>s2;
	cout<<"Please enter your 3rd golf score ";
	cin>>s3;
	
	t=s1+s2+s3;
	avg=t/3;
	cout<<"Your average score is "<<avg;
}
 
	

______________________________________

//Task 04

#include <iostream>
using namespace std;
main()

{
	short test = 32767;
	cout<<"The value of the variable is "<<test<<endl;
	cout<<"Enter the value that you want to add to the variable  ";
	int x, z;
    cin>>x;
	int y=test + x;
	cout<<y;
	cout<<"\nEnter the value that you want to subtract from the variable  ";
	cin>>z;
	int a=test - z;
	cout<<a;
}
 
//Observation: The program worked fine and no errors were generated. Although when I tried to add a very big value, the result was a negative value instead of a positive one.

_____________________________________

//Task 05

#include <iostream>
#include <cmath>
using namespace std;
main()

{
	
	int x, angle1, angle2;
	cout<<"Write the value of the 1st angle ";
	cin>>angle1;
	cout<<"\nWrite the value of the 2nd angle ";
	cin>>angle2;
	
	x = sin(angle1) + cos(angle2);
	cout<<"The sum of sine of angle 1 and cosine of angle 2 is "<<x;
}
 
_____________________________________

//Task 06

#include <iostream>
#include <cmath>
using namespace std;
main()

{
	
	float angle;
	float a;
	cout<<"Write the value of the angle ";
	cin>>a;
	float y;
	y = (1 / sin(a));
	cout<<"The cosec of angle (a) is "<<y;
}

______________________________________

//Task 07

#include <iostream>
using namespace std;
main()
{
	
	int x, N500 ,N100, N50, N20, N10, C5, C2, C1;
	cin>>x;
	
	cout<<"\nN = Note and C = Coin "<<endl;
	N500=x/500;
	x=x%500;
	N100=x/100;
	x=x%100;
	N50=x/50;
	x=x%50;
	N20=x/20;
	x=x%20;
	N10=x/10;
	x=x%10;
	C5=x/5;
	x=x%5;
	C2=x/2;
	x=x%2;
	C1=x/1;
	x=x%1;
    cout<<"\nN500: "<<N500<<endl<<"N100: "<<N100<<endl<<"N50: "<<N50<<endl<<"N20: "<<N20<<endl<<"N10: "<<N10<<endl<<"C5: "<<C5<<endl<<"C2: "<<C2<<endl<<"C1: "<<C1<<endl;
	


}


_________________________________________

//Task 08

#include <iostream>
using namespace std;
main()
{
	
	int x, cA, cB, cC, A, B, C, T;
	cout<<"Please enter the total amount of Class A tickets sold: \n";
	cin>>cA;
	cout<<"Please enter the total amount of Class B tickets sold: \n";
	cin>>cB;
	cout<<"Please enter the total amount of Class C tickets sold: \n";
	cin>>cC;
	A=cA * 2000;
	B=cB * 1000;
	C=cC * 500;
	T=A+B+C;
    if (T>=1000000)
    cout<<"Congrats! You've made quite a big fortune.\n";
	cout<<"The total revenue generated from tickets is Rs. "<<T<<" only.";

}

___________________________________________

//Task 09

#include <iostream>
#include <string>
using namespace std;
main()

{
	double a1, a2, a3, t, avg;
	string r1, r2, r3;  
	cout<<"This program calculates the average amount of rain for 3 months.\n";
	cout<<"Please enter the name of the 1st month: ";
	cin>>r1;
	cout<<"Please enter the amount of rain that fell in "<<r1<<":"<<endl;
	cin>>a1;
	cout<<"Please enter the name of the 2nd month: \n";
	cin>>r2;
	cout<<"Please enter the amount of rain that fell in "<<r2<<":"<<endl;
	cin>>a2;
	cout<<"Please enter the name of the 3rd month: \n";
	cin>>r3;
	cout<<"Please enter the amount of rain that fell in "<<r3<<":"<<endl;
	cin>>a3;
	

	
	t=a1+a2+a3;
	avg=t/3;
	cout<<"The average rain for "<<r1<<", "<<r2<<" and "<<r3<<" is "<<avg<<" millimeter. ";
}


___________________________________________

//Task 10

#include <iostream>
#include <string>   
using namespace std;

main()

{
    
    string movieName;
    int adults, adults60, child;
    double gp, np, dis;

    cout<<"Enter the name of the movie: ";
    cin>>movieName;  

    cout <<"\nEnter the number of the adult tickets sold: ";
    cin>>adults;
    
    cout <<"\nEnter the number of the adult (above 60) tickets sold: ";
    cin>>adults60;

    cout<<"\nEnter the number of the children tickets sold: ";
    cin>>child;


    gp = adults * 500 + adults60 * 450 + child * 250 ;

    np = gp * 0.2 ;

    dis = gp - np;

    cout<<"\nMovie Name:                         " <<movieName<<endl;
    cout<<"Adult Tickets Sold:                 " << adults<<endl;
    cout<<"Child Tickets Sold:                 " << child<<endl;
    cout<<"Adults Above 60 Tickets Sold:       " << adults60<<endl;
    cout<<"Gross Box Office Profit:            Rs." << gp << endl;
    cout<<"Net Box Office Profit:              Rs." << np << endl;
    cout<<"Amount Paid to Distributor:         Rs." << dis << endl;
}


___________________________________________

//Task 11

#include <iostream>   
using namespace std;

main()

{
    
    int n, n1;
    cout<<"How many cookies did you eat? ";
    cin>>n;  
    n1 = n * 75; 

    cout<<"You consumed "<< n1<< " calories.";
}

___________________________________________

//Task 12

#include <iostream>
using namespace std;

main()
{

    float  a_value = 0.60;
    double property_value;
    double tax_rate;
    double property_tax;
    double quarterly_tax;

    cout<<"What is the actual value of the property? ";
    cin >> property_value;
    cout<<"What is the current tax rate? ";
    cin >> tax_rate;

    property_tax = (((property_value * 0.6)-5000)/100) * tax_rate;
                                                                                                                                                                                                                                                                                                                                                                                                                             
    quarterly_tax= property_tax / 4;

    cout << "Annual property tax would be: "<<property_tax<<"$";

    cout << "\nThe quarterly tax for this property would be: "<<quarterly_tax<<"$";
   
}

____________________________________________

//Task 13

#include <iostream>
#include <cmath>  
using namespace std;

main()
{
    double amount, principal, rate, times;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter interest rate: ";
    cin >> rate;

    cout << "How many times was the interest compounded? ";
    cin >> times;
    
    amount = principal * pow((1 + rate/times), times);

    cout << "Interest Rate:       "<<rate<<"%"<<endl;
    cout << "Times compounded:    "<<times<<endl;
    cout << "Principal:           Rs. " <<principal<< endl;
    cout << "Interest:            Rs. " <<amount - principal << endl;
    cout << "Amount in Savings:   Rs. " <<amount<<endl;

}

____________________________________________

//Task 14

#include <iostream>
#include <cmath>
using namespace std;
main() 
{
	
	double loan,rate;    
	int    np; // np = number of payments
	
	double mP; // mp = monthly payments
	
	
	cout << "Enter the loan amount: ";
	cin >> loan;
	cout << "Enter the monthly interest rate : ";
	cin >> rate;
	cout << "Enter the number of payments: ";
	cin >> np;
	

	mp = (rate * pow(1+rate, np)) / (pow(1+rate, np) - 1) * loan;
	

	cout << "Loan Amount:               Rs. "<<loan<<endl;
	cout << "Monthly Interest Rate:     "<<rate<<" %" <<endl;
	cout << "Number of Payments:        "<<np<<endl;
	cout << "Monthly Payment:           Rs. "<<mp<<endl;
	cout << "Amount Paid Back:          Rs. "<<(mp * np)<<endl;
	cout << "Interest Paid:             Rs. "<<( mp * np ) - loan<<endl;

}

_____________________________________________

//Task 15

#include<iostream>
using namespace std;
main()
{
double d, r, a;
// d= diameter, r= radius, a= area
int slices;
double const PI = 3.14159265;
cout << "Enter the diameter of the pizza (in inches): ";
cin >> d;
r = d/2;
a = PI * r * r;
slices = a / 14.125;
cout << "You can have: " << slices << " number of slices "<<endl;

}

______________________________________________

//Task 16

#include<iostream>
using namespace std;
main()
{
double d, r, a;
// d= diameter, r= radius, a= area
int slices, people, pizzas, nslices;
double const PI = 3.14159265;
cout << "How many people are coming to the party? ";
cin >> people;
cout << "What pizza size would you like (in inches)? ";
cin >> d;
r = d/2;
a = PI * r * r;
slices = a / 14.125;
nslices= people * 4;
pizzas = nslices/slices;         
cout << "You should purchase " << pizzas << " pizzas for the party. "<<endl;


}

______________________________________________

//Task 17

#include <iostream>
using namespace std;
main()
{
  double sharei = 32.87, shareo = 33.92;
  
  //sharei/shareo = share in/out

  float cpb, cps, amountb, amounts, profit;
  //cpb/cps = commission paid when bought/sold
  //amounts/amountb = total amount of maney for shares sold/bought.


    
    amountb = 1000 * sharei;

    cpb =  (amountb/100) * 2;

    amounts = 1000 * shareo;

    cps = (amounts/100) * 2;

    profit = (amounts - (cpb + cps)) - amountb;

    cout << "Amount paid for the stock: "<< amountb << endl;

    cout << "Amount of commission paid for stock purchase: "<< cpb << endl;

    cout << "Amount for which the stock was sold: "<< amounts << endl;

    cout << "Amount commission paid when stock sold: "<< cps << endl;

    cout << "Kathryn's loss is "<<profit;
}


______________________________________________

//Task 18
//This program calculates the bill of a person who wants to buy stuff from a restaurant.
//This way, the customer will get to know how much he or she is going to spend. 

#include <iostream>
using namespace std;
main()

{

int burgers, burgerp, pizzas, pizzap, softdrinks, softdrinkp, extracheese, extracheesep, fries, friesp, bill;
cout<<"How many burgers do you want to buy? ";
cin>>burgers;
cout<<"How many pizzas do you want to buy? ";
cin>>pizzas;
cout<<"How much fries do you want to buy? ";
cin>>fries;
cout<<"How much extra cheese do you want? ";
cin>>extracheese;
cout<<"How many soft drinks do you want? ";
cin>>softdrinks;
burgerp= burgers * 250; 
pizzap= pizzas * 1150;
softdrinkp= softdrinks * 60;
extracheesep= extracheese * 80;
friesp= fries * 100;
bill= burgerp + pizzap + softdrinkp + extracheesep + friesp;
if (bill>1999)
{
	bill=bill * 0.9;
	cout<<"Congrats! You just got yourself 10% discount! ";

}

cout<<"\nThe total bill is going to be Rs. "<<bill;

}

_____________________________________________



