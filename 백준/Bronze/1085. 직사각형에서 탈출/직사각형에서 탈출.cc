#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, y, w, h, mx, my;
    cin >> x >> y >> w >> h;
    mx = min(x, w - x);
    my = min(y, h - y);
    cout << min(mx, my);
}