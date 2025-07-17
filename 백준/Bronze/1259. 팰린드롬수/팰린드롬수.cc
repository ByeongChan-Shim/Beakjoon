#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, res = "yes";
    while (cin >> s) {
        if (s == "0") break;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[s.length() - i - 1]) res = "yes";
            else {
                res = "no";
                break;
            }
        }
        cout << res << "\n";
    }
}