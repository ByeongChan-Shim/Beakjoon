#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, t, sum = 0, count = 0;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int x : v) {
        if (sum + x > t) break;
        sum += x;
        count++;
    }
    cout << count;
}