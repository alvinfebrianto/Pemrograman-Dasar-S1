// Program Menentukan Tahun Kabisat

#include <iostream>
#include <conio.h>
using namespace std;

main() {
	int tahun;
	
	cout << " Program Menentukan Tahun Kabisat\n\n";
	cout << " Masukkan Tahun: ";
	cin >> tahun;
	cout << endl;
	
	if (tahun % 4 == 0) {
		if (tahun % 100 == 0) {
			if (tahun % 400 == 0)
			    cout << " Tahun " << tahun << " adalah Tahun Kabisat.";
			else
			    cout << " Tahun " << tahun << " Bukan Tahun Kabisat.";
		}
		else
		    cout << " Tahun " << tahun << " adalah Tahun Kabisat.";
	}
	else
		cout << " Tahun " << tahun << " Bukan Tahun Kabisat.";
	
	getch();
}
