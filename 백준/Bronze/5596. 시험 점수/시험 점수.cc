#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 4, s = 0, t = 0;
    while (tt--) {
        int x;
        cin >> x;
        s += x;
    }
    tt = 4;
    while (tt--) {
        int x;
        cin >> x;
        t += x;
    }
    cout << max(s, t);
}