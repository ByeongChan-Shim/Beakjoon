#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long n, sum = 0, x;
    cin >> n;
    vector<long long> v(n - 1);
    vector<long long> vv(n);
    for (int i = 0; i < n - 1; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> vv[i];
    x = vv[0];
    for (int i = 0; i < n - 1; i++) {
        if (vv[i] < x) {
            x = vv[i];
            sum += v[i] * x;
        }
        else sum += v[i] * x;
    }
    cout << sum;
}