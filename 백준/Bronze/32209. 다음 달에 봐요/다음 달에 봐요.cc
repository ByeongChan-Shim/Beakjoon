#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, sum = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1) sum += y;
        else {
            if (sum - y >= 0) sum -= y;
            else {
                cout << "Adios";
                sum -= y;
                break;
            }
        }
    }
    if (sum >= 0) cout << "See you next month";
}