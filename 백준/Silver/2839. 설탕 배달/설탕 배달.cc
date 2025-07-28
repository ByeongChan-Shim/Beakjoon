#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, count = 0;
    cin >> n;
    if (n == 1 || n == 2 || n == 4 || n == 7) cout << -1;
    else if (n % 5 == 0) cout << n / 5;
    else if (n % 5 == 1) {
        count = n / 5;
        count++;
        cout << count;
    }
    else if (n % 5 == 2) {
        count = n / 5;
        count += 2;
        cout << count;
    }
    else if (n % 5 == 3) {
        count = n / 5;
        count++;
        cout << count;
    }
    else if (n % 5 == 4) {
        count = n / 5;
        count += 2;
        cout << count;
    }
}