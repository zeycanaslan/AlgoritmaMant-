//SAYI TAHMİN OYUNU  
//100 - 300 arasinda rastegle bir sayi uretsin ve kullanıcı tahmin etsin eger tahminden yukari ise buyuk bir tahminde bulundun diye uyari versin

#include <iostream>//cout İçin
#include <cstdlib> //rand() ve srand(seed) İçin 
#include <ctime>   //time() İçin 
using namespace std;

int main()
{
	int tahmin;
	int sayac = 1;
	char devamMi = 'e'; // 'e' harfiyle başlatılır
	srand(time(0)); //Programın Çalıştığı Andaki Saatin Değeri
	unsigned int rastgele = 100 + rand() % 200;

	while (devamMi == 'e') {
		cout << "100 ile 300 arasinda bir tahminde bulun: ";
		cin >> tahmin;
		//cout << endl;

		if (rastgele == tahmin) {
			cout << "Tebrikler dogru tahmin! " << "Rastgele sayimiz: " << rastgele;
			cout << "\nTahmin sayiniz: " << sayac;
			cout << "\noyuna devam etmek istiyor musunuz(e/h)" << endl;
			cin >> devamMi;

			if (devamMi == 'e') { // eğer oyuna devam edilecekse
				sayac = 1; // tahmin sayacı sıfırlanır
				rastgele = 100 + rand() % 200; // yeni bir rastgele sayı oluşturulur
			}
		}
		else if (rastgele > tahmin) {
			cout << "Tahminin asagida yeni bir tahmin gir!\n";
		}
		else if (rastgele < tahmin) {
			cout << "Tahminin yukarida yeni bir tahmin gir!\n";
		}
		sayac++;
	}
	return 0;
}
