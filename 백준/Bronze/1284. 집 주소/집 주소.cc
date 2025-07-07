#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    while (cin >> s) {
        if (s == "0") ;
        else {
            int a = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '1') a += 2;
                else if (s[i] == '0') a += 4;
                else a += 3;
            }
            a += s.length() + 1;
            cout << a << "\n";
        }
    }
}