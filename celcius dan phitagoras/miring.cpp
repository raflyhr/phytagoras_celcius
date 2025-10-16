#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Hitung sisi miring segitiga siku-siku\n\n";

    cout << "    |\\\n";
    cout << "    |" << setw(2) << "\\" << endl;
    cout << "    |" << setw(3) << "\\" << endl;
    cout << "  a |" << setw(6) << "\\ c" << endl;
    cout << "    |" << setw(5) << "\\" << endl;
    cout << "    |_____" << "\\" << endl;
    cout << "       b\n\n";

    cout << "Masukkan sisi a : ";
    cin >> a;
    cout << "Masukkan sisi b : ";
    cin >> b;

    c = sqrt(a * a + b * b);

    cout << "\nSisi miring c adalah: " << c << endl;

    return 0;
}
