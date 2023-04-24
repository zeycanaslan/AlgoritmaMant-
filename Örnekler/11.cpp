//KULLANICININ GİRDİĞİ SAYININ KAÇ GÜN AY YIL OLDUĞUNU HESAPLA

#include <iostream>
using namespace std;

int main() {
    int sayac;
    int yil, ay, gun;

    cout << "ulasmak istediginiz sayac degerini giriniz: ";
    cin >> sayac;

    yil = sayac / 365;
    ay = (sayac - 365 * yil) / 30;
    gun = (sayac - yil*365-ay*30);

    cout << "giridiginiz sayac degiskeni: " << yil << " yil " << ay << " ay " << gun<<" gune denk gelir.\n";

    return 0;
}
