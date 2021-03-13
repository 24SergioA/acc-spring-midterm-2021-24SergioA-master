#include <iostream>
#include "question2.h"
using std::cout;
using std::cin;


int main()
{
    // Add space when starting
	cout<<"\n";

	// If - else statament
	int gp1;

	cout<<"What's the GPA? ";
	cin>>gp1;
	
    cout<<"\n";

	cout<< "The GPA " << gp1 << " is a: " << gpa_to_letter_grade(gp1) <<"\n";  

	cout<<"\n";

    return 0;
}

// ignore this - re-submission