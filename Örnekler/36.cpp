//35=3*34=3*3*33 	….. 	(Rekürsif Üs Alma)

#include<iostream>
using namespace std;

int UsAl(int x, int y);  // fonksiyon prototipi

//fonksiyonun çağrılması
int main() {
    int x, y;
    cout << "x degeri girin: ";
    cin >> x;
    cout << "y degeri girin: ";
    cin >> y;
    cout << UsAl(x, y) << endl;
    return 0;
}

//fonksiyon tanımı
int UsAl(int x, int y) {
    if (y == 0) {   //us eger 0 ise 1 döner
        return 1;
    }
    else if (y < 0) {    // y eger negatif olursa onu pozitife döndurup devamm ederiz
        return UsAl(1 / x, -y);
    }
    else if (y % 2 == 0) {
        int yaricap = UsAl(x, y / 2);
        return yaricap * yaricap;
    }
    else {
        return x * UsAl(x, y - 1);
    }
}
