#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    long long q;
    cin >> q;
    vector<vector<long long>> v(26, vector<long long>(s.length() + 1, 0));
    for (long long i = 0; i < s.length(); i++) {
        for (long long j = 0; j < 26; j++) {
            v[j][i + 1] = v[j][i];
        }
        v[s[i] - 'a'][i + 1]++;
    }
    while (q--) {
        char c;
        long long a, b, count = 0;
        cin >> c >> a >> b;
        long long x = c - 'a';
        cout << v[x][b + 1] - v[x][a] << "\n";
    }
}