#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long aa, ab, ba, bb;
    cin >> aa >> ab >> ba >> bb;
    while (ab > 0 && bb > 0) {
        ab -= ba;
        bb -= aa;
    }
    if (ab <= 0 && bb <= 0) cout << "DRAW";
    else if (ab > 0) cout << "PLAYER A";
    else if (bb > 0) cout << "PLAYER B";
}