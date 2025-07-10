#include <iostream>
using namespace std;
int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, m, sum = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++) {
            long s = i;
            while (s >= 10) {
                if (s % 10 == 0) {
                    s /= 10;
                    sum++;
                } else s /= 10;
            }
            if (s == 0) sum++;
        }
        cout << sum << "\n";
    }
}