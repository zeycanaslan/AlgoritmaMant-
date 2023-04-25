
//Kendisine parametre olarak gönderilen 3 sayının MİN bulma 

#include<iostream>
using namespace std;

int MinBul(int, int, int);

int main() {

	cout << MinBul(7,3,2);
	return 0;
}

int MinBul(int sayi1, int sayi2, int sayi3) {
	int min = sayi1;

	if (sayi2 < min) {
		min= sayi2;    // return sayi2 diyince alta gidip tekrar kontrol etmez yani direkt sayi2 yi döndürür
	}
	if (sayi3 < min)   //ELSE İF OLMAZ. if olmalı çünkü hepsini kotrol edmeliyiz.
		min= sayi3;

	return min;   //min değerini döndürerek sonucu buluruz.
}

