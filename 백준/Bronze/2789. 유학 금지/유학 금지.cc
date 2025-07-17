#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, x = "CAMBRIDGE";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        bool test = true;
        for (int j = 0; j < x.length(); j++) {
            if (s[i] == x[j]) {
                test = false;
                break;
            }
        }
        if (test == true) cout << s[i];
    }
}