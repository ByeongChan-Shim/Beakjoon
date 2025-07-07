#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    cin >> a >> b;
    vector<long> v(a);
    for (long i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = y - x;
    }
    sort(v.begin(), v.end());
    if (v[b - 1] < 0) cout << 0;
    else cout << v[b - 1];
}