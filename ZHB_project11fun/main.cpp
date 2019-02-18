//Zach Bible
//Assignment 11
//10/31/16

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
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
        system ("CLS");
        cout<<"Welcome to my Multiplication Table Program!\nWhat dimensions would you like the table to be?\nx: ";
        int a,b;
        cin>>a;
        cout<<"y: ";
        cin>>b;
        double x[a][b];
        int i=0,j=0,z=0,y=0;
         while (i<=(a-1))
        {
          j=0;
            while (j<=(b-1))
            {
              x[i][j]=(i+1)*(j+1);
            j++;
            }
            i++;
        }
        while (z<=(a-1))
        {
            y=0;
            while (y<=(b-1))
            {
                cout<<setw(3)<<x[z][y]<<" ";
                y++;
            }
            cout<<endl;
            z++;
        }
    cout<<"Would you like to run this program again? ";
    cin>>rep;
    }
    return 0;
}
void Multiply_me (double x[][10])
{
    int i=0,j=0;
    while (i<=9)
        {
          j=0;
            while (j<=9)
            {
              x[i][j]=(i+1)*(j+1);
            j++;
            }
            i++;
        }
        return;
}
