#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
	int a[1000], b[1000], c[1000], n, j1, j2;
	float rata_pertahun, rata_tk, rata_te;
 
	cout << "\n Masukkan total data yang akan diinput: "; cin >> n;
	cout << endl;
	
	for(int i=0; i<n; i++) {
		cout << " Data ke-" << i+1 << endl;
		cout << " Tahun Prodi     : "; cin >> a[i];
  		cout << " Teknik Komputer : "; cin >> b[i];
  		cout << " Teknik Elektro  : "; cin >> c[i];
  		cout << endl;
	}
 	
	system("cls");
 	cout << "\n\t\t     Data Kelulusan Mahasiswa\n\n";
	cout << " ============================================================== " << endl;
	cout << "| Tahun Prodi  |  Teknik  | Teknik  |  Rata-rata kelulusan per |" << endl;
	cout << "|              | Komputer | Elektro |     tahun semua prodi    |" << endl;
	cout << " ============================================================== " << endl;
	
 	for(int i=0;i<n;i++) {
  		cout <<"| "<<setiosflags(ios::left)<<setw(13)<<a[i];
  		cout <<"| "<<setiosflags(ios::left)<<setw(9)<<b[i];
  		cout <<"| "<<setiosflags(ios::left)<<setw(8)<<c[i]; rata_pertahun=(b[i]+c[i])*0.5;
  		cout <<"| "<<setiosflags(ios::left)<<setw(24)<<rata_pertahun<<" |";
		cout <<"\n|--------------------------------------------------------------|\n";
	}
	
	j1=0;
	j2=0;
	for(int i=0; i<n; i++) {
		j1 = j1+b[i];
		j2 = j2+c[i];
		rata_tk = j1/n;
		rata_te = j2/n;
	}
	
	cout << "|  Rata-rata   |          |         |                          |" << endl;
	cout << "| pertahun per | "<<setiosflags(ios::left)<<setw(9)<<rata_tk;
	cout << "| "<<setiosflags(ios::left)<<setw(8)<<rata_te;
	cout << "|                          |" << endl;
	cout << "|    prodi     |          |         |                          |" << endl;
	cout << " ============================================================== " << endl;
	
	getch();
}
