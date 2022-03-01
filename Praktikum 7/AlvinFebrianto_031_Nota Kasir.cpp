#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
	ofstream save;
	char nb[100], yn;
	int i, hs, j, t, tb=0;
	
	save.open("nota.txt");
	save<<"                         NOTA BELANJA                         "<<endl;
	save<<"=============================================================="<<endl;
	save<<"| no |  nama barang  | harga satuan | jumlah |  total harga  |"<<endl;
	save<<"=============================================================="<<endl;
	
	for(i=0; i<=4; i++) {
		input:
		cout << " Pembelian Barang Ke-" << i+1 << endl;
		cout << " =====================" << endl;
		cout << " Nama Barang        : "; cin >> nb;
		cout << " Harga Satuan       : "; cin >> hs;
		cout << " Jumlah yang Dibeli : "; cin >> j;
		t=hs*j;
		tb=tb+t;
		
		yn:
		cout<<"\n Ada barang lain lagi yang dibeli --maks 5-- (Y/N)? "; cin>>yn;
		cout<<endl;
		if(yn=='Y' || yn=='y') {
			cout<<endl;
		} else if(yn=='N' || yn=='n') {
			goto nota;
		} else {
			cout<<"input anda salah!";
			goto yn;
		}
		if(i>=5) {
			goto nota;
		}
		save<<"|"<<setiosflags(ios::right)<<setw(4)<<i+1;
		save<<"|"<<setiosflags(ios::right)<<setw(15)<<nb;
		save<<"|"<<setiosflags(ios::right)<<setw(14)<<hs;
		save<<"|"<<setiosflags(ios::right)<<setw(8)<<j;
		save<<"|"<<setiosflags(ios::right)<<setw(15)<<t<<"|"<<endl;
	}
	
	nota:
	save<<"|"<<setiosflags(ios::right)<<setw(4)<<i+1;
	save<<"|"<<setiosflags(ios::right)<<setw(15)<<nb;
	save<<"|"<<setiosflags(ios::right)<<setw(14)<<hs;
	save<<"|"<<setiosflags(ios::right)<<setw(8)<<j;
	save<<"|"<<setiosflags(ios::right)<<setw(15)<<t<<"|"<<endl;
	save<<"=============================================================="<<endl;
	save<<" total belanja (Rp)"<<setiosflags(ios::right)<<setw(27);
	save<<"|"<<setiosflags(ios::right)<<setw(15)<<tb<<"|"<<endl;
	save<<"=============================================================="<<endl;
	save.close();
	
	return 0;
}
