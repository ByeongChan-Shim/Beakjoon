#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int q = 0; q < m; q++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int x = i; x <= j; x++) {
            v[x] = k;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        cout << v[i] << " ";
    }
}