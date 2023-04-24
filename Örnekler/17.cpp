//Tavşanların sayısının kuşların sayısını kaç yıl sonra gececeğini bulan program.Döngü sonu belli değil for kullanılamaz

#include<iostream>
using namespace std;

int main() {

	int tavsan = 1042;
	int kus = 2272;
	int yil=0;

	
	while(tavsan<kus) {

		tavsan += tavsan * 0.038;
		kus += kus * 0.012;
		yil++;		
	}
	cout << yil;
}
