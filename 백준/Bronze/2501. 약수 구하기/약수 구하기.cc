#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int p, q;
    cin >> p >> q;
    vector<int> v;
    for (int i = 1; i <= p; i++) {
        if (p % i == 0) v.push_back(i);
    }
    if (v.size() < q) cout << 0;
    else cout << v[q - 1];
}