#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[n - 1];
}