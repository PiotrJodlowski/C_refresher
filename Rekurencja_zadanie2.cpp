#include <iostream>

int ZnajdzSilnia(int LiczbaA)
{
 if (LiczbaA=0) return 1;
 return LiczbaA*ZnajdzSilnia(LiczbaA-1);
}

int main()
{
  
    int LiczbaA;
    std::cout<<"Zadanie 2. Rekurencja. Silnia\n";
    std::cout<<"Podaj liczbe\n";
    std::cin>>LiczbaA;
    std::cout<<"Silnia wynosi "<<ZnajdzSilnia(LiczbaA);
        
    return 0; 
}