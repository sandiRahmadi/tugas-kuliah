#include <iostream>
#define PHI 3.14 //konstanta global

using namespace std;
int main() {
		float jari_jari, luas;
	//konstanta lokal 
	jari_jari = 25;
	
	// operasi aritmatika
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "Data lingkaran";
	cout << "\njari-jari : "<< jari_jari;
	cout << "nluas : "<< luas;
	cout << "\n";
	return 0;
	}