
//İKİNCİ DERECEDEN BİR DENKLEMİN KÖKLERİNİN HESAPLANMASI
//Eğer ikinci derece denklem değilse hata mesajı yazdır
//Ax^2+Bx+C     delta ile kontrol ederiz.Sonra varsa(delta>0) iki kök oluşcak x1 ve x2

#include<iostream>
using namespace std;
int main() {
	
	//1.Adım değişkenleri deklare et
	int A, B, C, x1, x2;
  
	//2.Adım kullanıcıdan değerleri al
	cout << "A degerini giriniz: ";
	cin >> A;
	cout << "B degerini giriniz: ";
	cin >> B;
	cout << "C degerini giriniz: ";
	cin >> C;
	int delta = (B * B + (-4 * A * C));  //delta formülü
  
	if (A != 0) {  // eğer ikinci derece denklem ise 
		//3.adım:kökün varlığının kontrolü
		if (delta > 0) {
			cout << "iki reel kok vardir" << endl;
			x1 = ((-B + sqrt(delta)) / 2 * A);
			x2 = ((-B - sqrt(delta)) / 2 * A);

			cout << "x1 degeri: " << x1 << endl;
			cout << "x2 degeri: " << x2 << endl;
		}
		if (delta == 0) {
			cout << "iki esit kok vardir" << endl;
			x1 = B / 2 * A;
			cout << "ve bu kok: " << x1;
		}
		else 
		{
			cout << "kokler sanaldir";
		}
	}
	else {  // ikinci derece denklem değilse
		cout << "\nlutfen ikinci dereceden bir denklem giriniz!!!\n";
	}
}
