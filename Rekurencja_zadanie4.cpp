#include <iostream>


// MOJE: rekurencyjnie - wypisuje w odwrotnej kolejnosci
// void Znajdz(int N)
//     {
//         if (N>0)
//             {
//                 std::cout<<N%2;
//                 Znajdz(N/2);
//             }
//     }


void Znajdz(int N)
{
    if(N==0) return; // jak dojdzie do 0 to zrobi nawrot i pojedzie z powrotem
    Znajdz(N/2);
    std::cout<<N%2;
}


int main()
{
    int N;
    std::cout<<"Zadanie 0. Rekurencyjnie. Zamiana na dwojkowy\n";
    std::cout<<"Podaj liczbe \n";
    std::cin>>N;
    std::cout<<" Liczba w systemie dwojowym wynosi ";
    Znajdz(N);
        
    return 0; 
}