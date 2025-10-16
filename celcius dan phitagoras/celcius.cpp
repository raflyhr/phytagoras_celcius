#include <iostream>
using namespace std;

int main() {
    float celsius, reamur, fahrenheit;

    cout << "Konversi Suhu\n\n";
    cout << "Input Celsius : ";
    cin >> celsius;

    // rumus konversi
    reamur = (4.0 / 5.0) * celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    cout << "Konversi       : \n";
    cout << " " << reamur << " " << char(248) << "R" << endl;
    cout << " " << fahrenheit << " " << char(248) << "F" << endl;

    return 0;
}