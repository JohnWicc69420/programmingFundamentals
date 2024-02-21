//Task 13
//This program asks user to have some values calculated
//the user gets to choose the type of value they want to 
//have calculated
 
#include <iostream>
#include <cmath>
using namespace std;
main()
{
//define pie
//prompt user to enter the data
	double pie = 3.14159;

	int    input;
	double radius, length, area, width, base, a, b, height;

	// Display Geometry Calculator Menu
	
	cout << "Menu \n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Calculate the Area of a Cylinder\n";
    cout << "5. Calculate the Area of a Trapezoid\n";
    cout << "6. Quit\n";
    cout << "Please select one of the options \n";
	cin  >> input;

//the user gets to calculate the values
//that they have selected
//i.e they get to calculate the area of a circle if they
//press 1 etc.

    if (input == 1)
    {
	cout << "Enter the radius of the circle: ";
    cin  >> radius;
    area = pie * (radius*radius);
    cout << "The area of the cirle is " << area << endl;
    }
	
	
	
    else if (input == 2)
	{
	cout << "Enter the length of the rectangle: ";
    cin  >> length;
    cout << "Enter the width of the rectangle: ";
    cin  >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    }
    
    
	
	else if (input == 3)
    {	
	cout << "Enter the base of the triangle: ";
    cin  >> base;
    cout << "Enter the height of the triangle: ";
    cin  >> height;
    area = base * height * 0.5;
    cout << "The area of the triangle is " << area << endl;
    }
    
    
    
    else if (input == 4)
    {	
	cout << "Enter the height of the Cylinder: ";
    cin  >> height;
    cout << "Enter the radius of the Cylinder: ";
    cin  >> radius;
    area = 2 * pie * pow(radius,2) + (height *2 * pie * radius);
    cout << "The area of the cylinder is " << area << endl;
    }
    
    
    
    else if (input == 5)
    {	
	cout << "Enter Base 'A' of the Trapezoid: ";
    cin  >> a;
    cout << "Enter Base 'B' of the Trapezoid: ";
    cin  >> b;
    cout << "Enter the height of the Trapezoid: ";
    cin>>height;
	area =  height *  ( (a + b) / 2 );
    cout << "The area of the Trapezoid is " << area << endl;
    }
    
    
    else if (input == 6)
    cout << "Exiting Menu....... \n";
    
    else
    cout<<"Invalid input";

    
}

_______________________________________________________________
