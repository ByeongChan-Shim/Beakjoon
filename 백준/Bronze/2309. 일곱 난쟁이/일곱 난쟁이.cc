#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a = 0, x = 0, y = 0;
    vector<int> v(9), vv;
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
        a += v[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (a - v[i] - v[j] == 100) {
                x = i;
                y = j;
                break;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (i != x && i != y) vv.push_back(v[i]);
    }
    sort(vv.begin(), vv.end());
    for (int i = 0; i < vv.size(); i++) cout << vv[i] << "\n";
}