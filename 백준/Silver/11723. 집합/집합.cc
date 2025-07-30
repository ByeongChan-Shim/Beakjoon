#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long m;
    int S = 0;
    cin >> m;
    while(m--) {
        string s;
        cin >> s;
        int x;
        if (s == "add") {
            cin >> x;
            S |= (1 << (x - 1));
        }
        if (s == "remove") {
            cin >> x;
            S &= ~(1 << (x - 1));
        }
        if (s == "check") {
            cin >> x;
            cout << ((S & (1 << (x - 1))) ? 1 : 0) << "\n";
        }
        if (s == "toggle") {
            cin >> x;
            S ^= (1 << (x - 1));
        }
        if (s == "all") {
            S = (1 << 20) - 1;
        }
        if (s == "empty") {
            S = 0;
        }
    }
}