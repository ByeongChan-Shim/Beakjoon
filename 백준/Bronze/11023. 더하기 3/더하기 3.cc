#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b = 0;
    while (cin >> a) {
        b += a;
    }
    cout << b;
}