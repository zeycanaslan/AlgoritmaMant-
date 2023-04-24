//KULLANICININ GİRDİĞİ ALT VE ÜST LİMİTLER ARASINDAKİ ÇİFT SAYILARIN KARELERİ TOPLAMI FOR ile

#include<iostream>
using namespace std;

int main() {

	int alt, ust, kareToplam = 0;
	int ciftAdedi = 0;
	int i,kare;

	cout << "Alt limiti giriniz:";
	cin >> alt;
		
	cout << "Ust limiti giriniz:";
	cin >> ust;

	for (i = alt; i <= ust; i++) {
		if (i % 2 == 0) {  //çift olma kontrolü
			ciftAdedi += 1;
			kare = i * i;
			kareToplam += kare;
		}
	}

	cout << ciftAdedi << " tane cift sayi vardir " << endl;
	cout << "karetoplamlari " << kareToplam << endl;
}

