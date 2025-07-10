#include <iostream>
using namespace std;
int main() {
    int n, x = -1, xx = -1, sum = 0;
    cin >> n;
    x = n;
    while (n != xx) {
        int a = x / 10, b = x % 10;
        x = a + b;
        sum++;
        x = (b * 10) + (x % 10);
        xx = x;
    }
    cout << sum;
}