//Zach Bible
//Assignment 5
//9/21/2016

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double H=6.5,L=10,dL=2,dW,Wf,Lf,SA,t;
    int dt=2,t1,t2=0;
    string rep="yes";
    cout << "Welcome to my room stats calculator!\n"<<endl;
    while (rep=="yes"||rep=="y")
    {
        cout<<"What is increment to increase width by? ";
        cin>>dW;
        cout << "Width  Length  Height  Surface Area\n"
             << "-----  ------  ------  ------------\n";
        for (t=10;t<=12;t2++)
        {
            Wf=t;
            t=t+dW;
        for (t1=0;t1<= dt; t1++)
        {
            Lf=L+(dL*t1);
            SA=(2*Wf*Lf)+(2*Wf*H)+(2*Lf*H);
            cout<<setprecision(2)<<setw(5)<<fixed<<Wf<<"  "<<setw(6)<<fixed<<Lf<<" "<<setw(6)<<fixed<<H<<""<<setw(12)<<fixed<<SA<<endl;
        }
        }
        cout<<"\nWould you like to run my program again? ";
        cin>>rep;
        cout<<endl;
    }
    cout<<"Thank you for using my program!";
    return 0;
}
