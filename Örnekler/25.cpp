//CORDANO ÜÇLÜSÜ--------kök 3 içinde a+bkökc + kök 3 içinde a-bkökc=1 olan ve a+b+c<=1000 üçlülerini bulun ve adedini yazın

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    int sayac = 0;

    for (a = 1; a <= 1000; a++) {
        for (b = 1; b <= 1000; b++) {
            for (c = 1; c <= 1000; c++) {
                double sonuc = cbrt(a + b * sqrt(c)) + cbrt(a - b * sqrt(c));
                if (sonuc == 1 && a + b + c <= 1000) {
                    cout << a << " " << b << " " << c << " uclulerini saglar\n";
                    sayac++;
                }
            }
        }
    }
    cout << sayac << " adet cozum vardır.";
    return 0;
}
