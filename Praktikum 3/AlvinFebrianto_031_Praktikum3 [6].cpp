#include <iostream>
#include <conio.h>
using namespace std ;
 
int main() {
	cout << "\n\t\t\t    Tabel Perkalian\n\n" ;
   
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            cout << " " << i*j << "\t" ;
        }
            cout << "\n\n" ;
    }
    
    getch();
}
