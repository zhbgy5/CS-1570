//Zach Bible
//Assignment 6
//9/28/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    string rep="yes";
    cout<<"Welcome to my Pi calculator!\n"<<endl;
    double diff,tol,sum1,sum2,t;
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
    sum1=0;
    sum2=4;
    t=0;
    cout<<"\nWithin what tolerance would you like to calculate pi? ";
    cin>>tol;
    int prec=abs(log10(tol));
    diff= abs(sum1-sum2);
    while (tol<=diff)
    {
    t++;
    sum1=sum2;
    sum2=sum1+((pow(-1,t)*4)/((2*t)+1));
    diff= abs(sum1-sum2);
    }
    cout<<endl;
    cout<<fixed<<setprecision(prec+2)<<sum2<<endl<<"\nWould you like to run this program again? ";
    cin>>rep;
    }
    cout<<"Thank you for using my program!\n";
    return 0;
}
