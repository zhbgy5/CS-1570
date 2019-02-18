#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

class Room{
public:
    Room(double x,double y){
        Area(x,y);
        };
    void ShowArea(){
    cout<<Area1;
    };
private:
    double Area1;
        void Area(double j,double k){
        Area1=j*k;
    };
    };
void Perimeter(double&f,double k){
f=f*2+k*2;
}
int main()
{
    double L,W;
    cout<<"Please insert Length and Width of room"<<endl<<"L?: ";
    cin>>L;
    cout<<"W?: ";
    cin>>W;
    Room floor_area(L,W);
    Perimeter(L,W);
    cout<<"Area: ";
    floor_area.ShowArea();
    cout<<"\nPerimeter: "<<L;
    return 0;
}
