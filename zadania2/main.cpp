#include <iostream>
using namespace std;

int main()
{
    cout<<"------------------"<<endl;
    cout<<"Zadanie 2a"<<endl;
    cout<<12+5<<endl;
    cout<<12-5<<endl;
    cout<<12*5<<endl;
    cout<<12.0/5.0<<endl;
    cout<<12%5<<endl;
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 2b"<<endl;
    int a, b;
    cout<<"Podaj 1 liczbe:";
    cin>>a;
    cout<<"Podaj 2 liczbe:";
    cin>>b;
    cout<<"Reszta z dzielenia pierwszej liczby przez druga wynosi: "<<a%b<<endl;
    cout<<"------------------"<<endl<<endl;

    cout<<"Zadanie 2c"<<endl;
    int c;
    cout<<"Podaj 1 liczbe:";
    cin>>a;
    cout<<"Podaj 2 liczbe:";
    cin>>b;
    cout<<"Podaj 3 liczbe:";
    cin>>c;
    cout<<"Srednia z trzech podanych liczb wynosi: "<<(a+b+c)/3<<endl;
    cout<<"------------------"<<endl<<endl;

    cout<<"Zadanie 2d"<<endl;
    cout<<"Podaj dlugosc:";
    cin>>a;
    cout<<"Podaj szerokosc:";
    cin>>b;
    cout<<"Pole prostokata wynosi: "<<a*b<<endl;
    cout<<"------------------"<<endl<<endl;
    return 0;
}
