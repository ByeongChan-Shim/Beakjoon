#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, count = 0;
    cin >> n >> m;
    set<string> set;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        set.insert(s);
    }
    while (m--) {
        string s;
        cin >> s;
        if (set.count(s) == 1) count++;
    }
    cout << count;
}