#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, aa = 0, bb = 0;
    cin >> a >> b;
    aa = a / 100, bb= b /100;
    a %= 100, b %= 100;
    aa += (a / 10) * 10, bb += (b / 10) * 10;
    a %= 10, b %= 10;
    aa += a * 100, bb += b * 100;
    cout << max(aa, bb);
}