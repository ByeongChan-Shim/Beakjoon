#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int aa[4] = {a, b, c, d};
    sort(aa, aa + 4);
    cout << abs((aa[0] + aa[3]) - (aa[1] + aa[2]));
}