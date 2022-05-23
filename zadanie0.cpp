#include <iostream>
#include <Bits.h>

int main()
{
  
    int LiczbaA, Wynik;
    int i;

    std::cout<<"Zadanie 0. Podaj liczbe\n";
    std::cout<<"Podaj Liczbe\n";
    std::cin>>LiczbaA;
    // std::cout<<"Przesuniecie 2 bitow w prawo "<<(LiczbaA>>2)<<"\n";    //przesuniecie bitow w prawo, jest to rownoznaczne z podzieleniem liczby przez 2^2;
    // std::cout<<"Przesuniecie 2 bitow w lewo "<<(LiczbaA<<2)<<"\n";    //przesuniecie bitow w lewo, jest to rownoznaczne z pomnozeniem liczby przez 2^2;
    
    //Metoda poszukiwania ostatniego bitu
    for (i=0; i<=Wynik; i++)
        {
           Wynik= LiczbaA>>i;
           std::cout<<"Wyniki dla kolejnych pozycji bitow  "<<Wynik<<"\n";
        }
    std::cout<<"Znalazlem ostatni bit na pozycji  "<<i+1<<"\n";

    return 0; 
}