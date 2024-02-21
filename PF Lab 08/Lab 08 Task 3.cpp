#include <iostream>
using namespace std;

double kineticEnergy ( double , double );

main()
{
    //declare variables used to store input from the user
    double mass, velocity;

    //prompt user to enter the input
	cout << "Enter object's mass:\n";
    cin >> mass;
    cout << "Enter object's velocity:\n";
    cin >> velocity;
    
	
	// call kineticEnergy and pass these values
    // as arguments, within final output message
    
	cout << "This object's kinetic energy is " << kineticEnergy(mass, velocity) << " J.\n";

    return 0;
}

double kineticEnergy(double objectMass, double objectVelocity)

// use the formula of kinetic energy to show all the values

{
    return (objectMass * objectVelocity * objectVelocity * (0.5));
}

