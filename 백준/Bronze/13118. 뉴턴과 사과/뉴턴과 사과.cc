#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b, c, d, x, y, r;
    cin >> a >> b >> c >> d;
    cin >> x >> y >> r;
    if (x == a) cout << 1;
    else if (x == b) cout << 2;
    else if (x == c) cout << 3;
    else if (x == d) cout << 4;
    else cout << 0;
}