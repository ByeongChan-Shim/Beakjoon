#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++) v.push_back(i);
    while (m--) {
        int x, y;
        cin >> x >> y;
        reverse(v.begin() + x, v.end() - (n - y));
    }
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
}