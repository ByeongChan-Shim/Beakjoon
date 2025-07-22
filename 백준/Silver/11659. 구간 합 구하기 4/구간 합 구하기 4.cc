#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    vector<long> v(n + 1, 0);
    for (long i = 1; i <= n; i++) {
        long x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    for (long i = 0; i < m; i++) {
        long x, y;
        cin >> x >> y;
        cout << v[y] - v[x - 1] << "\n";
    }
}