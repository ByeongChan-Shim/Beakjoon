#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) {
        vector<int> v(10);
        for(int i = 0; i < 10; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        cout << v[2] << "\n";
    }
}