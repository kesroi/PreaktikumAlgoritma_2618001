#include <iostream>
using namespace std;

int main() {
	
	float celsius, fahrenheit, reamur, kelvin;

    cout << "Konversi Suhu\n";
    cout << "Masukan Suhu (Celsius) = ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    reamur = (celsius * 4.0 / 5.0);
    kelvin = celsius + 273.15;

    cout << "\nJadi, " << celsius << " derajat Celsius"
         << "	= " << fahrenheit << " derajat Fahrenheit\n";
    cout << "      " << celsius << " derajat Celsius"
         << "	= " << reamur << " derajat Reamur\n";
    cout << "      " << celsius << " derajat Celsius"
         << "	= " << kelvin << " derajat Kelvin\n";

return 0;
}

