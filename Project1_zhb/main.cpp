//Zach Bible
//8/31
//assignment #1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{   double x;
    cout << "What is the value of x?";
    cin >> x;
    double y = x - 3;
    double z = -2.1*pow(x,3) + 3.9*pow(x,2) + 6.0*x + pow(y,0.5);
    cout << "The Value of F(x) is: " << z << endl;
    cout << "Thank you for using my program!";
    return 0;
}
