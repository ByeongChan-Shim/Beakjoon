#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt, count = 0;
    cin >> tt;
    while(tt--) {
        string s;
        cin >> s;
        set<char> set;
        bool flag = true;
        if (2 < s.size()) {
            set.insert(s[0]);
            set.insert(s[1]);
            for(int i = 2; i < s.length(); i++) {
                if (set.count(s[i]) == 1 && s[i] != s[i - 1]) {
                    flag = false;
                    break;
                }
                set.insert(s[i]);
            }
            if (flag) count++;
        } else count++;
    }
    cout << count;
}