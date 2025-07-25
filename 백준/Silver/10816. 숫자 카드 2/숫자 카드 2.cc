#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    map<long long, long> ma;
    while (n--) {
        long long x;
        cin >> x;
        if (ma.find(x) != ma.end()) ma[x]++;
        else ma[x] = 1;
    }
    long m;
    cin >> m;
    vector<long long> v(m);
    for (long i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if (ma.find(x) != ma.end()) v[i] = ma[x];
        else v[i] = 0;
    }
    for (auto c : v) cout << c << " ";
}