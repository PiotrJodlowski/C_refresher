#include <iostream>

// rekurencyjnie

int Znajdz(int N)
    {
        if (N==1) return 2;
        if (N%2!=0) return 2 * Znajdz(N-1);
        if (N%2==0) return 2 + Znajdz(N-1);
    }

int main()
{
  
    int N;
    std::cout<<"C1. Rekurencja. N-ty wyraz ciagu\n";
    std::cout<<"Podaj liczbe n\n";
    std::cin>>N;
    std::cout<<" N-ty wyraz ciagu wynosi "<<Znajdz(N);
        
    return 0; 
}