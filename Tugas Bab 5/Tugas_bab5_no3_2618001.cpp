#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string nama, namaMenu;
    int pilihan, jumlah;
    double harga = 0, total, diskon = 0, totalAkhir;
    
    cout<<"Nama pemesan	:";
    getline(cin, nama);
    
    cout<<"\n===== MENU KANTIN =====\n";
    cout<<"1. Nasi Goreng	- Rp15.000\n";
    cout<<"2. Mie Ayam	- Rp12.000\n";
    cout<<"3. Soto Ayam	- Rp13.000\n";
    cout<<"4. Es Teh Manis	- Rp5.000\n";
    cout<<"Pilih Menu	:";
    cin>>pilihan;
    cout<<"Masukkan Jumlah Pesanan	:";
    cin>>jumlah;
    
    bool valid = true;
    
    switch (pilihan) {
        case 1:
            namaMenu = "Nasi Goreng";
            harga = 15000;
            break;
        case 2:
            namaMenu = "Mie Ayam";
            harga = 12000;
            break;
        case 3:
            namaMenu = "Soto Ayam";
            harga = 13000;
            break;
        case 4:
            namaMenu = "Es Teh Manis";
            harga = 5000;
            break;
        default:
            valid = false;
            cout << "\nPilihan menu tidak valid!\n";
            break;
    }

    if (valid) {
        total = harga * jumlah;

        if (total > 40000) {
            diskon = total * 0.08;
        }
        totalAkhir = total - diskon;

        cout << fixed << setprecision(0);
        cout << "\n===== STRUK PEMESANAN =====\n";
        cout << "Nama Pemesan          : " << nama << endl;
        cout << "Nama Menu             : " << namaMenu << endl;
        cout << "Harga Satuan          : Rp" << harga << endl;
        cout << "Jumlah Pesanan        : " << jumlah << endl;
        cout << "Total Pembayaran      : Rp" << total << endl;
        cout << "Diskon (8%)           : Rp" << diskon << endl;
        cout << "Total Setelah Diskon  : Rp" << totalAkhir << endl;
        cout << "=====================================\n";
    }
    

return 0;
}

