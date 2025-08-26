#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    vector<bool> v(1000001, true);
    for (long i = 2; i < 1000001; i++) if (v[i]) for (long j = i * 2; j < 1000001; j += i) v[j] = false;
    v[0] = false;
    v[1] = false;
    for (long i = n; i <= m; i++) if (v[i]) cout << i << "\n";
}