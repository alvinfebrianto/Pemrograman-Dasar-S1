#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c, i, n, jumlah;
	
	cout << " Program Menghitung Jumlah Deret Bilangan\n\n";
    
	cout << " Masukkan bilangan awal: "; cin >> a;
    cout << " Masukkan selisih: "; cin >> b;
    cout << " Masukkan deret ke-n: "; cin >> n;
    cout << "\n Deret ke-" << n << ": ";
    cout << a << ", ";
    
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout << c << ", ";
             jumlah=jumlah+c;
    }
     
    cout << "\n\n Jumlah deret ke-" << n << " = " << jumlah; 
     
    getch();
}
