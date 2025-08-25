#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (v[0] == 0 && v[1] == 0 && v[2] == 0) break;
        if (pow(v[0], 2) + pow(v[1], 2) == pow(v[2], 2)) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }
}