//Zach Bible
//Assignment 9
//9/28/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;
int Factorial(int n);
void find_e ();
double tol;
int main()
{
    string rep="yes";
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
        system ("CLS");
        cout<<"Welcome to my Euler's number finder!"<<endl<<"To what tolerance would you like to find Euler's number?: ";
        cin>>tol;
        int prec=abs(log10(tol));
        find_e ();
        cout<<"The value of e is: "<<fixed<<setprecision(prec+2)<<tol<<endl<<"Would you like to run this program again?: ";
        cin>>rep;
    }
    return 0;
}
int Factorial(int n)
{
    if(n!=1)
    return n*Factorial(n-1);
}
void find_e ()
{
    int i=0;
    double e,e1,diff;
    e1=0;
     while (tol<=diff)
        {
            if(i==0)
            {
                e=1;
            }
            else
            {
              e1=e;
              e=e1+pow(Factorial(i),-1);
            }
        i++;
       diff=abs(e-e1);
        }
        tol=e;
        return;
}
