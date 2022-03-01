#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10
using namespace std;

int binsearch(int[], int, int, int);
int binsearch(int a[], int x, int low, int high) {
  int mid;
  if (low > high)
    return -1;
  mid = (low + high) / 2;
  if (x == a[mid]) {
    return (mid);
  } else if (x < a[mid]) {
    binsearch(a, x, low, mid - 1);
  } else {
    binsearch(a, x, mid + 1, high);
  }
}

int main() {
  int num, i, key, position;
  int low, high, list[size];

  cout << "\n Total Data yang akan diinput: ";
  cin >> num;
  cout << "\n Masukan Data: ";
  for (i = 0; i < num; i++) {
    cin >> list[i];
    cout << endl;
  }
  low = 0;
  high = num - 1;
  cout << "\n Masukan Data yang ingin dicari: ";
  cin >> key;
  position = binsearch(list, key, low, high);
  if (position != -1) {
    cout << "\n Data " << key << " berada pada Index ke-" << position << endl;
  } else
    cout << "\n Data tidak di temukan" << endl;

  getch();
}
