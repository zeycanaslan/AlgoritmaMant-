//25 SORULUK BİR TEST SINAVINDA OGRENCİ DOĞRU, YANLIŞ VE BOŞ SAYISINI GİRİP NET HESAPLATAN KOD PARÇASI

#include<iostream>
using namespace std;

int main() {
	int dogru, yanlis, bos, net;

	cout << "dogru sayisini giriniz: ";
	cin >> dogru;
	cout << "\nyanlis sayisini giriniz: ";
	cin >> yanlis;
	cout << "\nbos sayisini giriniz: ";
	cin >> bos;

	net = dogru - (yanlis / 4) - bos;  //net hesab formülü

	cout << "netiniz: " << net << endl;
}
