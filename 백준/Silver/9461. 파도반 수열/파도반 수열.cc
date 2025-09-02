#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    vector<long long> v(101);
    v[1] = 1;
    v[2] = 1;
    v[3] = 1;
    for (int i = 4; i <= 100; i++) v[i] = v[i - 2] + v[i - 3];
    while (tt--) {
        int n;
        cin >> n;
        cout << v[n] << "\n";
    }
}