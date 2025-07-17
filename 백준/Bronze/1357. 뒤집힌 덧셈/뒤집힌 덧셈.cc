#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, y, sum = 0;
    cin >> x >> y;
    string a = to_string(x), b = to_string(y);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    sum = stoi(a) + stoi(b);
    string c = to_string(sum);
    reverse(c.begin(), c.end());
    cout << stoi(c);
}