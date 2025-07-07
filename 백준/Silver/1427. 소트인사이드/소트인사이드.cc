#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a.size(); i++) {
        v.push_back(a[i] - '0');
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
}