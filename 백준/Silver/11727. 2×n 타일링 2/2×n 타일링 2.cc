#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    v[0] = 0;
    v[1] = 1;
    v[2] = 3;
    for (int i = 3; i <= n; i++) v[i] = (v[i - 1] + v[i - 2] * 2) % 10007;
    cout << v[n];
}