#include <iostream>
#include "question3.h"
using std::cout;
using std::cin;


int main()
{
    cout << "\n";
    cout<<"------------------------------------------";
	cout<<"\n";

    double kilo_1;
    double vel_1;

	cout << "How much is the mass? ";
	cin >> kilo_1;

	cout << "\n";

    cout << "How much is the velocity? ";
	cin >> vel_1;

	cout << "\n";

    cout << "The velocity is: "  << vel_1 << " MPS " << "\t\t" << "The Mass is: " << kilo_1 << " Kg" << "\n";

    cout << "\n" << "The kinetic Energy is: " << get_kinetic_energy(kilo_1, vel_1) << " Joules.";

    cout << "\n";
    cout<<"------------------------------------------";
    cout << "\n";


    return 0;
}

    
