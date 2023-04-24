//11^3+12^3+13^3....N^3 =124877600 snucunda N=? while döngüsü ile yapın

#include<iostream>
using namespace std;

int main() {
	int N=11, toplam=0;
	while (toplam <= 124877600) {
		toplam += N * N * N;
		N++;
	}
	cout << N-1 << endl;
}
