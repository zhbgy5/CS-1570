//Zach Bible
//Assignment 10
//9/28/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;
void Lo_hi (double [],int);
int main()
{
    string rep="yes";
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
        system ("CLS");
        cout<<"Welcome to my Number Arranger!\n";
        int x;
        cout<<"how many numbers should this array have?: ";
        cin>>x;
        double numb[x];
        int i=0;
        cout<<"Please input "<<x<<" numbers for an array\n";
        while (i<=x-1)
        {
            cout<<i+1<<": ";
            cin>>numb[i];
            i++;
        }
        Lo_hi(numb,x);
        cout<<"These numbers rearranged into increasing numerical value are: \n";
        i=0;
        while (i<=x-1)
        {
            cout<<numb[i]<<" ";
            i++;
        }
        cout<<"\nWould you like to run this program again?: ";
        cin>>rep;
    }
}
void Lo_hi(double x[],int t)
{
    int i1,check;
    double a,b;
    do
    {
        check=1;
       for(i1=1;i1<=t-1;i1++)
    {
        if(x[i1]<x[i1-1])
        {
            a=x[i1];
            b=x[i1-1];
            x[i1]=b;
            x[i1-1]=a;
            check=2;
        }
    }
    }while (check==2);
    return;
}
