#include<iostream>
using namespace std;

long long tab[10] = {2,4,6,8,10,12,14,16,18,20}; //tablica z posortowanymi elementami

//l - lewy index tablicy, p - prawy index tablicy
int szukaj(int l, int p, long szukana) 
{
    if(l>p)
       return -1;
       
	int sr = (l+p)/2;
     if(szukana == tab[sr])
	  	return sr+1;
    
    if(szukana < tab[sr])
        return szukaj(l,sr-1,szukana); //przeszukujemy lewą część tablicy
    else
        return szukaj(sr+1,p,szukana); //przeszukujemy prawą część tablicy
}

int main()
{
	long long szukana;
	
	cout<<"Podaj liczbe: \n";
	cin>>szukana;
 	int pozycja = szukaj(0,9,szukana);
 
	if(pozycja==-1)
		cout<<"Liczba "<<szukana<<" nie wystepuje w zbiorze"<<endl;
	else
		cout<<"Liczba "<<szukana<<" wystepuje w zbiorze w komorce o numerze "<<pozycja<<endl;
 
	return 0;
}