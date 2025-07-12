#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v(5, 0);
    string s;
    cin >> s;
    for (char c : s) {
        if (c == 'M') v[0]++;
        else if (c == 'O') v[1]++;
        else if (c == 'B') v[2]++;
        else if (c == 'I') v[3]++;
        else if (c == 'S') v[4]++;
    }
    sort(v.begin(), v.end());
    if (v[0] == 0) cout << "NO";
    else cout << "YES";
}