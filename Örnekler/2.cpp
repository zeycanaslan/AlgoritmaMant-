//3 KENARINI KULLANICIDAN ALAN ÜÇGENİN ALAN HESABI

#include<iostream>
using namespace std;

int main() {
	//1.adım: değişkenleri veri tipleri ile yaz
	int kenar1, kenar2, kenar3;
	int cevreYarisi;
	double alan;
	int ucgenMi;
  
	//2.adım: kullanıcıdan kenarları al
	cout << "ucgenin 3 kenarini giriniz: ";
	cin >> kenar1 >> kenar2 >> kenar3;
	cout << endl;

	//üçgen eşitsizliği ile üçgen olup olmadığını kontrol edelim

	ucgenMi = fabs(kenar1 - kenar2) < kenar3 && kenar3 < (kenar1 + kenar2) &&
		fabs(kenar1 - kenar3) < kenar2 && kenar2 < (kenar1 + kenar3) &&
		fabs(kenar2 - kenar3) < kenar1 && kenar1 < (kenar2 + kenar3);

	//3.adım ucgen kontrolu yap eger üçgense if bloğu içine gir değilse else ye git ve çalıştır
	if (ucgenMi) {
		cevreYarisi = (kenar1 + kenar2 + kenar3) / 2;
		alan = sqrt(cevreYarisi * (cevreYarisi - kenar1) * (cevreYarisi - kenar2) * (cevreYarisi - kenar3));
		cout << "ucgenin alani: " << alan << endl;
	}
	else {
		cout << "girdiginiz kenarlar ile ucgen olusturulamaz!!!\n";
	}

}
