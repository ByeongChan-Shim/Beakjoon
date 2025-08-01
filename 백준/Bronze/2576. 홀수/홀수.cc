#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 7, sum = 0, m = 100;
    while(tt--) {
        int x;
        cin >> x;
        if (x % 2 == 1) {
            sum += x;
            m = min(m, x);
        }
    }
    if (sum == 0 && m == 100) cout << -1;
    else cout << sum << "\n" << m;
}