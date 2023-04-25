/*Kendisine parametre olarak aldığı 2 pozitif tam sayıdan birincisi ikincisine bölündüğünde elde edilecek kalanı bularak geriye döndürecek
bir C++ fonksiyonu yazınız.

Bölme (/) ve modülüs (%) operatörlerinin kullanımına izin yoktur.
Bölmenin tekrarlı bir çıkarma işlemi olduğunu hatırlayınız.

Fonksiyonunuzu main içerisinden çağırarak doğru çalışıp çalışmadığını test ediniz.
*/


#include<iostream>
using namespace std;

int Kalan(int,int);

int main() {

	cout << Kalan(10, 4);
	return 0;
}

int Kalan(int bolunen, int bolen) {
	while (bolunen >= bolen) {
		bolunen -= bolen;
	}
	return bolunen;
}
