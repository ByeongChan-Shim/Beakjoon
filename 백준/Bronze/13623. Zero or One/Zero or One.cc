#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b == c) cout << "A";
    else if (a != b && b != c) cout << "B";
    else if (a == b && b != c) cout << "C";
    else cout << "*";
}