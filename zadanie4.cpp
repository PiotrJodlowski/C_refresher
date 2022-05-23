#include <iostream>
#include <Bits.h>

int SumaCyfr(int Liczba)
{
    int Suma=0;
    while(Liczba>0) //wykonuj do momentu az pozbedziesz sie wszystkich dziesiatek. Liczba/10 jesli <10 zwroci 0
        {
        Suma+=Liczba%10; //dostajemy ostatnia cyfre, czyli reszte z dzielenia
        Liczba/=10; //kasujemy kolejne dziesiatki np: 123/10=12, 1231/10 =123
        }
    // std::cout<<"Suma cyfr wynosi "<<Suma<<"\n";
    return Suma;
}

int SumaBinarnie(int Liczba) //Podobnie jak wyzej dla dziesietnych robimy dla binarnych
{
    int Suma=0;
    while(Liczba>0)
        {
        Suma+=Liczba%2; //dostajemy ostatnia cyfre
        Liczba/=2; //kasujemy kolejne wielokrotnosci 2 np: 123/10=12   
        }

    // std::cout<<"Suma cyfr binarnie wynosi "<<Suma<<"\n";
    return Suma;
}


int main()
{
    int LiczbaA, LiczbaB;
       
    std::cout<<"Zadanie 5. Suma bitów i suma cyfr danej liczby\n";
    std::cout<<"Podaj pierwsza liczbe z zakresu\n";
    std::cin>>LiczbaA;
    std::cout<<"Podaj druga liczbe z zakresu\n";
    std::cin>>LiczbaB;
    
    
    std::cout<<"Liczby z zakresu od "<<LiczbaA<<" do "<<LiczbaB<<" majace rowna sume cyfr dziesietnie i binarnie: \n";
    for(int i=LiczbaA; i<=LiczbaB; i++)
        {
            if (SumaCyfr(i) == SumaBinarnie(i) ) 
                    {
                        std::cout<<i<<" ";
                    }

        }

    return 0; 
}