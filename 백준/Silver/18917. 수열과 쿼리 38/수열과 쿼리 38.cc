#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long m, sum = 0, mus = 0;
    cin >> m;
    while (m--) {
        long long n;
        cin >> n;
        if (n == 1) {
            long long x;
            cin >> x;
            sum += x;
            mus ^= x;
        }
        else if (n == 2) {
            long long x;
            cin >> x;
            sum -= x;
            mus ^= x;
        }
        else if (n == 3) cout << sum << "\n";
        else if (n == 4) cout << mus << "\n";
    }
}