#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	string nama;
	char golongan;
	int jam_kerja, upah_per_jam, total_upah;
	
	cout << " Program Menghitung Gaji Karyawan\n\n";
	
	cout << " Nama Karyawan: ";
	getline(cin, nama);
	cout << " Golongan (A/B/C/D): ";
	cin >> golongan;
	cout << " Jumlah Jam Kerja: ";
	cin >> jam_kerja;
	
	switch (golongan) {
		case 'A':
			upah_per_jam = 5000;
			break;
		case 'B':
			upah_per_jam = 7000;
			break;
		case 'C':
			upah_per_jam = 8000;
			break;
		case 'D':
			upah_per_jam = 10000;
			break;
	}
	
	total_upah = jam_kerja*upah_per_jam;
	
	if ((jam_kerja-48)>0) {
	     total_upah = total_upah+((jam_kerja-48)*4000);
	}
	
	cout << " " << nama << " menerima upah Rp." << total_upah << " per minggu";
	
	getch();
}
