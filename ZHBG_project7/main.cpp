//Zach Bible
//Assignment 7
//9/28/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>


using namespace std;
double find_pi(double tol)
{
    double sum1,sum2,t,diff;
    sum1=0;
    sum2=4;
    t=0;
    diff= abs(sum1-sum2);
    while (tol<=diff)
    {
    t++;
    sum1=sum2;
    sum2=sum1+((pow(-1,t)*4)/((2*t)+1));
    diff= abs(sum1-sum2);
    }
    return sum2;
}
int main()
{
    double r,Circ,Area,sum2,tol;
    string rep="yes";
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
        system ("CLS");
    cout<<"Welcome to my Circle Calculator!\n";
    cout<<"\nWhat is the radius of the circle? ";
    cin>>r;
    cout<<"What precision of pi should be used for calculation? ";
    cin>>tol;
    sum2 = find_pi(tol);
    Circ=sum2*2*r;
    Area=pow(r,2)*sum2;
    cout<<"  Radius     Pi calculated    Circumference      Area"<<endl;
    cout<<"----------  ---------------  ---------------  ------------"<<endl;
    cout<<" "<<fixed<<setw(5)<<r<<"       "<<fixed<<setw(5)<<sum2<<"        "<<fixed<<setw(5)<<Circ<<"      "<<fixed<<setw(5)<<Area<<endl<<"\nWould you like to run the program again?";
    cin>>rep;
    }
    return 0;
}
