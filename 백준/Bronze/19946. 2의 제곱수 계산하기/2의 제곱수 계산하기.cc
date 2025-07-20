#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    unsigned long long n, sum = 1;
    cin >> n;
    if (n != 18446744073709551615) {
        while (n % 2 == 0) {
            n /= 2;
        }
        n++;
        while (n / 2 != 1) {
            n /= 2;
            sum++;
        }
        cout << sum;
    } else cout << 64;
}