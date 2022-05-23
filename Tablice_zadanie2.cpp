// ****************************** Metoda z przepisywaniem tablicy wyniku

// #include<iostream>
// #include<ctime>
// using namespace std;


//     int N;
//     int Licznik=0;
//     int MaxLicznik=0;


// int main()
// {
//     int Tablica[100];
//     int Wynik1 [100];
//     int Wynik2 [100];

 

//     cout<<"Tablice: Najwiekszy ciag liczbowy: \n";
//     cout<<"Podaj ile elementow: \n";
//     cin>>N;
	
//     cout<<"Tablica. Wszystkie elementy: \n";
//     for (int i = 0; i < N; i++)
//     {
//       Tablica[i] = rand()%9;
//       cout<<Tablica[i]<<" ";
//     }
//     cout<<endl;
//     for (int i = 0; i < N; i++) Wynik1[i]=0;
//     for (int i = 0; i < N; i++) Wynik2[i]=0;

//     Najmniejszy=Tablica[0];
//     Wynik1[0]=Najmniejszy;
    
     
//     for (int i = 0; i < N; i++)
//     {
//       if (Tablica[i] < Tablica[i+1]) 
//             {
//                 Wynik1[Licznik] = Tablica[i]; //tu jestem!!
//                 Licznik++;    
//             }   
             
            
//       if (Tablica[i] >= Tablica[i+1]) 
//             {
//                 if (MaxLicznik<Licznik) 
//                 {
//                     Wynik1[Licznik] = Tablica[i];
//                     MaxLicznik=Licznik;
//                     for (int i = 0; i < Licznik +1 ; i++)
//                     {
//                         Wynik2[i] = Wynik1[i]; //przepisz tablice Wynik1 do Wynik2
//                     }
                    
//                 }
//                 for (int i = 0; i < N; i++) Wynik1[i]=0; //wyczysc tablice Wynik1
//                 Licznik=0;
//             }
     
//     }

//     cout<<endl;
//     cout<<endl;

//     cout<<"Najdluszy ciag to: ";
//     for (int n = 0; n < MaxLicznik+1; n++) 
//      {
//          cout<<Wynik2[n]<<":";
//      }
//     cout<<"    "<<MaxLicznik+1;


 
// 	return 0;
// }

// ****************************** Z przesuwaniem poczatku tablicy
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int Tablica[100];
    int P = 0;
    int P1 = 0;  // poczatek tablicy
    int Licznik =1;
    int MaxLicznik = 0;

    cout<<"Tablice: Najwiekszy ciag liczbowy: \n";
    cout<<"Podaj ile elementow: \n";
    cin>>N;
	cout<<"Tablica. Wszystkie elementy: \n";

    for (int i = 0; i < N; i++)
    {
      Tablica[i] = rand()%10;
      cout<<Tablica[i]<<" ";
    }
    cout<<endl;
    

    for (int i = 0; i < N; i++)
    {
        if(Tablica[i]<Tablica[i+1])
            {
                Licznik++;
            }
            else
            {
                if (MaxLicznik<Licznik) 
                    {
                        P1 = P;
                        MaxLicznik=Licznik;
                        Licznik=1;
                        P = i+1;
                    }
                    else
                    {
                       P=i+1;
                       Licznik=1;
                    }
            }
        
    }
    
    cout<<"Najdluszy ciag to sklada sie z elementow: ";
    cout<<MaxLicznik<<"\n";

    
    for (int i = P1; i < (P1+MaxLicznik); i++) 
     {
         cout<<Tablica[i]<<":";
     }
    

}