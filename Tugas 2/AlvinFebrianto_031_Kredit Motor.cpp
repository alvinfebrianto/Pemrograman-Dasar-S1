#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int harga_pokok, harga_motor, lama_kredit, bunga, cicilan, total_harga_motor, keuntungan_dealer;
	
	cout << " Program Menghitung Kredit Motor\n\n";
	cout << " Harga Motor        : ";
	cin >> harga_motor;
	cout << " Lama Kredit (Bulan): ";
	cin >> lama_kredit;
	cout << endl;
	
	harga_pokok = harga_motor/lama_kredit;
	cout << " Harga Pokok       = " << harga_pokok << endl;
	bunga = harga_pokok*0.1;
	cout << " Bunga             = " << bunga << endl;
	cicilan = harga_pokok+bunga;
	cout << " Cicilan           = " << cicilan << endl;
	total_harga_motor = cicilan*lama_kredit;
	cout << " Total Harga Motor = " << total_harga_motor << endl;
	keuntungan_dealer = total_harga_motor-harga_motor;
	cout << " Keuntungan Dealer = " << keuntungan_dealer << endl;
	
	getch();
}
