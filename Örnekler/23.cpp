/*Bir inek = 10 tl  bir keci = 3 tl   bir tavuk = 0.5 tl olan bir yerde hepsinden en az bir tane alınacak şekilde
100 Tl si olan bir adam kaç farkli yolla hayvanları satin alabilir.
Aslında bu soru şudur --->  10i + 3j + 0.5k = 100  denklemini sağlayan i j k üçlülerini(kombinasyonlarını) hesaplayın
*/
 
#include<iostream>
using namespace std;

int main() {

	int i, j, k;
	int sayac = 0;

	for (i = 1; i <(double)(100/10); i++) { //alınabilecek max inek sayısı
		for (j = 1; j < (double)(100 / 3); j++) { //alınabilecek max keçi sayısı
			for (k = 1; k < (double)(100 / 0.5); k++) { //alınabilecek max tavuk sayısı
				if ((double)(i * 10 + j * 3 + k * 0.5) == 100) {
					cout << i << " tane inek " << j << " tane keci " << k << " tane tavuk alinabilir.\n";
					sayac++;
				}
			}
		}
	}
	cout << "toplam " << sayac << " tane yol vardir. \n";
}
