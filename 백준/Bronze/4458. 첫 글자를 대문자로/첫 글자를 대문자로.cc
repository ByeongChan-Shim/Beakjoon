#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            char c = s[j];
            if (j == 0) c = toupper(s[j]);
            cout << c;
        }
        cout << "\n";
    }
}