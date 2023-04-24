
//Kullanıcın girceği alt ve üst limit arasındaki sayilarin toplamı

#include<iostream>
using namespace std;

int main() {

	int toplam = 0; //ilk değer ataması yapılır
	int alt, ust, i;

	cout << "alt limiti giriniz:";
	cin >> alt;

	cout << "ust limiti giriniz:";
	cin >> ust;

	for (i = alt; i <=ust; i++) {
		toplam = toplam + i;  //toplam+=i
	}

	cout << alt << "ile" << ust << "arasindaki sayilarin toplami " << toplam << endl;

	return 0;
}
