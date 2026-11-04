#include <iostream>
using namespace std;

int main() {
    int n, i = 1, total = 0;

    cout << "##              2618001              ##" << endl;
    cout << "##         Penjumlahan Deret         ##" << endl;
    cout << "=======================================" << endl;

    cout << "\nJumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;

    while (i <= n) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
        total += i;
        i++;
    }

    cout << " = " << total << endl;

    return 0;
}
