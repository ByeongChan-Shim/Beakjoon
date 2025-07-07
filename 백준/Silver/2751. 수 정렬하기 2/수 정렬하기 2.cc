#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    cin >> a;
    long l[a];
    for (long i = 0; i < a; i++) {
        cin >> b;
        l[i] = b;
    }
    sort(l, l + a);
    for (long i = 0; i < a; i++) {
        cout << l[i] << "\n";
    }
}