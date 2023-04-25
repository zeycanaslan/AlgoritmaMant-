/*Kullanıcıdan klavye yoluyla alacağı pozitif bir tam sayı adedince üç basamaklı RASTGELE pozitif tam sayılar üretecek bir C++ konsol uygulaması yazınız.

Rastgele sayılar bir VOİD fonksiyon içerisinde üretilmelidir ve bu rastgele sayıların ADEDİ fonksiyona PARAMETRE olarak aktarılmalıdır.

Fonksiyonunuz üretilen rastgele sayıların kaç adedinin onlar basamağının tek ve kaç adedinin onlar basamağının çift olduğunu tespit ederek ekrana yansıtmalıdır.

Fonksiyonunuzu main içerisinden çağırarak doğru çalışıp çalışmadığını test ediniz.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rastgeleSayiUret(int );  //prototip

int main() {
    srand(time(NULL)); // rastgele sayılar için seed ayarı
    int adet;

    cout << "Kac adet sayi uretmek istersiniz? ";
    cin >> adet;

    rastgeleSayiUret(adet);

    return 0;
}

void rastgeleSayiUret(int adet) {
    int tekSayilar = 0;
    int ciftSayilar = 0;

    for (int i = 0; i < adet; i++) {
        int sayi = rand() % 900 + 100; // üç basamaklı rastgele sayı üretme
        int onlarBasamagi = (sayi / 10) % 10; // onlar basamağını almak için

        if (onlarBasamagi % 2 == 0) {
            ciftSayilar++;
        }
        else {
            tekSayilar++;
        }

        cout << sayi << endl; // üretilen sayıyı ekrana yazdırma
    }

    cout << "Toplam " << adet << " sayi uretildi." << endl;
    cout << "Onlar basamaginda " << tekSayilar << " tane tek sayi ve " << ciftSayilar << " tane cift sayi uretildi." << endl;
}
