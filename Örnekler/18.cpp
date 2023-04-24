//KULLANICININ GİRECEĞİ BİLGİLERE GÖRE FAİZ HESABI

#include<iostream>
using namespace std;

int main() {

	int anapara, faiz, kat, anaparaKopya;
	int sayac = 0;

	cout << "anaparanizi giriniz: ";
	cin >> anapara;

	cout << "kac faizle hesaplansin: ";
	cin >> faiz;

	cout << "kac katina ciksin paraniz: ";
	cin >> kat;
	cout << endl;
	anaparaKopya = anapara;  //anapara her yıl artacağı için kopyası saklanmalıdır

	if (anapara > 0 && faiz > 0 && kat > 00) {

		while (anapara < anaparaKopya * kat) {
			anapara += anapara * faiz * (0.01);
			sayac++;
		}
		cout << anaparaKopya << " TL anapara yillik  yuzde " << faiz << " orani ile " << sayac << " yil sonra en az " << kat << " katina ulasir..." << endl;
	}
	else
		cout << "negatif degerler girilemez!!!";

	return 0;
}
