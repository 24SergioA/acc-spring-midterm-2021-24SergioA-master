#include <iostream>
#include "question1.h"
using namespace std;


int main()
{

    int deci_1;

    cout << "\n";
    cout << "------------------------------" << "\n"; // format

    cout << "Enter a number: ";
    cin  >> deci_1;

    cout << "\n";  // FORMAT to separate both sentences

    cout << "The binary for  " << deci_1 << "  is: " << decimal_to_binary(deci_1) << "\n";
    cout << "\n";
    
    cout << "------------------------------"; // format
    cout << "\n";
    return 0;


}

// ignore this - re-submission 2