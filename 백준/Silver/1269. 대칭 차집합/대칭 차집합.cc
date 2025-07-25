#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    cin >> a >> b;
    vector<long long> va(a), vb(b);
    for (long i = 0; i < a; i++) cin >> va[i];
    for (long i = 0; i < b; i++) cin >> vb[i];
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    vector<long long> vab(a + b), vba(a + b);
    auto iter = set_difference(va.begin(), va.end(), vb.begin(), vb.end(), vab.begin());
    vab.erase(iter, vab.end());
    auto iter1 = set_difference(vb.begin(), vb.end(), va.begin(), va.end(), vba.begin());
    vba.erase(iter1, vba.end());
    cout << vab.size() + vba.size();
}