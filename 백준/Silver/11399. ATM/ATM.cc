#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) sum += v[j];
    };
    cout << sum;
}