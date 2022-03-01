// Kalkulator

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

main() {
	int a, b, pilih;
	float hasil;
	char op;
	
	cout << " Operator Aritmatika\n\n";
	cout << " 1) Penjumlahan\n";
	cout << " 2) Pengurangan\n";
	cout << " 3) Perkalian\n";
	cout << " 4) Pembagian\n";
	cout << " 5) Modulus\n";
	cout << "\n Pilih Operator Aritmatika: ";
	cin >> pilih;
	cout << " Bilangan Pertama         : ";
	cin >> a;
	cout << " Bilangan Kedua           : ";
	cin >> b;
	
	switch(pilih) {
		case 1 : hasil = a+b;
		         op = '+';
		         break;
		case 2 : hasil = a-b;
		         op = '-';
		         break;
		case 3 : hasil = a*b;
		         op = '*';
		         break;
		case 4 : hasil = a/b;
		         op = '/';
		         break;
		case 5 : hasil = a%b;
		         op = '%';
		         break;
		default:
			     cout << " Operasi yang Anda Masukkan Salah\n";
	}
	
	cout << "\n " << a << op << b <<" = " << hasil << endl;
	
	getch();
}
