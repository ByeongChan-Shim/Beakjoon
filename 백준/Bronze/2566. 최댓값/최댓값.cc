#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a1[9][9], a = 0, b = 0, c = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a1[i][j];
            if (a1[i][j] > a) {
                a = a1[i][j];
                b = i;
                c = j;
            }
        }
    }
    cout << a << "\n" << b + 1 << " " << c + 1;
}