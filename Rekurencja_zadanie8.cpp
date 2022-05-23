// #include <iostream>

// rekurencyjnie METODA YODLOVSKIEGO!!!!

// int Znajdz(int N, int M, int D)
//     {
//        if (N%D==0 && M%D==0)  return D;
//        if (N%D!=0 || M%D!=0) return Znajdz (N,M,D-1);
//     }

// int main()
// {
  
//     int N=1;
//     int M=1;

//     std::cout<<"C1. Rekurencja. Algorytm Euklidesa - Najwiekszy wspolny dzielnik\n";
//     std::cout<<"Podaj pierwsza mniejsza liczbe n\n";
//     std::cin>>N;
//     std::cout<<"Podaj druga druga wieksza liczbe n\n";
//     std::cin>>M;
//     std::cout<<" Najwiekszy wspolny dzielnik wynosi "<<Znajdz(N,M,N/2);
        
//     return 0; 
// }



#include<iostream>
using namespace std;
 
int NWD(int a, int b)
{
    if(b!=0)
    	return NWD(b,a%b);
	
    return a;
}
 
int main()
{
    int a, b;
 
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
 
    cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;

    return 0;
}