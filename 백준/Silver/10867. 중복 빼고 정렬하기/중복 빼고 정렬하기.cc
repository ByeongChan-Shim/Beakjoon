#include <iostream>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    set<int> se;
    while(n--) {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (int c : se) cout << c << " ";
}