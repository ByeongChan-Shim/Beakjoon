#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, k;
    cin >> n >> k;
    vector<long> w(n), v(n);
    vector<long> dp(k + 1, 0);
    for (int i = 0; i < n; i++) cin >> w[i] >> v[i];
    for (int i = 0; i < n; i++) {
        for (long j = k; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[k];
}