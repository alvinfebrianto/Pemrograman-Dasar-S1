#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
	int i, n=6, b=3, j, pkt, jumlah;

	cout << " Program Menghitung Jumlah 6 Suku Pertama\n\n";
	for(i=1; i<=n; i++) {
		cout << " " << i << "^3,\t";
	}
	cout << endl;
	for (j=1; j<=n; j++) {
		pkt = pow(j,b);		
		cout << " " << pkt << ",\t";		
		jumlah=jumlah+pkt;
	}
	
	cout << "\n\n Jumlah deret ke-" << n << " = " << jumlah;
	
	getch();
}
