//Bir öğretim üyesi haftalık 10 saat zorunlu derse girdikten sonra max 20 saatlik ek ders verme hakkına sahip oluyor ve bu ücret günlük 8 TL
//Buna göre bu oğretim üyesinin AYLIK ek gelirini hesaplayın
//3 durum vardır 

#include<iostream>
using namespace std;
int main() {
	int saat, ucret;

	cout << "haftalik ders saatini giriniz: ";
	cin >> saat;

	if (saat <= 0) {
		cout << "once bir derse girmelisiniz!";
	}
	//10 saati zorunlu olarak giriyor ayrica en fazla 20 saat ek ders ücreti alabileceği için haftalık hep sabit 20 saat üzerinden değerlendirilir
	else if (saat>=30) { //burda 10 + 20 + ucreti verilmiyecek olan ders saati verilmiştir(20 den fazla yaparsa onların ücreti alınmıyor)
		ucret = 4*20 * 8;
		cout << "ek geliriniz: " << ucret;
		cout << endl;
	}
	//burda 10 saat zorunlu sonraki saatler için haftalık ücret alır ve 20 ek saat dersini geçmiycek
	else if (saat > 10) {
		ucret = 4 * (saat - 10) * 8;
		cout << "ek geliriniz: " << ucret;
	}
	else if (saat <= 10) {
		cout << "gelir yok git once 10 derse gir";
	}
}
