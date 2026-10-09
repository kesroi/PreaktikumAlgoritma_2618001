#include <iostream>
using namespace std;

int main() {

    float p, l, r;
    float luasPersegiPanjang, luasLingkaran;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> p;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> l;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;


    luasPersegiPanjang = p * l;
    luasLingkaran = 3.14 * r * r;

 
    cout << "Luas Persegi Panjang = " << luasPersegiPanjang << endl;
    cout << "Luas Lingkaran = " << luasLingkaran << endl;

    if (luasLingkaran > luasPersegiPanjang) 
	{
        cout << "Lingkaran lebih luas dari persegi panjang" << endl;
    } 
	else if (luasPersegiPanjang > luasLingkaran) 
	{
        cout << "Persegi panjang lebih luas dari lingkaran" << endl;
    } 
	else 
	{
        cout << "Keduanya memiliki luas yang sama" << endl;
    }

return 0;
}

