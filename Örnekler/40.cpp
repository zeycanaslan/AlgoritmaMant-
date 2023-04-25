/*Kendisine PARAMETRE olarak aldığı pozitif tam sayı bir Tam Kare Sayı ise geriye true, değilse false döndürecek bir C++ fonksiyonu yazınız.

Bir tam sayının karesi olan, diğer bir ifade ile karekökü tam sayı olan doğal sayıya Tam Kare Sayı denir.

Fonksiyonunuzu main içerisinden çağırarak doğru çalışıp çalışmadığını test ediniz.
*/


#include <iostream>
#include <cmath>
using namespace std;

bool TamKareMi(int);

int main() {

    cout << TamKareMi(19);

    return 0;
}


bool TamKareMi(int n) {
    int kok = sqrt(n); // n sayısının karekökünü al
    if (kok * kok == n) { // karekökün karesi n sayısına eşit mi?
        return 1;
    }
    else
        return 0;
}
