#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c = 0, d = -1;
    cin >> a >> b;
    for (int i = 1; i < b; i++) {
        if (a <= i * i && i * i <= b) {
            c += i * i;
            if (d == -1) d = i * i;
        }
    }
    if (c == 0) cout << -1;
    else {
        cout << c << "\n" << d;
    }
}