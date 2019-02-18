//Zach Bible
//9/14/2016
//Assignment 3

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x,y;
    char z;
    cout<< "Welcome to my calculator Program!\n" << "Please input two numbers to calculate\n"<<"First number? ";
    cin>> x;
    cout<< "\nSecond Number? ";
    cin>> y;
    cout<< "\nInput an operation you wish to perform: ";
    cin>> z;
    switch (z) {
        case 'A':
        case 'a':
        case '+':
            cout<<x<<"+"<<y<<"="<<(x+y);
            break;
        case 'S':
        case 's':
        case '-':
            cout<<x<<"-"<<y<<"="<<(x-y);
            break;
        case 'M':
        case 'm':
        case '*':
        case 'x':
            cout<<x<<"*"<<y<<"="<<(x*y);
            break;
        case 'D':
        case 'd':
        case '/':
            if (y==0)
{
    cout<<"Cannot Divide by zero!";
}
            else
{
                cout<<x<<"/"<<y<<"="<<(x/y);
}
            break;
            }

    return 0;

}
