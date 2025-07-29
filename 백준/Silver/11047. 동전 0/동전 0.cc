#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, k, count = 0;
    cin >> n >> k;
    vector<long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
        count += k / v[i];
        k = k % v[i];
    }
    cout << count;
}