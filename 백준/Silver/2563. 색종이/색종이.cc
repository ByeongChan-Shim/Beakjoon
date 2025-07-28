#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<vector<bool>> v(100, vector<bool>(100, false));
    int tt, count = 0;
    cin >> tt;
    while (tt--) {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                v[i][j] = true;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (v[i][j]) count++;
        }
    }
    cout << count;
}