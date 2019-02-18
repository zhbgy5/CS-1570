//Zach Bible
//9/14/2016
//Assignment 4

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double x,y;
    char z;
    string a = "yes";
    while (a=="yes"||a=="y")
    {
        double x,y;
    char z;
    cout<< "Welcome to my calculator Program!\n" << "\nPlease input two numbers to calculate\n"<<"First number? ";
    cin>> x;
    cout<< "Second Number? ";
    cin>> y;
    cout<< "\nInput an operation (+,-,*,/) you wish to perform: ";
    cin>> z;
    cout<<fixed<<setprecision(3)<<endl;
    switch (z) {
        case 'A':
        case 'a':
        case '+':
            cout<<setw(3)<<x<<" + "<<setw(3)<<y<<" = "<<setw(3)<<(x+y)<<endl;
            break;
        case 'S':
        case 's':
        case '-':
            cout<<setw(3)<<x<<" - "<<setw(3)<<y<<" = "<<setw(3)<<(x-y)<<endl;
            break;
        case 'M':
        case 'm':
        case '*':
        case 'x':
            cout<<setw(3)<<x<<" * "<<setw(3)<<y<<" = "<<setw(3)<<(x*y)<<endl;
            break;
        case 'D':
        case 'd':
        case '/':
            if (y==0)
{
    cout<<"Cannot Divide by zero!"<<endl;
}
            else
{
                cout<<setw(3)<<x<<" / "<<setw(3)<<y<<" = "<<setw(3)<<(x/y)<<endl;
}
            break;
            default: cout<<"Invalid Operator\n";
            }
    cout<<"\nWould You like to run this program again? ";
    cin>>a;
    cout<<endl;
    }
    cout<<"Thank you for using my program!\n";
    return 0;

}
