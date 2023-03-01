#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double s_calculation() {
    int x, y, z;
    double s;

    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    cout << "Enter value for z: ";
    cin >> z;

    s = (sin(x) / sqrt(abs(y * z / x + y))) + 3 * pow(y, 5);

    cout << fixed << setprecision(3);
    cout << "S = " << s << endl;

    return s;
}

int main() {
    s_calculation();
    return 0;
}
