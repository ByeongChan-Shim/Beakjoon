#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a;
    cin >> a;
    vector<long> v(a + 1);
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i <= a; ++i) {
        long l = v[i - 1] + v[i - 2];
        while (l >= 1000000007) {
            l -= 1000000007;
        }
        v[i] = l;
    }
    cout << v[a];
}