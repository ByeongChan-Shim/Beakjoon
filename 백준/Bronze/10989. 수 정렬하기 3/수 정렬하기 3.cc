#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    int aa[10001] = {0};
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        aa[b]++;
    }
    for (int i = 1; i <= 10000; i++) {
        while (aa[i]--) {
            cout << i << "\n";
        }
    }
}