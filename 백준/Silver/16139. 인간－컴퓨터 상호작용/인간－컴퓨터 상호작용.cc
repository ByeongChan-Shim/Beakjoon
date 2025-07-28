#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    long long q;
    cin >> q;
    while (q--) {
        char c;
        long long a, b, count = 0;
        cin >> c >> a >> b;
        for (long long i = a; i <= b; i++) if (c == s[i]) count++;
        cout << count << "\n";
    }
}