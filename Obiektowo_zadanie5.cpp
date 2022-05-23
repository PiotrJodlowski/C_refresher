#include <iostream>
#include <ctime>
using namespace std;

enum TYP {
            Samolot,
            Czolg,
            Okret,
            Nieznana,
         };


class CSilnik
{
    private:
        int m_Moc;
    public:
        CSilnik()           {m_Moc =500;};
        CSilnik(int Moc)    {m_Moc = Moc;};
        void Pracuj()   {cout<<"Silnik dziala\n";};
};



//klasa bazowa jako klasa Abstrakcyjna z metodami Pure Virtual
class IWeapon
{
private:
    TYP m_tRodzaj;
    // ___________________________________________________________________________________________________
    // Kreatory
public:
    IWeapon()                    { m_tRodzaj = Samolot;}  
    IWeapon(TYP Rodzaj)          { m_tRodzaj = Rodzaj;} 
    // ___________________________________________________________________________________________________
    //metody Pure Virtual beda implementowane w podklasach
    virtual void Dane() = 0;
    virtual void Strzelaj() = 0;
    virtual void Lataj() = 0;
    virtual void Jezdzij() = 0;
    virtual void Plywaj() = 0;
    TYP type() const {return Nieznana;};

    virtual ~IWeapon() {;};  // destruktor koniecznie jako metoda wirtualna
};


class CSamolot:public IWeapon    //klasa pochodna od IWeapon, poniewaz klasa IWeapon jest pure virtual to musimy zdefiniowac wszystkie metody w klasach pochodnych
{
private: 
    int m_Predkosc;
public:
    CSamolot()                  {m_Predkosc = 0;};
    CSamolot(int Predkosc)      {m_Predkosc = Predkosc;};
    void Dane()                 {cout<<"F-16 \n";};
    void Strzelaj()             {cout<<"Strzela rakiety \n";};
    void Lataj()                {cout<<"Lata szybko \n";};
    void Jezdzij()              {cout<<"Samolot koluje \n";};
    void Plywaj()               {cout<<"Samolot nie plywa \n";};
    // metody zwracajace wartosc
    TYP type() const {return Samolot;};
};


class CCzolg:public IWeapon    //klasa pochodna od IWeapon. Klasa zawiera obiekt typu Silnik
{
private: 
    int m_Predkosc;
    CSilnik* pEngine();  //obiekt Silnik w obiekcie Czolg
public:
    CCzolg()                    {m_Predkosc = 0;};
    CCzolg(int Predkosc)        {m_Predkosc = Predkosc;};
    void Dane()                 {cout<<"T-90 \n";};
    void Strzelaj()             {cout<<"Strzela z dziala \n";};
    void Jezdzij()              {cout<<"Jezdzi na gonsiennicach \n";};
    void Plywaj()               {cout<<"Czolg nie plywa \n";};
    void Lataj()                {cout<<"Czolg nie lata \n";};
    // metody zwracajace wartosc
    TYP type() const {return Czolg;};
};

class COkret:public IWeapon    //klasa pochodna od IWeapon
{
private: 
    int m_Predkosc;
public:
    COkret()                    {m_Predkosc = 0;};
    COkret(int Predkosc)        {m_Predkosc = Predkosc;};
    void Dane()                 {cout<<"Okret klasy Iowa \n";};
    void Strzelaj()             {cout<<"Strzela z dział i rakiet \n";};
    void Plywaj()               {cout<<"Plywa z predkoscia 40w \n";};
    void Jezdzij()              {cout<<"Okret nie jezdzi \n";};
    void Lataj()                {cout<<"Okret nie lata \n";};
    // metody zwracajace wartosc
    TYP type() const {return Okret;};
};


IWeapon* StworzLosowoBron()  //Funkcja wykorzystujaca polimorfizm. Zwraca wskaznik do losowo stworzonego obiektu jednej z podklasy 
// WAKAZNIK NA OBIEKT KLASY BAZOWEJ MOZE WSKAZYWAC TAKZE NA OBIEKT KTOREJKOLWIEK Z JEGO KLAS POCHODNYCH
{
    switch (rand()%3)
    {
    case 0: return new CSamolot;
    case 1: return new CCzolg;
    case 2: return new COkret;           
    default: return NULL;
    }
}

void main()
{
    srand(static_cast<unsigned>(time(NULL))); //wlaczenie randoma
    IWeapon* pBron =StworzLosowoBron(); // stworzenie wskaznika klasy IWeapon do biektu stworzonego losowo funkcja StworzBronLosowo
    // w tym momencie nie wiemy jaki obiekt powstal, ale znamy wskaznik do niego. Mozemy wyluskac ta informacje za pomoca rzutowania
   

    // // RZUTOWANIE PRZY WYKORZYSTANIU STATIC_CAST - nie wiem, czemu nie dziala
    // switch(pBron->type())
    // {
    //     case Samolot:static_cast<CSamolot*>(pBron)->Dane(); break;
    //     case Czolg:static_cast<CCzolg*>(pBron)->Dane(); break;
    //     case Okret:static_cast<COkret*>(pBron)->Dane(); break;
    // };

    // RZUTOWANIE PRZY WYKORZYSTANIU DYNAMIC_CAST
    CSamolot* pPlane = dynamic_cast<CSamolot*>(pBron); // tworzymy wskaznik do obiektu wskazywanego przez wskaznik pBron
    if (pPlane!=NULL) {pPlane->Dane();}
    else {cout<<"Obiekt to nie samolot \n";};               // jezeli wskaznik nie bedzie pusty to obiekt jest klasy CSamolot

    //to samo dla podklas Cczolg i COkret
    CCzolg* pTank = dynamic_cast<CCzolg*>(pBron); 
    if (pTank!=NULL) {pTank->Dane();}
    else {cout<<"Obiekt to nie czolg \n";};               

    COkret* pShip = dynamic_cast<COkret*>(pBron); 
    if (pShip!=NULL) {pShip->Dane();}
    else {cout<<"Obiekt to nie okret \n";};       

}
