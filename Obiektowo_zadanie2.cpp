#include <iostream>
using namespace std;

enum COLOR 
        {   COLOR_RED,   // 0 wartosci zwrazana
            COLOR_WHITE, // 1
            COLOR_GREEN, // 2
            COLOR_BLUE,  // 3
        };

class CLamp
{
private:
    COLOR mKolor;                //kolor lampy
    bool m_bWlaczona;            //czy jest wlaczona
    // ___________________________________________________________________________________________________
public:
    /* KONSTRUKTORZY. Klasa moze posiadac kilka konstruktorow -tak jak tutaj. 
     Dzialaja one wtedy podobnie jak funkcje przeciazone. Decyzja, ktory z nich faktycznie
     zostanie wywolany, zalezy wiec od instrukcji tworzacej obiekt. */

    CLamp()                 { mKolor = COLOR_WHITE;}    //przypisanie poczatkowej wartosci white (Opcja1)
    CLamp(COLOR Kolor)      { mKolor = Kolor;}          //parametryzowany konstruktor            (Opcja2)
    // ___________________________________________________________________________________________________
    //metody
    void Wlacz()  { m_bWlaczona=true;}
    void Wylacz() { m_bWlaczona = false;}
    // ___________________________________________________________________________________________________
    // Metody dostepne do pol. Tu zwracaja stan lampy
    COLOR Kolor() const     {return mKolor;}
    bool Wlaczona() const   {return m_bWlaczona;}

};

void main()
{

    CLamp Lampa1 (COLOR_RED);  //tworzenie objektu za pomoca konstruktora - Opcja2
    Lampa1.Wlacz();            //wywolanie metody Wlacz()
    cout<<"Czy Lampa jest wlaczona i jakiego koloru?\n";
    cout<<"Jest koloru: "<<Lampa1.Kolor()<<" i jest wlaczona= "<<Lampa1.Wlaczona();

}