//Zach Bible
//Assignment 15
//12/12/16

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <time.h>
#include <math.h>
#include <windows.h>

using namespace std;
void NewHS(double a,double b,double c,int i,string d,string e,string f){
    switch(i){
    case 0:{fstream in ("AddHS.txt");in<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c;in.close();}break;
    case 1:{fstream in ("SubHS.txt");in<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c;in.close();}break;
    case 2:{fstream in ("MultHS.txt");in<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c;in.close();}break;
    case 3:{fstream in ("DivHS.txt");in<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c;in.close();}break;}}
void askem (int &a,int &b,char &c){cout<<"\nSelect Which Style (+,-,x,/) to practice?: ";
    cin>>c;cout<<"Please input a range of numbers to practice\nLow?: ";cin>>a;cout<<"High?: ";cin>>b;}
class Game{
public:
    Game(int x,int y){a=x;b=y;};
    void AddG(){sc=aG(a,b);
    aHS(sc);};
    void SubG(){sc=sG(a,b);
    sHS(sc);};
    void MultG(){sc=mG(a,b);
    mHS(sc);};
    void DivG(){sc=dG(a,b);
    dHS(sc);};
private:
    double aG(int a,int b){
        clock_t t,t2;
        int i,c,d,n1,n2,ans;
        double h,sc=0;
        i=0;
        if(b<a){a=a-b;c=b;d=a+1;}
        else{b=b-a;c=a;d=b+1;}
        t=clock();
        t2=0;
        while (t2<=30){
        t2=(clock()-t)/(double CLOCKS_PER_SEC);
        n1=rand()%d+c;
        n2=rand()%d+c;
        cout<<"score: "<<sc<<"\n\n\t\t\t\t"<<n1<<"+"<<n2<<"=?: ";
        cin>>ans;
        system("cls");
        if(n1+n2==ans){i++;
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\tCorrect!\n\n\t\t\t\t";system("Color 20");}
        else{i=i-1;cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tincorrect!\n\n\t\t\t\t"<<n1<<"+"<<n2<<"="<<n1+n2<<"\n\n\t\t\t\t";system("Color 40");}
        h=t2;
        sc=i/h;
        }
        return sc;};
    void aHS(double x){
    fstream A;
    A.open("AddHS.txt");
    double sc1,sc2,sc3,check,a;
    int d;
    string  n1,n2,n3,n4,sto;
    while (A>>n1>>n2>>n3>>sc1>>sc2>>sc3){
        if(x>sc3){cout<<"New Highscore!\n\n\t\t\t\tPlease enter initials: ";cin>>n4;cout<<"\n\n\t\t\t\t";}
        do{check=1;{
        if(x>sc1){a=x;x=sc1;sc1=a;sto=n1;n1=n4;n4=sto;check=2;}
        if(x>sc2){a=x;x=sc2;sc2=a;sto=n2;n2=n4;n4=sto;check=2;}
        if(x>sc3){a=x;x=sc3;sc3=a;sto=n3;n3=n4;n4=sto;check=2;}}}while (check==2);};
    d=0;
    NewHS(sc1,sc2,sc3,d,n1,n2,n3);
    cout<<"Top players\n\n\t\t\t\t"<<n1<<" "<<sc1<<"\n\n\t\t\t\t"<<n2<<" "<<sc2<<"\n\n\t\t\t\t"<<n3<<" "<<sc3;
    A.close();
    Sleep(5000);};
    double sG(int a,int b){
        clock_t t,t2;
        int i,c,d,n1,n2,ans;
        double h,sc=0;
        i=0;
        if(b<a){a=a-b;c=b;d=a+1;}
        else{b=b-a;c=a;d=b+1;}
        t=clock();
        t2=0;
        while (t2<=30){
        t2=(clock()-t)/(double CLOCKS_PER_SEC);
        n1=rand()%d+c;
        n2=rand()%d+c;
        if(n1<n2){a=n1;n1=n2;n2=a;}
        cout<<"score: "<<sc<<"\n\n\t\t\t\t"<<n1<<"-"<<n2<<"=?: ";
        cin>>ans;
        system("cls");
        if(n1-n2==ans){i++;
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tCorrect!\n\n\t\t\t\t";system("Color 20");}
        else{i=i-1;cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tincorrect!\n\n\t\t\t\t"<<n1<<"-"<<n2<<"="<<n1-n2<<"\n\n\t\t\t\t";system("Color 40");}
        h=t2;
        sc=i/h;
        }
        return sc;};
    void sHS(double x){
    fstream S;
    S.open("SubHS.txt");
    double sc1,sc2,sc3,check,a;
    int d;
    string  n1,n2,n3,n4,sto;
    while (S>>n1>>n2>>n3>>sc1>>sc2>>sc3){
        if(x>sc3){cout<<"New Highscore!\n\n\t\t\t\tPlease enter initials: ";cin>>n4;cout<<"\n\n\t\t\t\t";}
        do{check=1;{
        if(x>sc1){a=x;x=sc1;sc1=a;sto=n1;n1=n4;n4=sto;check=2;}
        if(x>sc2){a=x;x=sc2;sc2=a;sto=n2;n2=n4;n4=sto;check=2;}
        if(x>sc3){a=x;x=sc3;sc3=a;sto=n3;n3=n4;n4=sto;check=2;}}}while (check==2);};
    d=1;
    NewHS(sc1,sc2,sc3,d,n1,n2,n3);
    cout<<"Top players\n\n\t\t\t\t"<<n1<<" "<<sc1<<"\n\n\t\t\t\t"<<n2<<" "<<sc2<<"\n\n\t\t\t\t"<<n3<<" "<<sc3;
    S.close();
    Sleep(5000);};
    double mG(int a,int b){
        clock_t t,t2;
        int i,c,d,n1,n2,ans;
        double h,sc=0;
        i=0;
        if(b<a){a=a-b;c=b;d=a+1;}
        else{b=b-a;c=a;d=b+1;}
        t=clock();
        t2=0;
        while (t2<=30){
        n1=0;n2=0;
        t2=(clock()-t)/(double CLOCKS_PER_SEC);
        n1=rand()%d+c;
        n2=rand()%d+c;
        cout<<"score: "<<sc<<"\n\n\t\t\t\t"<<n1<<"x"<<n2<<"=?: ";
        cin>>ans;
        system("cls");
        if(n1*n2==ans){i++;
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tCorrect!\n\n\t\t\t\t";system("Color 20");}
        else{i=i-1;cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tincorrect!\n\n\t\t\t\t"<<n1<<"x"<<n2<<"="<<n1*n2<<"\n\n\t\t\t\t";system("Color 40");}
        h=t2;
        sc=i/h;
        }
        return sc;};
    void mHS(double x){
    fstream M;
    M.open("MultHS.txt");
    double sc1,sc2,sc3,check,a;
    int d;
    string  n1,n2,n3,n4,sto;
    while (M>>n1>>n2>>n3>>sc1>>sc2>>sc3){
        if(x>sc3){cout<<"New Highscore!\n\n\t\t\t\tPlease enter initials: ";cin>>n4;cout<<"\n\n\t\t\t\t";}
        do{check=1;{
        if(x>sc1){a=x;x=sc1;sc1=a;sto=n1;n1=n4;n4=sto;check=2;}
        if(x>sc2){a=x;x=sc2;sc2=a;sto=n2;n2=n4;n4=sto;check=2;}
        if(x>sc3){a=x;x=sc3;sc3=a;sto=n3;n3=n4;n4=sto;check=2;}}}while (check==2);};
    d=2;
    NewHS(sc1,sc2,sc3,d,n1,n2,n3);
    cout<<"Top players\n\n\t\t\t\t"<<n1<<" "<<sc1<<"\n\n\t\t\t\t"<<n2<<" "<<sc2<<"\n\n\t\t\t\t"<<n3<<" "<<sc3;
    M.close();
    Sleep(5000);};
    double dG(int a,int b){
        clock_t t,t2;
        int i,c,d,n1,n2,ans;
        double h,sc=0;
        i=0;
        if(b<a){a=a-b;c=b;d=a+1;}
        else{b=b-a;c=a;d=b+1;}
        t=clock();
        t2=0;
        while (t2<=30){
        t2=(clock()-t)/(double CLOCKS_PER_SEC);
        n1=7;
        n2=3;
        while (n1%n2>0){
        n1=rand()%d+c;
        n2=rand()%d+c;}
        cout<<"score: "<<sc<<"\n\n\t\t\t\t"<<n1<<"/"<<n2<<"=?: ";
        cin>>ans;
        system("cls");
        if(n1/n2==ans){i++;
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tCorrect!\n\n\t\t\t\t";system("Color 20");}
        else{i=i-1;cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tincorrect!\n\n\t\t\t\t"<<n1<<"/"<<n2<<"="<<n1/n2<<"\n\n\t\t\t\t";system("Color 40");}
        h=t2;
        sc=i/h;
        }
        return sc;};
    void dHS(double x){
    fstream D;
    D.open("DivHS.txt");
    double sc1,sc2,sc3,check,a;
    int d;
    string  n1,n2,n3,n4,sto;
    while (D>>n1>>n2>>n3>>sc1>>sc2>>sc3){
        if(x>sc3){cout<<"New Highscore!\n\n\t\t\t\tPlease enter initials: ";cin>>n4;cout<<"\n\n\t\t\t\t";}
        do{check=1;{
        if(x>sc1){a=x;x=sc1;sc1=a;sto=n1;n1=n4;n4=sto;check=2;}
        if(x>sc2){a=x;x=sc2;sc2=a;sto=n2;n2=n4;n4=sto;check=2;}
        if(x>sc3){a=x;x=sc3;sc3=a;sto=n3;n3=n4;n4=sto;check=2;}}}while (check==2);};
    d=3;
    NewHS(sc1,sc2,sc3,d,n1,n2,n3);
    cout<<"Top players\n\n\t\t\t\t"<<n1<<" "<<sc1<<"\n\n\t\t\t\t"<<n2<<" "<<sc2<<"\n\n\t\t\t\t"<<n3<<" "<<sc3;
    D.close();
    Sleep(5000);};
    double a,b,sc;};
int main()
{
    string yn="yes";
    while (yn=="yes"||yn=="Yes"||yn=="y"){
    char x;
    int y,z;
    cout<<"Welcome to Xtreme Math Hero v0.1";
    askem (y,z,x);
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t";
    switch(x){
        case 'A':
        case 'a':
        case '+':
        case '1':{
            Game a1(y,z);
            a1.AddG();
            break;}
        case 'S':
        case 's':
        case '-':
        case '2':{
            Game s2(y,z);
            s2.SubG();
            break;}
        case 'M':
        case 'm':
        case '*':
        case 'x':
        case '3':{
            Game m3(y,z);
            m3.MultG();
            break;}
        case 'D':
        case 'd':
        case '/':
        case '4':{
            Game d4(y,z);
            d4.DivG();
            break;}
    }
    system("cls");
    cout<<"Would you like to run this program again?: ";
    cin>>yn;
    system("cls");
}
    return 0;
}
