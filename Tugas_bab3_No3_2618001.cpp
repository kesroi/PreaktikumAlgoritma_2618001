#include <iostream>
using namespace std;

int main() {
	float jarijari, tinggi, volume;
	float phi = 3.14159;
	
	cout << "===Program Menghitung Volume Tabung===\n";
	cout << "Masukan jari-jari tabung	:";
	cin >> jarijari;
	cout << "Masukan tinggi tabung		:";
	cin >> tinggi;
	
	volume = phi * jarijari * jarijari * tinggi;
	
	cout << "Volume tabung = " << volume << "cm^3"<<endl;

return 0;
}

