#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    vector<vector<int> > v(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            v[i][j] = v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1] + x;
        }
    }
    while (m--) {
        long long x1, y1, x2, y2, sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        sum = v[x2][y2] - v[x1 - 1][y2] - v[x2][y1 - 1] + v[x1 - 1][y1 - 1];
        cout << sum << "\n";
    }
}