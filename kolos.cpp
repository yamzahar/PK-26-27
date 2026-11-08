#include<iostream>
using namespace std ; 

int main () { 
  int N ; 

cout << " Liczba pomirow : " ;
cin >> n ; 

while ( n <= 0 ) { 
cout << " Liczba pomiarow musi byc większa od zera " << endl ;
cout << " Liczba pomiarow  : " ; 
cin >> n ; 
}

cout << " Podaj temperatury : " ; 
int t ; 
cin >> t ; 
int  maxT = t ; 
int minT = t ; 

for( int i = 1 ;i < n ; i ++ ) { 
   cin  >> t ; 
if ( t > maxT ) maxT = t ; 
if ( t< minT ) min T = t ; 
} 
if ( maxT == minT ) { 
cout << " Wszystkie temperatury sa takie same" << maxT << endl ;
}
else { 
cout<< " Najwyzsza temperatura << maxT << endl ; 
cout << " Najmniejsza temperatura << minT << endl ; 
cout << " Roznica : " << maxT - minT << endl ; 
} 

return 0 ; 

