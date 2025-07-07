#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b, c, o, x;
    cin >> a >> b >> c;
    o = min(b, c);
    x = min((a - b), (a - c));
    cout << o + x;
}