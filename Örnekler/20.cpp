
//Bilye sayısı 2, 3, 4, 5, ve 6 ile kalanı 1 oluyor ve 7 ye tam bölünüyor.Bilye sayisi<1000 için max bilye sayisini bulunuz

#include<iostream>
using namespace std;

int main() {

	int bilye, i;

	for (i = 1000; i>1; i--) {
		if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5 == 1 && i % 6 == 1 && i % 7 == 0 ) {
			//cout << i << endl;
			break; //döngü azalarak geldiği için ilk karşılaştığı ve bu durumu sağlayan sayiyi tutar ve döngüden çıkar
		}
	}
	cout << i << endl;
}
