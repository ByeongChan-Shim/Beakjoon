#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a1[9], a = 0, b = 0;
    for (int i = 0; i < 9; i++) {
        cin >> a1[i];
        if (a1[i] > a) {
            a = a1[i];
            b = i;
        }
    }
    cout << a << "\n" << b + 1;
}