//Çarpma yaparak üs alma
 
#include<iostream>
using namespace std;

int CarpmaYaparakUsAlma(int, int);

int main() {

	cout << CarpmaYaparakUsAlma(2, 5);

	return 0;
}

int CarpmaYaparakUsAlma(int sayi1, int sayi2) {
	int sonuc = 1;
	
	for (int i = 1; i <= sayi2; i++) {  ///sayi1^sayi2--->sayi2 kere sayi1 in kendisi ile carpılması demektir.
		sonuc = sonuc * sayi1;
	}
	return sonuc;
}
