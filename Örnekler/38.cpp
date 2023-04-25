
//indisteki Fibonacci Serisi elemanını rekürsif bir fonksiyon ile bulunması
// 0 1 1 2 3 5 8 13 21 34 55...

/*Fibonacci dizisi, ilk iki elemanı 0 ve 1 olan bir dizidir. 
Yani, fib(0) 0 değerini, fib(1) 1 değerini verir. Bu nedenle, fib(1) birinci sayı olarak 1 değerini verir.*/

#include<iostream>
using namespace std;

int fib(int ); //Fonksiyon prototipi

 //Fonksiyon çağrılması
int main() {
	int n;
	cout << "hesaplanacak degeri giriniz. ";
	cin >> n;
	cout << fib(n);
}

// Fonksiyon tanımı
int fib(int n) {
	if (n <= 1)
		return n;
	
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
//aslında şöyle çalışıyor

/*Fibonacci(7) = Fibonacci(6) + Fibonacci(5)
Fibonacci(6) = Fibonacci(5) + Fibonacci(4)
Fibonacci(5) = Fibonacci(4) + Fibonacci(3)
Fibonacci(4) = Fibonacci(3) + Fibonacci(2)
Fibonacci(3) = Fibonacci(2) + Fibonacci(1)
Fibonacci(2) = Fibonacci(1) + Fibonacci(0)
Fibonacci(1) = 1
Fibonacci(0) = 0
*/
