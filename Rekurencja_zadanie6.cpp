#include <iostream>

int Znajdz(int N)
{
  if (N==1) return -1;
  return -1*(Znajdz(N-1))*N-3;
}


int main()
{
    int N;
    std::cout<<"Zadanie 6. Rekurencja. N-ty wyraz ciagu\n";
    std::cout<<"Podaj liczbe N\n";
    std::cin>>N;
    std::cout<<" N-ty wyraz ciagu wynosi ";
    std::cout<<Znajdz(N);
        
    return 0; 
}