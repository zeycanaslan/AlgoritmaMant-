//Kullanıcının girdiği saatte akrep ile yelkovan arasındaki açının derece cinsinden hesaplanışı
//Öncelikle akrepin hızı saatte 30 derece.Yelkovanın hızı dakikada 6 derece(yelkovan için dk akrep için saat daha pratik)

#include<iostream>
using namespace std;

int main() {
	//1.adım:değişkenleri deklare et.
	int saat, dakika, yelkovan;
	double akrep, derece;
	int toplamDakika;

	//2.adım:saati gir.
	cout << "saati girin: ";
	cin >> saat;
	cout << "dakikayi girin: ";
	cin >> dakika;

	//3.adım:Toplam dakikayı ve ona göre akrep ve yelkovanın kaç derece ilerlediğini hesaplat
	toplamDakika = saat * 60 + dakika; //Toplam dakikayı buluruz.
	akrep = toplamDakika * 0.5;  //akrep için 60 dk bir saat yer değişecek yani ve bu da 30 derecedir
	yelkovan = dakika * 6; //yelkovan için bir tam saat turu yani 360 derece bir saat yani 60 dk oluyor (oran kurarsak bir dk yi 6 derece buluruz.)

	//4.adım aradaki dereceyi ekrana yazdır.
	derece = fabs(akrep - yelkovan);
	cout << "saat=" << saat << ":" << dakika << endl;
	cout << "aradaki derece: " << derece << " ya da " << fabs(360 - derece) << endl;  //Hangi yönden açı sorduğu belli değil o yüzden iki taraftan da düşünürüz.
}
