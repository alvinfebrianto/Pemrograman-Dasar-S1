#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    string nama;
    int tW, jam, tJ, menit, tM, detik, tD, w;
 
    cout << " Tarif Rp. 5000 per 1 jam\n\n";
    cout << " Nama Pengguna: ";
    getline(cin, nama);
    cout << " Durasi Bermain\n";
    cout << " Berapa Jam: ";
    cin >> jam;
    cout << " Berapa Menit: ";
    cin >> menit;
    cout << " Berapa Detik: ";
    cin >> detik;
 
    tJ = jam*5000;
    tM = menit*2500/30;
    tD = detik*2500/1800;
 
    tW = tJ+tM+tD;
    cout << " Total Pembayaran: Rp." << tW << endl;
    
    getch();
}
