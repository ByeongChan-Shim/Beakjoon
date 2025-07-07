#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    int aa[4] = {0, 1, 0, 0};
    for (int i = 0; i < a; i++) {
        int x, y, d;
        cin >> x >> y;
        d = aa[x];
        aa[x] = aa[y];
        aa[y] = d;
    }
    for (int i = 0; i < 4; i++) {
        if (aa[i] == 1) cout << i;
    }
}