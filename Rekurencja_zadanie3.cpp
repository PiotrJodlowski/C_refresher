#include <iostream>

// rekurencyjnie
double Znajdz(int N)
    {
        if (N==1) return 1;
        if (N==2) return 0.5;
        return -Znajdz(N-1)*Znajdz(N-2);      
    }



int main()
{
  
    int N;
    double Ciag[30];
    Ciag[1]=1;
    Ciag[2]=0.5;
    std::cout<<"Zadanie 3. Rekurencja. N-ty wyraz ciagu\n";
    std::cout<<"Podaj liczbe n\n";
    std::cin>>N;

    // ITERACYJNIE
    // if (N>3)
    // {
    //     for (int i = 3; i <= N; i++)
    //         {
    //             Ciag[i] = (-1)*Ciag[i-1]*Ciag[i-2];    
    //         }
    // }
    
    // std::cout<<" N-ty wyraz ciagu wynosi "<<Ciag[N];

    std::cout<<" N-ty wyraz ciagu wynosi "<<Znajdz(N);

        
    return 0; 
}