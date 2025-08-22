#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int sumy = 0, sumk = 0;
        for (int i = 0; i < 9; i++) {
            int y, k;
            cin >> y >> k;
            sumy += y;
            sumk += k;
        }
        if (sumy > sumk) cout << "Yonsei" << "\n";
        else if (sumy == sumk) cout << "Draw" << "\n";
        else cout << "Korea" << "\n";
    }
}