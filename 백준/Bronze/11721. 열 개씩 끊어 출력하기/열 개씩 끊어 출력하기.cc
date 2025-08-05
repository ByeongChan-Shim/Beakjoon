#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int x = s.length() / 10;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 10; j++) cout << s[j];
        cout << "\n";
        s = s.substr(s.size() - (s.size() - 10));
    }
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
}