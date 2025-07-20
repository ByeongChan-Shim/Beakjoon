#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n - 2 - i; j >= 0; j--) cout << " ";
        for (int k = 1; k <= 2 * i + 1; k++) cout << "*";
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j <= i + 1; j++) cout << " ";
        for (int k = 1; k <= 2 * (n - i - 2) + 1; k++) cout << "*";
        cout << "\n";
    }
}