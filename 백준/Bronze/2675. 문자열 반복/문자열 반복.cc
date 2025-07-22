#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int r;
        string s;
        cin >> r >> s;
        for (char c : s) {
            int q = r;
            while (q--) {
                cout << c;
            }
        }
        cout << "\n";
    }
}