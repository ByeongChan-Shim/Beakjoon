#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long> v(n), dp(n);
    for (long i = 0; i < n; i++) cin >> v[i];
    dp[0] = v[0];
    long x = dp[0];
    for (long i = 1; i < n; i++) {
        dp[i] = max(v[i], dp[i - 1] + v[i]);
        x = max(x, dp[i]);
    }
    cout << x;
}