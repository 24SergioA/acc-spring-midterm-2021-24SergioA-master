#include <iostream>
#include "question2.h"
#include <string>
using std::cout;

/*
bool test_config()
{
    return true;
}
*/

std::string gpa_to_letter_grade(double gpa)
{
	if (gpa >= 3.5 && gpa <= 4)
	{
		return "A";
	}
	else if (gpa >= 3 && gpa <= 3.49)
	{
		return "B";
	}
	else if (gpa >= 2 && gpa <= 2.99)
	{
		return "C";
	}
	else if (gpa >= 1 && gpa <= 1.99)
	{
		return "D";
	}
	else if (gpa >= 0 && gpa <= .99)
	{
		return "F";
	}
	else
	{
		return "Invalid";
	}
}