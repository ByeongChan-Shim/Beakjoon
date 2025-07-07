#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    cin >> a >> b;
    vector<long> v;
    for (long i = 0; i < a + b; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (long i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}