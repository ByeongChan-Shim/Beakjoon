#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, count = 0;
    cin >> n;
    while (n--) {
        int x, y = 0;
        cin >> x;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0) y++;
        }
        if (y == 2) count++;
    }
    cout << count;
}