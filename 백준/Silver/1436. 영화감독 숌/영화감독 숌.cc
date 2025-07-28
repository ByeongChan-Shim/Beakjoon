#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v;
    v.push_back(0);
    for (long i = 666; i <= 10000000; i++) {
        string s = to_string(i);
        if ((s[0] == '6' && s[1] == '6' && s[2] == '6') || (s[1] == '6' && s[2] == '6' && s[3] == '6') || (s[1] == '6' && s[2] == '6' && s[3] == '6') || (s[2] == '6' && s[3] == '6' && s[4] == '6') || (s[3] == '6' && s[4] == '6' && s[5] == '6') || (s[4] == '6' && s[5] == '6' && s[6] == '6') || (s[5] == '6' && s[6] == '6' && s[7] == '6')) v.push_back(i);
    }
    int n;
    cin >> n;
    cout << v[n];
}