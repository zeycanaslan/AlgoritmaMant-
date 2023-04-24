
// VKİ(VÜCUT KÜTLE İNDEKSİ)= kilo/(boy*boy)
//Kullanıcı kg cinsinden kilosunu ve metre cinsinden boyunu girsin
//vki'isini hesaplatıp ona göre hangi kategoride olduklarını ekrana yazdır

#include<iostream>
using namespace std;

int main() {

	double kilo, boy, vki;

	cout << "kilonuzu kilogram cinsinden giriniz: ";
	cin >> kilo;
	cout << "boyunuzu metre cinsinden giriniz: ";
	cin >> boy;

	vki = kilo / (boy * boy);

	cout << "Vucut Kutle index degeriniz: " << vki;
	cout << endl;

	if (vki < 16) {
		cout << "Asiri az kilolu.";
	}
	else if (16 <= vki && vki <= 18.5) {  //(vki<18.5)
		cout << "Az kilolu.";
	}
	else if (vki < 25) {
		cout << "Normal.";
	}
	else if (vki < 30) {
		cout << "Kilolusun dikkat etmelisin";
	}
	else if (vki < 40) {
		cout << "Obez ";
	}
	else {
		cout << "ALARM ALARM ALARM !!!";
	}
	cout << endl;
}
