# include <iostream>
# include<ctime>
using namespace std;


// WZKAZNIKI DO TABELI JEDNOWYMIAROWEJ

class Array
{
    private:
        int m_nRozmiar;
        int* m_pnTablica;  // wskaznik na tablice
    public:
    // konstruktorzy
        Array()               {
                                m_nRozmiar = 5;  //defaultowa wielkosc tabeli:5 
                                m_pnTablica = new int [m_nRozmiar]; //tworzenie tablicy 
                              };
        Array(int Rozmiar_a)    {
                                m_nRozmiar = Rozmiar_a;
                                m_pnTablica = new int [m_nRozmiar];
                              };
    // metody operacji na tablicy
    
        bool Wypelnij(int index, int wartosc)       // wypelnienie tablicy
            {
               if (index>=m_nRozmiar) return false;
               m_pnTablica[index] = wartosc;   
               return true;
            };
            
        int Wypisz(int index) const
            {
               if (index < m_nRozmiar) return m_pnTablica[index];
               else return 0;     
            }
    
        // metoda wypisujaca rozmiar tabeli, musi byc wykonana bo dostep do m_nRozmiar jest z poziomu klasy
        int Rozmiar() const {return m_nRozmiar;};
    
    // destruktor
    ~Array() { delete[] m_pnTablica;};
};



int main()
{
    srand(time(NULL));
    cout<<"Tworzenie tablicy losowo elementowej z losowymi elementami \n";
    Array Tablica(rand()%10); //tworzymy nowy obiekt Array random elementow
    cout<<"Rozmiar Tabeli: "<<Tablica.Rozmiar()<<"\n";
    
    for (int i = 0; i < Tablica.Rozmiar(); i++)
        Tablica.Wypelnij(i, rand()%10);    
    
    for (int i = 0; i < Tablica.Rozmiar(); i++)
        cout<<Tablica.Wypisz(i)<<": ";      
    
    return 0;     
}