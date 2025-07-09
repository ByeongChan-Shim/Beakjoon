#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int aa1[n], aa2[n], bb[n];
    for (int i = 0; i < n; i++) cin >> aa1[i], aa2[i] = aa1[i];
    sort(aa2, aa2+n);
    for (int i = 0; i < n; i++) {
        bb[i] = lower_bound(aa2, aa2+n, aa1[i]) - aa2;
        aa2[lower_bound(aa2, aa2+n, aa1[i]) - aa2] -= 1;
    }
    for (int i = 0; i < n; i++) cout << bb[i] << " ";
}