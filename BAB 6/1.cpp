#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long faktorial = 1;

    cout << "## Ikhsan Firmansyah - 2618001 ##" << endl;
    cout << "===================================" << endl;
    cout << "## Program Hitung Faktorial ##" << endl;
    cout << "===================================" << endl << endl;

    cout << "Input angka: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak terdefinisi." << endl;
        return 0;
    }

    cout << n << "! = ";

    if (n == 0) {
        cout << "1 = 1";
    } else {
        for (int i = 1; i <= n; i++) {
            faktorial *= i;
            cout << i;
            if (i < n) {
                cout << " * ";
            }
        }
        cout << " = " << faktorial;
    }

    cout << endl;
    return 0;
}
