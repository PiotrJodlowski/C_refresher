#include <iostream>
using namespace std;

//klasa bazowa
class CRectangle  
{
private:
    int dl_bok1, dl_bok2;
    // ___________________________________________________________________________________________________
public:
    CRectangle()                         { dl_bok1 = 1; dl_bok2=2;}  
    CRectangle(int bokA, int bokB)       { dl_bok1 = bokA; dl_bok2 = bokB;} 
    // ___________________________________________________________________________________________________
    //metody
    int Pole()  { return dl_bok1 * dl_bok2;}
    int Obwod() { return 2 * dl_bok1 + 2* dl_bok2;}
};

//klasa pochodna
class CSquare:public CRectangle //Csquare dziedziczy od CRectangle, ma swoje pola private i zmodyfikowane metody Pole i Obwod
{
private:
    int dl_bok;
    // ___________________________________________________________________________________________________
public:
    CSquare()             { dl_bok = 1;}  
    CSquare(int bokA)     { dl_bok = bokA; } 
    // ___________________________________________________________________________________________________
    //metody
    int Pole()  { return dl_bok * dl_bok;} //zmodyfikowane metody klasy bazowej
    int Obwod() { return 4 * dl_bok;}
};

void main()
{

}