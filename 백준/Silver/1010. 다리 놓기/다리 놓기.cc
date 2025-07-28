#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, m, sum = 1;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            sum *= (m - i + 1);
            sum /= i;
        }
        cout << sum << "\n";
    }
}