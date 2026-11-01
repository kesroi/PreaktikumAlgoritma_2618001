#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string nama, nim;
    double pendapatan, tarif = 0.0, pajakAkhir = 0.0;
    int statusTanggungan;
    cout << fixed << setprecision(0);


    cout << "========================================\n";
    cout << "   PROGRAM SIMULASI PAJAK PENGHASILAN   \n";
    cout << "========================================\n";


    cout << "Masukkan Nama       : ";
    getline(cin, nama);
    cout << "Masukkan NIM        : ";
    cin>> nim;


    cout << "\n----------------------------------------\n";
    cout << "          HASIL SIMULASI PAJAK          \n";
    cout << "----------------------------------------\n";
    cout << "Masukkan Pendapatan : Rp ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "\Pendapatan tidak boleh bernilai negatif.\n";
        return 0; 
    }

    
    cout << "Status Tanggungan (Ketik 1 jika ada, 0 jika tidak): ";
    cin >> statusTanggungan;

    
    if (pendapatan > 0 && pendapatan < 5000000) {
        tarif = 0.0; 
    } 
    else if (pendapatan >= 5000000 && pendapatan < 10000000) {
        tarif = 0.05; 
    } 
    else if (pendapatan >= 10000000 && pendapatan < 20000000) {
        tarif = 0.10; 
    } 
    else {
        tarif = 0.15; 
    }

    
    pajakAkhir = pendapatan * tarif;

   
    if (statusTanggungan == 1) {
        pajakAkhir -= 100000;
    }

    cout << "Tarif Pajak        : " << (tarif * 100) << "%" << endl;
    if (statusTanggungan == 1) {
        cout << "Pengurangan Tangg    : Rp 100.000" << endl;
    }
    cout << "Pajak Akhir        : Rp " << pajakAkhir << endl;
    cout << "----------------------------------------\n";

    return 0;
}
