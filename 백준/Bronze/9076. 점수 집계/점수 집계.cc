#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int ar[5];
        for (int i = 0; i < 5; i++) {
            cin >> ar[i];
        }
        sort(ar, ar+5);
        if (ar[3] - ar[1] >= 4) cout << "KIN" << "\n";
        else cout << ar[1] + ar[2] + ar[3] << "\n";
    }
}