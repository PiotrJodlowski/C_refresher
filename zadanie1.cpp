#include <iostream>

void Dziesietna(int Liczba)
{
    int Licznik=1;
    int Tablica[20];
    

    while (Liczba>=1)  //Wykonuj dzielenie przez dwa dopoki liczba wejsciowa nie bedzie rowna 1
    {
        Tablica[Licznik++] = Liczba % 2;
        Liczba/= 2;
    }
  
    for (int i = Licznik-1; i > 0; i--) // wazne, zeby Licznik-1 bo inaczej wypisze reszte tablicy
    {
        std::cout<<Tablica[i];
    }
}


int main()
{
  
    int LiczbaA;
    std::cout<<1%2;                  
    std::cout<<"Zadanie 1. Zamiana na liczbe binarna\n";
    std::cout<<"Podaj Liczbe\n";
    std::cin>>LiczbaA;

    Dziesietna(LiczbaA);    
    
    return 0; 
}