#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long x;
    cin >> x;
    int n;
    cin >> n;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        x -= a * b;
    }
    if (x == 0) cout << "Yes";
    else cout << "No";
}