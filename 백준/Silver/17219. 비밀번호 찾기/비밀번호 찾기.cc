#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    map<string, string> ma;
    for (int i = 0; i < n; i++) {
        string s, ss;
        cin >> s >> ss;
        ma.insert({s, ss});
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (ma.find(s) != ma.end()) cout << ma[s] << "\n";
    }
}