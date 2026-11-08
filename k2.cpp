#include<iostream>
using napespace std ;

int main () {
  char rodzaj ; 
int godziny ; 
cout << " POdaj rodzaj roweru (M / T /E ) :" ;
  cin >> rodzaj ;

cout << " Podaj liczbe godzin : " ;
cin >> godziny ; 

if ( rodzaj == ' M ' ) {
cena =10 ; 
}
else if( rodzaj == ' T ' ) { 
cena = 15 ; 
} 
else if ( rodzaj == ' E ' ) { 
cena = 20 ; 
} 
else { 
cout << " Nieprawidlowy rodzaj roweru " ; 
return 0 ; 
}
cout << " Koszt wynajmu : " << cena * godzina<< endl ; 
return 0 ; 
} 

