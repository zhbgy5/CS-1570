//Zach Bible
//Midterm
//10/10

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double t1;
int main()
{
double i,t,h;
i=0;
t=0;
cout<<"Welcome to my Falling Cat calculator!\n";
while(i<=10)
{
    h=1000-100*i;
    cout<<setw(4)<<fixed<<setprecision(1)<<h;
    t1=pow(h/16,.5);
    cout<<"  "<<t1<<endl;
    i++;
}
return 0;
}
