 // 7 * 4 = 4 + 6 * 4 = 4 + 4 + 5 * 4  	(Rekürsif Çarpma)

#include <iostream>
using namespace std;

int Carpma(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
    }
    else if (x == 1) {    //x değeri 1 olduğunda, y değeri doğrudan döndürülür.
        return y;
    }
    else if (y == 1) {   //y değeri 1 olduğunda ise, x değeri doğrudan döndürülür. 
        return x;
    }
    else {   //y değeri, x değeri bir bir azaltılarak rekürsif olarak çağrılır ve sonuç olarak y ile toplanır.
        return y + Carpma(x - 1, y);
    }
}

int main() {
    int x ;
    int y ;

    cout << "x degerini giriniz: ";
    cin >> x;
    cout << "y degerini giriniz: ";
    cin >> y;

   cout << "Carpim: " << Carpma(x, y) << std::endl;
    return 0;
}
