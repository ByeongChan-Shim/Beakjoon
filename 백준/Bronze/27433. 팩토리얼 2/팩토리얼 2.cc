#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long a, b = 1;
    cin >> a;
    if (a == 0) cout << 1;
    else {
        for (int i = 1; i <= a; i++) {
            b = b * i;
        }
        cout << b;
    }
}