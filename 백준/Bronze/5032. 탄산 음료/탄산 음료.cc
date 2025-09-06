#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, sum = 0, count = 0;
    cin >> a >> b >> c;
    sum = a + b;
    while (sum >= c) {
        int x, y;
        x = sum / c;
        y = sum % c;
        sum = x + y;
        count += x;
    }
    cout << count;
}