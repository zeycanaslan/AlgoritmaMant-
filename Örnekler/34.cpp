//ARALARINDA ASAL OLUP OLMADIKLARINI KONTROL ETCEZ BUNUN İÇİN ONCE EBOB BULCAZ EBOB VE ARALARINDA ASAL MI diye iki fonksiyon tanımlıycaz
//Asalsa 1 değilse 0 döndür

#include<iostream>
using namespace std;

int Ebob(int, int);
int AralarindaAsalMi(int, int);

int main() {

	cout << Ebob(2,7);  //ebobu yazıyoz görmek için eger 1 ise aralarında asal demek 
	cout << endl;
	cout<<AralarindaAsalMi(2, 7);
	return 0;
}

int Ebob(int sayi1, int sayi2) {  
	int ebob;
	if ((sayi1 < sayi2) && (sayi2 > 0)) {
		for (int i = sayi1; i>0; i--) {   //azaltarak geliyozki en büyüğünü bulalım ve break diyip onu alalım
			if ((sayi1 % i == 0) && (sayi2 % i == 0)) {
				ebob = i;
				break;  // aranan deger bulundu
			}
		}
	}
	else {
		ebob = -1;
	}
	return ebob;
}

int AralarindaAsalMi(int sayi1, int sayi2) {
	int sonuc;
	if (Ebob(sayi1,sayi2) == 1){
		sonuc = 1;
	}
	else
		sonuc = 0;
	return sonuc;
}
