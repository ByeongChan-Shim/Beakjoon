#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, sum = 0, x = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'O') {
            sum += i;
            sum += x;
            x++;
        }
        else x = 0;
    }
    cout << sum;
}