#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 5;
    vector<pair<int, int>> v(5);
    for (int i = 0; i < tt; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v[i].first = a + b + c + d;
        v[i].second = i + 1;
    }
    sort(v.rbegin(), v.rend());
    cout << v[0].second << " " << v[0].first;
}