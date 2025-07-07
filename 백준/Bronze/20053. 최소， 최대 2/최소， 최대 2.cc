#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b, c, q, w;
    cin >> a;
    for (long i = 0; i < a; i++) {
        cin >> b;
        vector<int> v;
        for (long j = 0; j < b; j++) {
            cin >> c;
            v.push_back(c);
        }
        sort(v.begin(), v.end());
        q = v[0];
        w = v[b - 1];
        cout << q << " " << w << "\n";
    }
}