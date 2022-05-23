#include <iostream>

int SumaCyfr(int N)
{
  if (N==0) return 0;
  return N%10 + SumaCyfr(N/10);
}


int main()
{
    int N;
    std::cout<<"Zadanie 5. Rekurencyjnie. Suma cyfr rekurencyjnie\n";
    std::cout<<"Podaj liczbe \n";
    std::cin>>N;
    std::cout<<" Suma cyfr wynosi ";
    std::cout<<SumaCyfr(N);
        
    return 0; 
}