#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    long x = stol(a), y = stol(c);
    cout << x + y;
}