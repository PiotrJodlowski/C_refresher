#include<iostream>
using namespace std;

enum Stopnie{C, K, F}; //zmienna wyliczeniowa przyjmujaca konretne wartosci C, K, F
            
class Calc  //definicja klasy, czyli rozbudowanego typu zlozonego skladajacego sie z pol (zmienne) i metod(funkcje)
{
public:
       int Wartosc; 												//pole
       Stopnie Skala;												//pole
       void ObliczTemperature(Stopnie Skala, int Wartosc);          //metoda
        ~Calc();  // destruktor
};


Calc::~Calc() //metoda destruktor;
{};


void Calc::ObliczTemperature(Stopnie Skala, int Wartosc) //implementacja metody. 
														 //Zwróć uwagę na calc::
{
float Wynik_C, Wynik_K, Wynik_F;

 switch (Skala)
 {
 case 'C': 
       {
           Wynik_C=Wartosc;
           Wynik_F=Wartosc+32;
           Wynik_K=Wartosc+273.15;
       }      
       break;
 case 'F': 
       {
           Wynik_C=Wartosc/2 -32;
           Wynik_F=2*Wartosc;
           Wynik_K=Wartosc/2 -32 + 273.15;
       }     
       break; 
case 'K': 
       {
           Wynik_C=Wartosc - 273;
           Wynik_F=(Wartosc -273)*2 +32;
           Wynik_K=Wartosc;
       } 
       break;
 default:
     break;
 }

    cout<<"Temperatura w C= "<<Wynik_C<<"\n";
    cout<<"Temperatura w F= "<<Wynik_F<<"\n";
    cout<<"Temperatura w K= "<<Wynik_K<<"\n";
}

void main()
{
    Calc Kalkulator;
    char chSkala;

    cout<<"Projektowanie objektowe. Kalkulator Temperatury\n";
    cout<<"C - Clecius   F- Farenheit   K-Kelvin \n";
    cout<<"Podaj jednostki. \n";
    std::cin>>chSkala;
    if (chSkala!='C' && chSkala!='F' && chSkala!='K') return;   
    cout<<"Podaj wartosc. \n";
    cin>>Kalkulator.Wartosc;
    Kalkulator.Skala = static_cast<Stopnie>(chSkala);
    cout<<Kalkulator.Skala;
    Kalkulator.ObliczTemperature(Kalkulator.Skala,Kalkulator.Wartosc);
    
}