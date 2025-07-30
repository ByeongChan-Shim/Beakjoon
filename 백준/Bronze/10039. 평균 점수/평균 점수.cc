#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x <= 40) x = 40;
        sum += x;
    }
    cout << sum / 5;
}