#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, sum = 0;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << "\n";
    }
}