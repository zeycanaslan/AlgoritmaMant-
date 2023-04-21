//BİR BİSİKLET KİRALAMA FİRMASI
//İLK 30 DK İÇİN SABİT UCRET 5 TL OLCAK EXTRA HER DK İÇİN 0.25 TL(25 KRŞ) ODİYCEK
//Müşterinin kiraladığı süre boyunca ödemesi gereken ücreti bulan kod parçası

#include<iostream>
using namespace std;

int main() {

	int dakika;
	double ucret;

	cout << "kiraladagi dakikayi giriniz: ";
	cin >> dakika;
	cout << endl;

	if (dakika <= 0) {
		cout << "once bisiklet kiralamalisin\n";
	}
	else if (dakika <= 30) {
		cout << "odemeniz gereken tutar sabit ve 5 tl\n ";
	}
	else {    //dakika 30 u geçtiyse bu blok çalışır
		ucret = 5 + (double)(dakika - 30) * 0.25;
		cout << "odemeniz gereken tutar " << ucret << endl;
	}
}
