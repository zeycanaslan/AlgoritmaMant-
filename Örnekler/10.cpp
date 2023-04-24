//Kullanıcının girdiği ay numarasına göre ayın kaç gün çektiğini hesapliyacaz ama belli bir kuralı yok
//Şubat istisna ve temmuz ağustosda sıkıntı oluşuyor o yuzden veya operatorü ile tek tek yazarız.

#include<iostream>
using namespace std;
int main() {
	int ayNo;

	cout << "bir ay numarasi girin: ";
	cin >> ayNo;

	if (ayNo == 2) { //artık yıl olayını hesaplamaya katmadık eğer yıl bilgisi alırsak katabiliriz.
		cout << "Bu ay subat ayidir ve 29 ya da 28 ceker.";
	}
	else if (ayNo == 1 || ayNo == 3 || ayNo == 5 || ayNo == 7 || ayNo == 8 || ayNo == 10 || ayNo == 12) {
		cout << "31 gun cekmektedir.";
	}
	else if (ayNo == 4 || ayNo == 6 || ayNo == 9 || ayNo == 11) {
		cout << "30 gun cekmektedir.";
	}
	else
		cout << "1-12 arasi sayi bir ay numarasi gir.! ";

	cout << endl;
}
