#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double a, b, c, positivex, negativex;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    positivex = -b + sqrt(b * b - 4.0 * a * c) / (2.0 * a);
    negativex = -b - sqrt(b * b - 4.0 * a * c) / (2.0 * a);
    cout << fixed << setprecision(2);
    cout << positivex << " " << negativex << endl;
    return 0;
}
