#include <iostream>
#include <cmath>

using namespace std;
int main() {

    float a,b;
    float n,m;
    bool err=0;

    cout << "enter a:" << endl << "enter b:" << endl;
    cin >> a >> b;

    if (b == 0) {
        err=1;
    } else if (a < b) {
        if (a == 0) {
            err=1;
        } else {
            n = a * a + (a - b) / (sin(a * b));
        }
    } else {
        n = pow(a - b, 1.0 / 3);
    }

    if (pow(sin(a), 2) - cos(n) < 0) {
        err=1;
    }

if (err==0) {
    if (n < b) {
        m = (n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
    } else if (n == b) {
        m = b * b + tan(n * a);
    } else {
        m = pow(n, 3.0) + n * a * a;
    }
    cout << "a= " << a << endl << "b= " << b << endl << "n= " << n << endl << "m= " << m << endl;
} else {
    cout << "error" << endl;
}

    return 0;
}