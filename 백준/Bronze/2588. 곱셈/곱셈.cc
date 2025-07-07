#include <iostream>
using namespace std;
int main() {
    int x, y, a, b, c;
    cin >> x;
    cin >> y;
    a = y/100;
    b = (y/10)%10;
    c = y%10;
    cout << x*c << "\n";
    cout << x*b << "\n";
    cout << x*a << "\n";
    cout << x*y;
    return 0;
}