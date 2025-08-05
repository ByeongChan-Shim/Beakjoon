#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, count = 0, va = 0;
    cin >> n;
    vector<long> v(n);
    for (long i = 0; i < n; i++) cin >> v[i];
    reverse(v.begin(), v.end());
    for (long i = 0; i < n; i++) {
        if (va < v[i]) {
            va = v[i];
            count++;
        }
    }
    cout << count;
}