#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b = 0;
    cin >> a;
    int aa[a], bb[a];
    for (int i = 0; i < a; i++) cin >> aa[i];
    for (int i = 0; i < a; i++) cin >> bb[i];
    sort(aa, aa + a);
    sort(bb, bb + a, greater<int>());
    for (int i = 0; i < a; i++) {
        aa[i] = aa[i] * bb[i];
    }
    for (int i = 0; i < a; i++) {
        b += aa[i];
    }
    cout << b;
}