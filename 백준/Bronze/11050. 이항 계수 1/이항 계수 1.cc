#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    long x = 1, y = 1, z = 1;
    cin >> a >> b;
    for (int i = 2; i <= a; i++) x *= i;
    for (int i = 2; i <= b; i++) y *= i;
    for (int i = 2; i <= a - b; i++) z *= i;
    cout << x / (y * z);
}