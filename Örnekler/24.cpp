//
//PİSAGOR ÜÇLÜSÜ ÇÖZÜMÜ --->  a^2+b^2=c^2  ve  a+b+c=1000 olcak şekilde kaç a b c üçlüsü vardır

#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int sayac=0;
	
	for (a = 1; a < 1000; a++) {
		for (b = 1; b < 1000; b++) {
			for (c = 1; c < 1000; c++) {
				if ((a * a) + (b * b) == (c * c)) {
					if (a + b + c == 1000) {
						sayac++;
						cout << "pisagor uclusunu saglayan secenek: " << a << " " << b << " " << c << endl;
					}
				}
			}
		}
	}
	cout << sayac << " adet cozumu var.";
}
