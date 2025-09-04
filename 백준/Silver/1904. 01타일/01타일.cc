#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long> v(n + 1);
    v[0] = 0;
    v[1] = 1;
    v[2] = 2;
    for (long i = 3; i <= n; i++) v[i] = (v[i - 2] + v[i - 1]) % 15746;
    cout << v[n];
}