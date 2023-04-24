//KULLANICININ GİRDİĞİ ALT VE ÜST LİMİTLER ARASINDAKİ TEK SAYILARIN TOPLAMI, ADEDİ ve ORTALAMSI WHİLE ile

#include<iostream>
using namespace std;

int main() {

	int alt, ust, toplam = 0;
	int i = 1;
	int tekAdedi=0;

	cout << "alt limiti giriniz:";
	cin >> alt;
	
	cout << "ust limiti giriniz:";
	cin >> ust;
	i = alt;

	while (i <= ust) {  //alt limit üst limittten küçük eşit olana kadar
		if (i % 2 == 1) {
			tekAdedi += 1;
			toplam = toplam + i;
		}
		i++;
	}
	double ortalama = toplam / tekAdedi;

	cout << "toplam: " << toplam << endl;
	cout << tekAdedi << " kadar tek sayi vardir " << endl;
	cout << "ortalama: " << ortalama << endl;
}
