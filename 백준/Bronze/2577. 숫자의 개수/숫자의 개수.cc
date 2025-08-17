#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b, c;
    cin >> a >> b >> c;
    long x = a * b * c;
    string s = to_string(x);
    vector<int> v(10);
    for (char c : s) {
        if (c == '0') v[0]++;
        else if (c == '1') v[1]++;
        else if (c == '2') v[2]++;
        else if (c == '3') v[3]++;
        else if (c == '4') v[4]++;
        else if (c == '5') v[5]++;
        else if (c == '6') v[6]++;
        else if (c == '7') v[7]++;
        else if (c == '8') v[8]++;
        else if (c == '9') v[9]++;
    }
    for (int i : v) cout << i << "\n";
}