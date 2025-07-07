#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    if (b == 1 || b == 2) cout << "NEWBIE!";
    else if (a >= b) cout << "OLDBIE!";
    else cout << "TLE!";
}