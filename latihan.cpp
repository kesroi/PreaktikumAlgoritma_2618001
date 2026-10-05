#include <iostream>
using namespace std;

int main() 
{
	string nama;
	string minuman;
	string makanan;
	int hargamakanan;
	int jumlahmakanan;
	int hargaminuman;
	int jumlahminuman;
	int totalhargamakanan;
	int totalhargaminuman;
	int totalharga;
	cout << "nama : "; cin >> nama;
	cout << "minuman : "; cin >> minuman;
	cout << "makanan : "; cin >> makanan;
	cout << "harga makanan : "; cin >> hargamakanan;
	cout << "jumlah makanan : "; cin >> jumlahmakanan;
	totalhargamakanan = hargamakanan * jumlahmakanan;
	
	cout << "harga makanan * jumlah makanan = Rp" << hargamakanan * jumlahmakanan << endl;
		
	cout << "harga minuman : "; cin >> hargaminuman;
	cout << "jumlah minuman : "; cin >> jumlahminuman;
	totalhargaminuman = hargaminuman * jumlahminuman;
	
	cout << "harga minuman * jumlah minuman = Rp" << hargaminuman * jumlahminuman << endl;
	
	totalharga = totalhargamakanan + totalhargaminuman;
	
	cout << "total harga: Rp" << totalharga << endl;

	return 0;
}

