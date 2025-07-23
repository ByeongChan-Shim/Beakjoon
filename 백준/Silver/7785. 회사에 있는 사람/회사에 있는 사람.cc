#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    set<string> set;
    while (n--) {
        string s, ss;
        cin >> s >> ss;
        if (ss == "enter") set.insert(s);
        if (ss == "leave") set.erase(s);
    }
    vector<string> v(set.begin(), set.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a > b;
    });
    for (auto c : v) cout << c << "\n";
}