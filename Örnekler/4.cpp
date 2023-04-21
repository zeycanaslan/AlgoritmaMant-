// C++ ile Fahrenhayt ve derece dönüşümü
//Fahrenhayt=1.8*derece+32 dir

#include<iostream>
using namespace std;

int main()
{
	//1.adım:değişkenleri deklare et.
	int derece;
	int fahrenhayt;

	//2.adım:Kullanıcıdan derece değerini girin.
	cout << "derece degerini giriniz: ";
	cin >> derece;

	//3.adım:Dereceyi dönüştürüp ekrana yazdır.
	fahrenhayt = 1.8 * derece + 32;
	cout << derece << " derece " << fahrenhayt << " fahrenhayt'a esittir " << endl;
	//Burada isteğe bağlı bir cümle yazdırdım 
	//Suyun kaynama noktası için yazdırma işlemi yaptım
	if (derece == 100) {
		cout << "su 100 derecede veya " << fahrenhayt << " fahrenhaytta kaynar\n";
	}
}
