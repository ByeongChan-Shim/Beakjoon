#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i < a + 1; i++) {
        v.push_back(v[i - 1] + v[i - 2]);
    }
    cout << v[a];
}