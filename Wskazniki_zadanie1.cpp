#include<iostream>
using namespace std;

void zamien (int *a, int *b) //wchodzimy z adresamin zmiennych
{
    int pom=*a;
    *a=*b;
    *b=pom;
}

void sortuj(int *a, int *b, int*c) //wchodzimy z adresami zmiennych
{
    if (*a>*b) zamien (a,b);
    if (*a>*c) zamien (a,c);
    if (*b>*c) zamien (b,c);
}


int main()
{
    int a, b, c;
    cout<<"Wskazniki Sortowanie 3 liczb. \n";
    cout<<"Podaj liczbe 1. \n";
    cin>>a;
    cout<<"Podaj liczbe 2. \n";
    cin>>b;
    cout<<"Podaj liczbe 3. \n";
    cin>>c;
    sortuj(&a, &b, &c); // pobieranie adresu zmiennej
    cout<<"Liczby posortowane: "<<a<<" "<<b<<" "<<c<<" ";

    return 0;
    

}