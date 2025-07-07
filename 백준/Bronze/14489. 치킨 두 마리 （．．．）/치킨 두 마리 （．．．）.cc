#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long a, b, c, d;
    cin >> a >> b;
    cin >> c;
    if (a + b >= (c * 2)) cout << a + b - (c * 2);
    else cout << a + b;
}