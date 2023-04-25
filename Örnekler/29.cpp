//iki tam sayiyi toplama yoluyla çarpma

#include<iostream>
using namespace std;

int Toplama(int, int);  //fonksiyon prototipi(imzası)

//fonksiyonu çağırıyoruz
int main() {
	
	cout << Toplama(5,6);
	return 0;
}

// fonksiyon tanımı
int Toplama(int sayi1, int sayi2) {
	int toplam = 0;

	if (sayi1 < 0) {
		sayi1 *= -1;
	}
	for (int i = 1; i <= sayi1; i++) { //sayi1 kere döngü çalışacak
		toplam = toplam + sayi2;
		cout << toplam<<" ";   //bununla toplamlarıda tek tek yazıyoruz 
	}
	cout << endl;
	return toplam;  //toplamı döndürerek sonucu bulmuş oluruz
}
