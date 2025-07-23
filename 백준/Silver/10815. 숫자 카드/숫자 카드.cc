#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n;
    set<long long> s;
    for (long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    vector<int> v(m);
    for (long i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if (s.count(x) == 1) v[i] = 1;
        else v[i] = 0;
    }
    for (long i = 0; i < v.size(); i++) cout << v[i] << " ";
}