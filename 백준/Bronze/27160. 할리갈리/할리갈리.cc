#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector <long> v(4, 0);
    while (n--) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "STRAWBERRY") v[0] += x;
        if (s == "BANANA") v[1] += x;
        if (s == "LIME") v[2] += x;
        if (s == "PLUM") v[3] += x;
    }
    if (v[0] == 5 || v[1] == 5 || v[2] == 5 || v[3] == 5) cout << "YES";
    else cout << "NO";
}