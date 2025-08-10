#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 3;
    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = a + b + c + d;
        if (x == 0) cout << "D" << "\n";
        else if (x == 1) cout << "C" << "\n";
        else if (x == 2) cout << "B" << "\n";
        else if (x == 3) cout << "A" << "\n";
        else if (x == 4) cout << "E" << "\n";
    }
}