//Araba kiralama ücreti hesaplama
//İlk yedi gün için günlük 65 tl kira olacak
//Eğer gün sayısı 7 yi aşarsa sonraki her gün için günlük ücrete %16 iskonto(indirim) uygulanacak

#include<iostream>
using namespace std;

int main() {
	int gun;
	double ucret;

	cout << "kiraladiginiz gun sayisini giriniz: ";
	cin >> gun;

	if (gun <= 0) {
		cout << "once araba kiralamalisiniz!";
	}
	else if (gun <= 7) {
		ucret = gun * 65;
		cout << " odemeniz gereken tutar TL cinsinden: " << ucret;
	}
	else { //eger gun 7 yi aşarsa
		ucret = (7 * 65) + (gun - 7) * (65 * 0.84);   //%16 indirim varsa o zaman %84 ten satış yapılır
		cout << "odemeniz gereken tutar tl cinsinden: " << ucret;
	}
	cout << endl;
}
