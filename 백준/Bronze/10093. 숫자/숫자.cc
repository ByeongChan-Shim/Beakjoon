#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long a, b;
    cin >> a >> b;
    long long sum = abs(a - b);
    if (sum <= 1) cout << 0;
    else {
        cout << sum - 1 << "\n";
        if (a > b) swap(a, b);
        a++;
        while (a != b) {
            cout << a << " ";
            a++;
        }
    }
}