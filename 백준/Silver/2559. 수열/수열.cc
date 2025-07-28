#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, k;
    cin >> n >> k;
    vector<long> v(n), vv;
    for (long i = 0; i < n; i++) cin >> v[i];
    for (long i = 0; i <= n - k; i++) {
        long sum = 0;
        for (long j = i; j < i + k; j++) {
            sum += v[j];
        }
        vv.push_back(sum);
    }
    sort(vv.rbegin(), vv.rend());
    cout << vv[0];
}