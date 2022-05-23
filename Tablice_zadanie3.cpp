#include<iostream>
using namespace std;

int main()
{
    int Tablica1[3][3];
    int Tablica2[3][3];

    cout<<"Tablice dwuwymiarowe: Dodawanie macierzy \n";
    cout<<"Macierz 1. Wszystkie elementy: \n";

    // Wpisanie losowych do macierzy 1
    for (int j = 0; j < 3; j++)
    {        
        for (int i = 0; i < 3; i++)
            {
                Tablica1[j][i] = rand()%10;
                cout<<Tablica1[j][i]<<" ";
            }
        cout<<endl;        
    }
    cout<<endl;
    
    cout<<"Macierz 2. Wszystkie elementy: \n";

    // Wpisanie losowych do macierzy 2
    for (int j = 0; j < 3; j++)
    {        
        for (int i = 0; i < 3; i++)
            {
                Tablica2[j][i] = rand()%10;
                cout<<Tablica2[j][i]<<"  ";
            }
        cout<<endl;        
    }
    cout<<endl;

    
    cout<<"Suma Macierzy wynosi: \n";
    for (int j = 0; j < 3; j++)
    {        
        for (int i = 0; i < 3; i++)
            {
                Tablica1[j][i]+=Tablica2[j][i];
                cout<<Tablica1[j][i]<<" ";
            }
        cout<<endl;        
    }
    cout<<endl;

}