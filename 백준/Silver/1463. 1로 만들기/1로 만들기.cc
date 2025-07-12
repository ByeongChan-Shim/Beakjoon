#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long> v(n + 1, 0);
    v[1] = 0;
    for (int i = 2; i <= n; i++) {
        v[i] = v[i - 1] + 1;
        if (i % 2 == 0) v[i] = min(v[i], v[i / 2] + 1);
        if (i % 3 == 0) v[i] = min(v[i], v[i / 3] + 1);
    }
    cout << v[n];
}