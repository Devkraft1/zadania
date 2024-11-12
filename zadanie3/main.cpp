#include <iostream>
using namespace std;

int main()
{
    cout<<"------------------"<<endl;
    int a;
    cout<<"Zadanie 3a"<<endl;
    cout<<"Podaj liczbe:";
    cin>>a;
    if(a%2==0 && a>10)
    {
    cout<<"liczba jest parzysta i wieksza niz 10"<<endl;
    }
    else
    {
    cout<<"liczba nie jest parzysta i wieksza niz 10"<<endl;
    }
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 3b"<<endl;
    cout<<"Podaj liczbe:";
    cin>>a;
    if(a>15 || a<5)
    {
    cout<<"liczba jest wieksza niz 15 lub mniejsza niz 5"<<endl;
    }
    else
    {
    cout<<"liczba nie jest wieksza niz 15 lub mniejsza niz 5"<<endl;
    }
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 3c"<<endl;
    cout<<"Podaj liczbe:";
    cin>>a;
    if(a !=10)
    {
        cout<<"Liczba nie jest rowna 10"<<endl;
    }
    else
    {
       cout<<"Liczba jest rowna 10"<<endl;
    }
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 3d"<<endl;
    cout<<"Podaj liczbe:";
    cin>>a;
    if(a>=1 && a<=100)
    {
        cout<<"Liczba miesci sie w przedziale 1-100"<<endl;
    }
    else
    {
        cout<<"Liczba nie miesci sie w przedziale 1-100"<<endl;
    }
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 3e"<<endl;
    int b, c;
    cout<<"Podaj 1 liczbe:";
    cin>>a;
    cout<<"Podaj 2 liczbe:";
    cin>>b;
    cout<<"Podaj 3 liczbe:";
    cin>>c;
    if(a==b && b==c)
    {
        cout<<"wszystkie liczby sa rowne"<<endl;
    }
    else if(a!=b && b==c)
    {
        cout<<"pierwsza liczba jest rozna od drugiej i trzeciej, ktore sa rowne"<<endl;
    }
    else if(a==b && b!=c)
    {
        cout<<"trzecia liczba jest rozna od pierwszej i drugiej, ktore sa rowne"<<endl;
    }
    else if(a!=b && a==c)
    {
        cout<<"druga liczba jest rozna od pierwszej i trzeciej, ktore sa rowne"<<endl;
    }
    else if(a!=b && a!=c && b!=c)
    {
        cout<<"wszystkie liczby sa rozne"<<endl;
    }
    cout<<"------------------"<<endl<<endl;

    cout<<"------------------"<<endl;
    cout<<"Zadanie 3f"<<endl;
    cout<<"Podaj wiek:";
    cin>>a;
    if(a>=18)
    {
        cout<<"Jestes pelnoletni"<<endl;
    }
    else
    {
        cout<<"Nie jestes pelnoletni"<<endl;
    }
    cout<<"------------------"<<endl<<endl;
    return 0;
}
