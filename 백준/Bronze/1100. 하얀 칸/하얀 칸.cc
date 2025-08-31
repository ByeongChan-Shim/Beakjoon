#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n = 8, count = 0;
    bool q = true;
    while (n--) {
        string s;
        cin >> s;
        if (q) {
            for (int i = 10; i < s.length() + 10; i++) {
                if (i % 2 == 0 && s[i - 10] == 'F') count++;
            }
        }
        else {
            for (int i = 10; i < s.length() + 10; i++) {
                if (i % 2 != 0 && s[i - 10] == 'F') count++;
            }
        }
        if (q) q = false;
        else q = true;
    }
    cout << count;
}