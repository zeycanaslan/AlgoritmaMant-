/*f(X) PARCALI FONKSİYONU TANIMLARIZ. 
* X>=4-----X*X+1 FORMULU FALAN TANIMLIYORUZ VE GİRİLEN X DEĞERİ SONUCUNDA 
* FONKSİYON SONUCUNU HESAPLATIRIZ
* YANİ PARÇALI FONKSİYON
*/
#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int x;
	double sonuc;

	cout << "bir x degeri girin: ";
	cin >> x;

	if (-8 <= x && x <= 9) {
		if (x >= 4) {
			sonuc = x * x + 1;
		}
		else if (0 < x && x <= 4) {
			sonuc = 4 - x * x;
		}
		else if (x <= 0) {
			sonuc =pow(3, x);
		}
		cout << "sonuc: " << sonuc << endl;
	}

	else
		cout << "-8 ve 9 arasinda bir x degeri girin.";
}
