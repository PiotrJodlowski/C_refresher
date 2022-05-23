#include <iostream>

void ZnajdzParzaki (int LiczbaA, int LiczbaB)
{
if (LiczbaB>=LiczbaA)
    {
        if (LiczbaB%2==0)
            {
                std::cout<<LiczbaB<<' ';
            }
           ZnajdzParzaki (LiczbaA, LiczbaB-1);    
    }    
}

int main()
{
  
    int LiczbaA, LiczbaB;
    std::cout<<"Zadanie 1. Rekurencja. Parzyste z przedzialu malejaco\n";
    std::cout<<"Podaj pierwsza liczbe z przedzialu\n";
    std::cin>>LiczbaA;
    std::cout<<"Podaj ostatnia liczbe z przedzialu\n";
    std::cin>>LiczbaB;
    
    ZnajdzParzaki (LiczbaA, LiczbaB);
        
    
    return 0; 
}