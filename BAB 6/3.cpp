#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int jawaban, hasil;

    cout << "===== 2618001 || Iksan Firmansyah =====" << endl;
    cout << "=====   PROGRAM GAME MATEMATIKA   =====" << endl;

    do {
        hasil = level + (level * 5);

        cout << "\nLevel " << level << endl;
        cout << "Berapa hasil dari " << level << " + " << level * 5 << " ? ";
        cin >> jawaban;

        if (jawaban == hasil) {
            cout << "Benar! Naik level!" << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            break;
        }
    } while (level <= 5);

    if (level == 6) {
        cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
    }
    return 0;
}
