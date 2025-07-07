#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, x, c = 0;
    cin >> a;
    vector<long> v(a);
    for (long i = 0; i < a; i++) cin >> v[i];
    cin >> x;
    sort(v.begin(), v.end());
    long l = 0, r = a - 1;
    while (l < r) {
        long sum = v[l] + v[r];
        if (sum == x) {
            c++;
            l++;
            r--;
        } else if (sum < x) {
            l++;
        } else r--;
    }
    cout << c;
}