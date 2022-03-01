#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int lembar, harga, bayar;
	char nama, jenis_pelanggan;
	
	cout << "Ketik 1 jika pelanggan" << endl;
	cout << "Ketik 0 jika bukan pelanggan" << endl;
	
	cout<<"GRAFITY Fotocopy";
	cout<<"\nApakah anda pelanggan? ";
	cin>>jenis_pelanggan;	
	cout<<"\nMasukkan jumlah banyak fotocopy anda = ";
	cin>>lembar;
	
	if(jenis_pelanggan==1){
		harga=75*lembar;
		cout << "Harga = " << harga << endl;
		bayar = lembar*harga;
		cout << "Bayar = " << bayar << endl;
	}
	else {
		if(lembar<=100){
			harga=150*lembar;
			cout << "Harga = " << harga << endl;
			bayar = lembar*harga;
			cout << "Bayar = " << bayar << endl;
		}
		else if(lembar<=200){
			harga=100*lembar;
			cout << "Harga = " << harga << endl;
			bayar = lembar*harga;
			cout << "Bayar = " << bayar << endl;
		}
		else if(lembar>=200){
			harga=80*lembar;
			cout << "Harga = " << harga << endl;
			bayar = lembar*harga;
			cout << "Bayar = " << bayar << endl;
		}
		else{
		cout << "LEMBAR SALAH";
		}	
	}
	getch();
}
