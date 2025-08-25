#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    vector<pair<long, long>> v(41);
    v[0] = make_pair(1, 0);
    v[1] = make_pair(0, 1);
    for (int i = 2; i <= 40; i++) v[i] = make_pair(v[i - 2].first + v[i - 1].first, v[i - 2].second + v[i - 1].second);
    while (t--) {
        int x;
        cin >> x;
        cout << v[x].first << " " << v[x].second << "\n";
    }
}