#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    cout<<"------------------"<<endl;
    cout<<"Zadanie 1b"<<endl;
    double a;
    cout<<"Podaj liczbe zmiennoprzecinkowa:";
    cin>>a;
    cout<<floor(a)<<endl;
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 1c"<<endl;
    string b;
    cout<<"Podaj tekst:";
    cin>>b;
    double c = stod(b);
    cout<<pow(c, 2)<<endl;
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 1d"<<endl;
    int d;
    cout<<"Podaj liczbe calkowita:";
    cin>>d;
    string e = to_string(d);
    int f = stod(e);
    cout<<f<<endl;
    cout<<"------------------"<<endl<<endl;
    return 0;
}
