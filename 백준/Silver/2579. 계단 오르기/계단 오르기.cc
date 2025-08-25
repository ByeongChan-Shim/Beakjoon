#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<long> v(n + 1), dp(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    dp[1] = v[1];
    if (n >= 2) dp[2] = v[1] + v[2];
    for (int i = 3; i <= n; i++) dp[i] = max(dp[i - 2] + v[i], dp[i - 3] + v[i - 1] + v[i]);
    cout << dp[n];
}