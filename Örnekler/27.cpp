//Kendisine parametre olarak gönderilen iki sayıdan MİN bulma 

#include<iostream>
using namespace std;

int MinBul(int, int);
int main() {

	cout<<MinBul(20, 15);
	return 0;
}

int MinBul(int sayi1, int sayi2) {
	if (sayi1 < sayi2)   
		return sayi1;
	
	else   //sayi1>sayi2 ise ya da esit ise 
		return  sayi2;    //return  sayi2;

}
