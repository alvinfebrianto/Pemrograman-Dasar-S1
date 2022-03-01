// Program Dua Puluh Lima
// Program tukar menggunakan fungsi dengan parameter by value

#include <iostream>
#include <stdio.h>
#include <conio.h>

void tukar(int x, int y);							// deklarasi fungsi
main() {
	int a,b;
	
	system("cls");
	a=80;
	b=11;
	
	printf("Nilai sebelum pemanggilan fungsi \n");
	printf("a = %i \n",a);
	printf("b = %i \n",b);
	tukar(a,b);
	printf("Nilai setelah pemanggilan fungsi \n");
	printf("a = %i \n",a);
	printf("b = %i \n",b);
	
	getch();
}

void tukar(int px, int py) {						// definisi fungsi
	int z;
	
	z=px;
	px=py;
	py=z;
	
	printf("Nilai di akhir fungsi \n");
	printf("px = %i \n",px);
	printf("py = %i \n",py);
}
