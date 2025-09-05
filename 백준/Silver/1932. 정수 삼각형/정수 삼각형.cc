#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<long>> v(n);
    for (int i = 0; i < n; ++i) {
        v[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cin >> v[i][j];
        }
    }
    vector<vector<long>> dp = v;
    for (int i = 1; i < n; ++i) {
        dp[i][0] += dp[i - 1][0];
        dp[i][i] += dp[i - 1][i - 1];
        for (int j = 1; j < i; ++j) {
            dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
        }
    }
    cout << *max_element(dp[n - 1].begin(), dp[n - 1].end()) << "\n";
}