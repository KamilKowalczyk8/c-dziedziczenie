#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 class osoba
{
	public:
   string imie, nazwisko, imie1, nazwisko1;

  public:
   void wprowadz();
   void wypisz();
   void wypisz1();
};
void osoba::wprowadz()
{
	cout <<"Podaj ucznia"<<endl;
	cin >>imie>> nazwisko;
	cout <<"Podaj nauczyciela"<<endl;
	cin >>imie1>> nazwisko1;
}
void osoba::wypisz()
{
 cout << imie <<" "<< nazwisko<<" ";

}
void osoba::wypisz1()
{
 cout << imie1 <<" "<< nazwisko1<<" ";

}


class uczen : public osoba
{
	public:
    string klasa;
    int numer_dziennika;
   public:
    void wypisz_ucznia()
    {
       cout << klasa << " " << numer_dziennika;
        wypisz();
         }
    void wprowadz()
    {
    	cout<<endl;
    	cout<<"Klasa i numer";
    		cout<<endl;
    cin>>klasa;
    cin>>numer_dziennika; 
    	cout<<endl;
    }
};
class nauczyciel : public osoba
{
	public:
    string klasa;
    string przedmiot;
   public:
    void nau()
    {
       cout << klasa << " " << przedmiot;
        wypisz1();
         }
    void wprowadz()
    {
    	  	cout<<endl;
    	  	cout<<"Klasa i przedmiot";
    	  		cout<<endl;
    cin>>klasa;
    cin>>przedmiot; 
    	
    }
};

int main()
{
	osoba o1;
	o1.wprowadz();
	o1.wypisz();
    uczen u1;
    u1.wprowadz();
    u1.wypisz_ucznia();
    o1.wypisz();
    nauczyciel n1;
     n1.wprowadz();
    n1.nau();
    	o1.wypisz1();
    
}

 
 

