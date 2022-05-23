# include <iostream>
using namespace std;


int Podziel(int Dzielna, int Dzielnik, int* pReszta) // wchodzimy z adresem pamieci, ktory staje sie wskaznikiem pReszta
{
    *pReszta = Dzielna % Dzielnik; //Dereferencja wskaznika z *. Zmienna o adresie staje pReszta sie Dzieln a %Dzielnik
     return Dzielna/Dzielnik;

}


void main()
{
    int nDzielna, nDzielnik;
    int nIloczyn;
    int nReszta =0;

    cout<<"Podaj dzielna\n";
    cin>>nDzielna;
    cout<<"Podaj dzielnik \n";
    cin>>nDzielnik;
    nIloczyn = Podziel(nDzielna, nDzielnik, &nReszta);  //wylamy adres pamieci przechowujacy zmienna nReszta

    cout<<"Iloczyn z dzielenia "<<nDzielna<<" przez "<<nDzielnik<<" wynosi ";
    cout<<nIloczyn<<" reszty "<<nReszta; //wypisanie zmiennej nReszta z pamieci

}