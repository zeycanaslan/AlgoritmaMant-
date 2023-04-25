
//PERMUTASYON HESABI YAPMAK (M!/(M-N)!)
//FAKTORİYEL VE PERMUTASYON ADINDA İKİ TANE FONK YAZICAZ
 
#include<iostream>
using namespace std;

int Faktoriyel(int, int);
int Permutasyon(int, int);

int main() {
	cout << Permutasyon(7,3);
 
	return 0;
}

int Faktoriyel(int sayi1) {
	int faktor = 1;
	for (int i=1; i <= sayi1; i++) {
		faktor *= i;
	}
	return faktor;
}

int Permutasyon(int sayi1, int sayi2) {
	int sonuc;
	if ((sayi1 > sayi2) && (sayi2 >= 0)) {

		sonuc = Faktoriyel(sayi1) / Faktoriyel(sayi1 - sayi2);
	}
	else
		return 0;
	return sonuc;
}
