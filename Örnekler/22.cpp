
//6 litre ve 7 litrelik kovalarla 420 litrelik bir havuz kac farklı kombinasyonla doldurulabilir
//i=6 litre  j=7 litrelik kova olsun

#include<iostream>
using namespace std;

int main() {

	int i, j, sayac = 0;

	for (i = 1; i < 70; i++) {
		for (j = 1; j < 60; j++) {
			if (6*i+ 7* j == 420) {
				cout << i << " tane 6 litrelik	ve	" << j << " tane 7 litrelik kova ile doldurulabilir.\n";
					sayac++;
			}
		}
	}
	cout << endl;
	cout << sayac << " farkli tasima yolu vardir.\n";
}
