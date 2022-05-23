#include<iostream>
#include<ctime>
using namespace std;


int main()
{
    int Tablica[9];
    //srand(time(NULL));

	cout<<"Tablice: Liczby parzyste i nieparzyste: \n";
	
  cout<<"Tablica. Wszystkie elementy: \n";
    for (int i = 0; i < 10; i++)
    {
      Tablica[i] = rand()%100;
      cout<<Tablica[i]<<" ";
    }
  cout<<endl;
  cout<<"Tablica. Elementy parzayste: \n";
    
    for (int i = 0; i < 10; i++)
    {
      if (Tablica[i] % 2 ==0) cout<<Tablica[i]<<" ";
    }
  cout<<endl;    
  cout<<"Tablica. Elementy nieparzayste: \n";
    for (int i = 0; i < 10; i++)
    {
      if (Tablica[i] % 2 !=0) cout<<Tablica[i]<<" ";
    }

 
	return 0;
}