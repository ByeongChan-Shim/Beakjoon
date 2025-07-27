#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    map<string, string> ma;
    for (long i = 1; i <= n; i++) {
        string s;
        cin >> s;
        ma.insert({to_string(i), s});
        ma.insert({s, to_string(i)});
    }
    while (m--) {
        string s;
        cin >> s;
        cout << ma[s] << "\n";
    }
}