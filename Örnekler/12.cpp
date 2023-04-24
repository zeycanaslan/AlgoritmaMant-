//KULLANICININ GİRDİĞİ SAYININ KAÇ GÜN SAAT DAKİKA ve SANİYE OLDUĞUNU HESAPLAR

#include<iostream>
using namespace std;

int main() {

	int sayac;
	int gun, saat, dakika, saniye;

	cout << "Ulasmak istediginiz sayac degerini saniye cinsinden girin: ";
	cin >> sayac;

	gun = sayac / (24 * 60 * 60);  //bir gün 24 saat bir saat 60 dk bir dk 60 sn 
	sayac= sayac % (24 * 3600);

	saat = sayac / 3600;
	sayac %= 3600;

	dakika = sayac / 60;
	sayac %= 60;

	saniye = sayac;

	cout << "giridiginiz sayac degiskeni: " << gun << " gun " << saat << " saat " << dakika << " dakika " << saniye << " saniyeye denk gelir.\n";

	return 0;
}
