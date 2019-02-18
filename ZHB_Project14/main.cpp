//Zach Bible
//Assignment 14
//11/28/16

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
class Food{
public:
    Food(string x,string y){
        setfs(x,y);
    }
    void showData()
    {
    cout<<"Food: "<<f<<endl<<"Style: "<<s;
    }
private:
     void setfs(string a,string b){
        f=a;
        s=b;
    }
    string f,s;
};
int main()
{
 string type, bt;
        cout << "Please enter a type for food 1: ";
        getline(cin, type);
        cout << "Please enter a cooking style for food 1 (ENTER for none): ";
        getline(cin, bt);
        Food f1(type, bt);
        cout << "\nPlease enter a type for food 2: ";
        getline(cin, type);
        cout << "Please enter a cooking style for food 2 (ENTER for none): ";
        getline(cin, bt);
        Food f2(type, bt);
        cout << "\nPlease enter a type for food 3: ";
        getline(cin, type);
        cout << "Please enter a cooking style for food 3 (ENTER for none): ";
        getline(cin, bt);
        Food f3(type, bt);
        cout << "\nPlease enter a type for food 4: ";
        getline(cin, type);
        cout << "Please enter a cooking style for food 4 (ENTER for none): ";
        getline(cin, bt);
        Food f4(type, bt);
        cout << "\nData for food 1:" << endl;
        f1.showData();
        cout << "\nData for food 2:" << endl;
        f2.showData();
        cout << "\nData for food 3:" << endl;
        f3.showData();
        cout << "\nData for food 4:" << endl;
        f4.showData();
        return 0;
}
