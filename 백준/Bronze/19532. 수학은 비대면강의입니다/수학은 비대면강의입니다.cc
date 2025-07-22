#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d, e, f, v, w;
    cin >> a >> b >> c >> d >> e >> f;
    bool br = true;
    for (int x = -999; x <= 999; x++) {
        if (br == true) {
            for (int y = -999; y <= 999; y++) {
                if (a * x + b * y == c && d * x + e * y == f) {
                    v = x;
                    w = y;
                    br = false;
                    break;
                }
            }
        } else break;
    }
    cout << v << " " << w;
}