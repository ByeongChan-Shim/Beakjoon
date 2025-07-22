#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    float sum = 0;
    cin >> n;
    vector<float> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
        sum += v[i] / v[0] * 100;
    }
    cout << sum / n;
}