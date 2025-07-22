#include <iostream>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 10;
    set<int> set;
    while (tt--) {
        int x;
        cin >> x;
        set.insert(x % 42);
    }
    cout << set.size();
}