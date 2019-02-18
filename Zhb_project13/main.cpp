//Zach Bible
//Assignment 13
//11/16/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <time.h>

using namespace std;

int main()
{
 string rep="yes";
 string name,addr;
 ofstream Info("info.txt"),NInfo("Newinfo.txt");
 ifstream InfoO("info.txt"),NInfoO("Newinfo.txt");
 int check;
    while (rep=="yes"||rep=="Yes"||rep=="y")
    {
        check=0;
        system ("CLS");
        cout<<"Welcome to my contact info program!\n";
        rep="no";
        while (rep=="no"||rep=="No"||rep=="n")
        {
        if(check==1)
        {
            system ("CLS");
        }
        cout<<"Please insert your name and address.\n"<<"Name: ";
        getline(cin,name);
        cout<<"address: ";
        getline(cin,addr);
        Info<<name<<endl<<addr<<endl;
        system ("CLS");
        getline(InfoO,name);
        getline(InfoO,addr);
        cout<<"Name: "<<name<<endl<<"Address: "<<addr<<endl;
        cout<<"Is this information correct?: ";
        cin>>rep;
        cin.ignore();
        check=1;
        }
        system ("CLS");
        cout<<"Would you like update your contact information?: ";
        cin>>rep;
        cin.ignore();
        while (rep=="yes"||rep=="Yes"||rep=="y")
        {
            rep="no";
            while (rep=="no"||rep=="No"||rep=="n")
            {
                system ("CLS");
                cout<<"New Name?: ";
                getline(cin,name);
                cout<<"New Address?: ";
                getline(cin,addr);
                NInfo<<name<<endl<<addr<<endl;
                system ("CLS");
                getline(NInfoO,name);
                getline(NInfoO,addr);
                cout<<"Name: "<<name<<endl<<"Address: "<<addr<<endl;
                cout<<"Is this information correct?: ";
                cin>>rep;
                cin.ignore();
            }
            rep="no";
        }
        system ("CLS");
        cout<<"Would you like to run this program again?: ";
        cin>>rep;
        cin.ignore();
    }
    Info.close();
    NInfo.close();
    return 0;
}
