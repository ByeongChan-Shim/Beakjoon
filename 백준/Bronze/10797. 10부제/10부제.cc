#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, sum = 0;
    cin >> a;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x == a) sum++;
    }
    cout << sum;
}