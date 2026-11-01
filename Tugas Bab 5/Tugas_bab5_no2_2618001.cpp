#include <iostream>
using namespace std;

int main() {
	string nama;
	double sisi, panjang, lebar, alas, tinggi, luas;
	int nilai, nim, pilihan;
	
	cout<<"nama	:";
	getline(cin, nama);
	cout<<"NIM	:";
	cin>>nim;
	cout<<"\n===== MENGHITUNG LUAS BANGUN DATAR=====\n";
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi Panjang"<<endl;
	cout<<"3. Segitiga"<<endl;
	cout<<"Pilih Bangun Datar	:";
	cin>>pilihan;
	
	switch (pilihan){
		case 1:
			cout<<"\n---Persegi---"<<endl;
			cout<<"Masukkan Panjang sisi	:";
			cin>>sisi;
			luas = sisi * sisi;
			cout<<"Luas Persegi	:"<<luas<<endl;
			break;
			
		case 2:
			cout<<"\n---Persegi Panjang---"<<endl;
			cout<<"Masukkan Panjang	:";
			cin>>panjang;
			cout<<"Masukkan Lebar	:";
			cin>>lebar;
			luas = panjang * lebar;
			cout<<"Luas Persegi Panjang	:"<<luas<<endl;
			break;
			
		case 3:
			cout<<"\n---Segitiga---"<<endl;
			cout<<"Masukkan Alas	:";
			cin>>alas;
			cout<<"Masukkan Tinggi	:";
			cin>>tinggi;
			luas = 0.5 * alas * tinggi;
			cout<<"Luas Segitiga	:"<<luas<<endl;
			break;
			
		default:
			cout<<"\nPilihan Tidak Valid"<<endl;
			
	}
	

return 0;
}

