
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;
void Find_root(double&,double&,double&);
int main()
{
    double a,b,c;
    string rep="yes";
    while (rep=="yes"||rep=="Yes"||rep=="y"){
        system ("CLS");
        cout<<"Welcome To my quadratic root solver!"<<endl<<"Please enter the coefficients of the second order polynomial"<<endl<<"a?: ";
        cin>>a;
        cout<<"b?: ";
        cin>>b;
        cout<<"c?: ";
        cin>>c;
        Find_root(a,b,c);
        if(c==0){
            cout<<"First root: "<<fixed<<setw(5)<<a+b<<endl<<"Second root: "<<fixed<<setw(5)<<a-b<<endl;}
        else{
            if(c==1){
            cout<<"Repeated Root: "<<fixed<<setw(5)<<a<<endl;}
            else{
            cout<<"First root: "<<fixed<<setw(5)<<a<<"+"<<fixed<<setw(5)<<b<<"i"<<endl<<"Second Root: "<<fixed<<setw(5)<<a<<"-"<<fixed<<setw(5)<<b<<"i"<<endl;}}
        cout<<"Would You like this program again? ";
        cin>>rep;}
    return 0;}
void Find_root(double& a,double& b,double& c){
    double r,r1;
    r = -b/(2*a), r1 = pow(b,2)-(4*a*c);
    if(r1 > 0){
        b=(sqrt(r1)/(2*a));
        a=r;
        c=0;}
    else{
        if(r1==0){
        a=r;
        b=0;
        c=1;}
    else{
        b=abs(sqrt(abs(r1))/(2*a));
        a=r;
        c=2;}
return;}}
