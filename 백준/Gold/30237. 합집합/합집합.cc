#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<set<int>> v(n);
        set<int> U;
        for (int i = 0; i < n; i++) {
            int k, s;
            cin >> k;
            for (int j = 0; j < k; j++) {
                cin >> s;
                v[i].insert(s);
                U.insert(s);
            }
        }
        int ans = 0;
        for (int s : U) {
            set<int> ss;
            for (int i = 0; i < n; i++) {
                if (v[i].count(s) == 0) {
                    ss.insert(v[i].begin(), v[i].end());
                }
            }
            if ((int)ss.size() > ans) ans = ss.size();
        }
        cout << ans << "\n";
    }
}