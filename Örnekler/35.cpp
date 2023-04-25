// İkinin Üssü sayılarının tespiti  ama once tam sayi kontrolu
//y=2^x mi?   buda bize log u verir log2 tabanında y yani log2(y) yi cozcez

#include<iostream>
using namespace std;

double TamSayiMi(double);   //eğer int yazarsak dönüş tipini bize zaten ondalık sayi girsek bile tam kısmını verdiği için hep tam sayı vercek
int IkininUssuMu(int);

int main() {
	
	cout << IkininUssuMu(128);
	return 0;
}

double TamSayiMi(double sayi) {
	int sonuc;
	if (sayi == round(sayi)) {
		sonuc= 1;
	}
	else
		sonuc= 0;
	return sonuc;
}

int IkininUssuMu(int sayii) {
	int sonuc;
	int us;

	if ((sayii > 0) && TamSayiMi(log2(sayii))) {
		sonuc = 1;
		us = log2(sayii);   // eger ussu ise bu bloğa girer ve çalıştırır ve kaçıncı üssü olduğunu yazar
		cout << "kacinci ussu: " << us << endl;
	}
	else {
		sonuc = 0;
		us = 0;
	}
	return sonuc;  //ussu olup olmadığını kontol edip 1 0 döndürür
}
