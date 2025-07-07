#include <iostream>
#include <string>
#include <vector>
using namespace std;
string add(string x, string y) {
    string s = "";
    int ss = 0;
    while  (x.size() < y.size()) x = "0" + x;
    while  (y.size() < x.size()) y = "0" + y;
    for (int i = x.size() - 1; i >= 0; --i) {
        int sum = (x[i] - '0') + (y[i] - '0') + ss;
        ss = sum / 10;
        s = char(sum % 10 + '0') + s;
    }
    if (ss) s = "1" + s;
    return s;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    vector<string> v(a + 1);
    v[0] = "0";
    v[1] = "1";
    for (int i = 2; i <= a; ++i) {
        v[i] = add(v[i - 1], v[i - 2]);
    }
    cout << v[a];
}