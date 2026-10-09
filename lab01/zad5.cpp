#include<iostream>
#include <iomanip>
using namespace std;

int main() {
  double R =3
  double pi=3.14

  double obwod = 2 * pi * R ;
  double pole = pi * R * R ;

cout << fixed << setpricision(2) ;
cout << " R = " << R << endl;
cout << " Obwod : " << obwod << endl ;
cout << "Pole : " << pole << endl ;

return 0 ;
} 
