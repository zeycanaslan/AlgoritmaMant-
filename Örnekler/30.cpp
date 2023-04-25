
// 3 SAYIYI TOPLAMA YOLUYLA ÇARPMA

#include<iostream>
using namespace std;

//  Carpma fonksiyonu, üç adet tamsayı parametresi alır
int  Carpma(int, int, int);

// Main fonksiyonu,  Carpma fonksiyonunu çağırır ve sonucu ekrana yazdırır
int main() {

	cout << Carpma(-2, 5, 4);
	return 0;
}

int  Carpma(int sayi1, int sayi2, int sayi3) {
	int sonuc = 0; // Sonuç değişkeni sıfırlanır
	
	// İlk döngü, sayi1 kez çalışır
	for (int i = 1; i <= sayi1; i++) {
		// İkinci döngü, sayi2 kez çalışır
		for (int j = 1; j <= sayi2; j++) {     //sayi1*sayi2 kez calışmış olur
			// Her seferinde sayi3 değeri sonuca eklenir
			sonuc = sonuc + sayi3;
		}
	}
	if ((sayi1 < 0 && sayi2>0) || (sayi1 > 0 && sayi2 < 0)) {
		sonuc *= ( - 1);
	}
	// Toplam sonuç geri döndürülür
	return sonuc;
}
