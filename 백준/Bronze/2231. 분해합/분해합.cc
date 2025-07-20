#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long> v;
    for (long i = 1; i <= n; i++) {
        long sum = 0, x = 0;
        string s = to_string(i);
        for (char c : s) {
            sum += c - '0';
            x = i + sum;
        }
        if (x == n) v.push_back(i);
    }
    sort(v.begin(), v.end());
    if (v.empty()) cout << 0;
    else cout << v[0];
}