//Zach Bible
//Assignment 12
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
        string name,rando,s1,s2,n1,n2;
        int i=0,j=0,numl=0,num1=0,nums=0,k,q,L;
        char next;
        cout<<"Welcome to string manipulator program!\nWhat is your name? ";
        getline(cin,name);
        cout<<"Please insert a random sequence of characters: ";
        getline(cin,rando);
        L = int(rando.length());
        k=L;
        for (i=0;i<L;i++)
        {
            next=rando.at(i);
            if(isalpha(next))
            {
            numl++;
            }
            else if(isdigit(next))
            {
            num1++;
            }
            else
            {
            nums++;
            }
        }
        for (i=0;i<int(rando.length());i++)
        {
        for(q=1;q<k;q++)
        {
            n1=rando.at(q);
            n2=rando.at(q-1);
            rando.replace(q-1,1,n1);
            rando.replace(q,1,n2);
        }
        k=k-1;
        }
        q=(L/2);
        s1=rando.substr(0,q);
        s2=rando.substr(q);
        cout<<s1<<" "<<name<<" "<<s2<<endl;
        cout<<"number of special characters: "<<nums;
        cout<<"\nwould you like to run this program again? ";
        cin>>rep;
        cin.ignore();
    }
    return 0;
}
