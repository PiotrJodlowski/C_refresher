#include <iostream>

int Dwusilnia(int Liczba)
{
   int DSilnia=1;
   for (int i = Liczba; i > 1; i--) //mozna zapisac to i-=2
   {
       DSilnia*=i;
       i-=1;          // i=i-1; tu uzyskujemy przeskok o 2
   }  
   return DSilnia;
}


// long long dwusilnia(unsigned int n)
// {
// 	long long ds = 1; //zmienna przechowująca kolejne mnożenia

// 	for(;n>1;n-=2)
// 		ds*=n;

// 	return ds; 
// }



int main()
{
  
    int LiczbaA;
    std::cout<<"Zadanie 2. Dwusilnia !! czyli 5!! = 5 * 3 * 1\n";
    std::cout<<"Podaj Liczbe\n";
    std::cin>>LiczbaA;
    std::cout<<Dwusilnia(LiczbaA);    
    
    return 0; 
}