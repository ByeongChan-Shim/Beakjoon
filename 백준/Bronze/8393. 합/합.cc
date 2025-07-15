#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, sum = 0;
    cin >> n;
    for (long i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum;
}