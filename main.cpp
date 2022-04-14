#include <iostream>
#include <cmath>

using namespace std;
int main() {

    float a,b;
    float n,m;
    cout << "enter a:" << endl << "enter b:" << endl;
    cin >> a >> b;

    if (a < b) {
        if (a == 0) {
            cout << "error" << endl;
        } else if (b == 0) {
            cout << "error" << endl;
        } else {
            n = a * a + (a - b) / (sin(a * b));
        }
    } else {
        n = pow(a - b, 1.0 / 3);
    }

    if (n<b) {
        m = (n+a)/(-b) + sqrt (pow(sin(a), 2) - cos(n));
    } else if (n==b) {
        m = b*b + tan (n*a);
    } else {
        m = pow (n, 3.0) + n*a*a;
    }

    cout << "a= " << a << endl << "b= " << b << endl << "n= " << n << endl << "m= " << m << endl;

    return 0;
}