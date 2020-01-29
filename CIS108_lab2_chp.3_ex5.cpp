// CIS108_lab2_chp.3_ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string first_name = "Eduardo";
string last_name = " Sanchez";
string full_name;
int age = 32;


int main()
{
    cout << "Hello my name is: ";
    full_name = first_name + last_name;
    cout << full_name;
    cout << " and my age is: ";
    cout << age ;
    cout << "\n";
    return 0;
}

