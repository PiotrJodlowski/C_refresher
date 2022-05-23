#include<iostream>
using namespace std;
 
int Znajdz(int N)
{
    if(N==1) return 1;
    if(N==2) return 1;
    return Znajdz(N-2)+Znajdz(N-1);
}
 
int main()
{
    int N;
    
    cout<<"Zadanie 3. Rekurencja.Ciag Fibonnaciego\n";
    cout<<"Podaj ktory wyraz ciagu: ";
    cin>>N;
 
    cout<<"N-ty wyrac ciagu wynosi "<<Znajdz(N);

    return 0;
}