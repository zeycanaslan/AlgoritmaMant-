//ÇIKARMA YAPARAK BÖLME 


#include<iostream>
using namespace std;

int CikarmaYaparakBolme(int, int);

int main() {

	cout << CikarmaYaparakBolme(29,3);
	return 0;
}

int CikarmaYaparakBolme(int sayi1, int sayi2) {
	int sonuc = 1;
	int sayac = 0;

	while (sayi1 >=sayi2) {
			
			sayi1 = sayi1 - sayi2;  //her iterasyonda sayi1 den sayi2 yi çıkarırız
			sayac++;
	}
	return sayac;
}

