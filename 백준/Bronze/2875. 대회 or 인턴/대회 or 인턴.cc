#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d = 0, e = 0;
    cin >> a >> b >> c;
    while (a >= 2 && b >= 1) {
        a -= 2;
        b -= 1;
        d++;
    }
    e = a + b;
    while (e - c < 0) {
        d--;
        e += 3;
    }
    cout << d;
}