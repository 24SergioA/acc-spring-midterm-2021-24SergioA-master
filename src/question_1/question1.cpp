#include <iostream>
#include <bitset>
#include "question1.h"
using namespace std;

bool test_config()
{
    return true;
}

int decimal_to_binary(int deci) // deci is the decimal number
{
    
    int dec = deci;
    int count = 0;
    int binary[100];

    for(int i=0; dec>0; i++)
    {
        binary[i] = dec % 2;
        dec = dec / 2;
        count++; 
    }

    for (int j = count-1; j >= 0; j--)
    {
        cout << binary[j];
    }

    return 0;
}

/*
Write a string value return function decimal_to_binary that accepts an int parameter.  
The function will convert an int value to its binary representation and returns the binary string value.

Add characters to string:
string str;
str.push_back(‘a’); //adds a to string
str.push_back(‘b’);//adds b—string is now absimp

*/


// ignore this - resu-