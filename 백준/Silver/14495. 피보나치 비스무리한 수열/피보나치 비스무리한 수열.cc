#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    long long aa[n + 1];
    aa[1] = 1;
    aa[2] = 1;
    aa[3] = 1;
    for (int i = 4; i <= n; i++) aa[i] = aa[i - 1] + aa[i - 3];
    cout << aa[n];
}