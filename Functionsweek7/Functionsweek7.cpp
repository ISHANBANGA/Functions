// Functionsweek7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int addnumber(int a, int b) {

    int sum = a + b;
    return sum;
}
int Multiplynumber(int a, int b) {

    int sum = a * b;
    return sum;
}
int Dividenumber(int a, int b) {

    int sum = a / b;
    return sum;
}
int main()
{
    int a, b,i;
    std::cout << "Hello World!\n";

    cout << "Enter First number:\t";
    cin >> a;
    cout << "Enter Second number:\t";
    cin >> b;
    cout << "Enter the following for their functions\n\n 1 to add numbers \n 2 to multiply numbers \n 3 to divide the numbers\n\n";
    cin >> i;
    switch (i) {
    case(1): {cout << "\nThe output is:" << addnumber(a, b) << endl;}
    case(2): {cout << "\nThe output is:" << Multiplynumber(a, b) << endl;}
    case(3): {cout << "\nThe output is:" << Dividenumber(a, b) << endl;}
    default: { cout << "Enter a valid choice";}
        break;
    }
    
}


