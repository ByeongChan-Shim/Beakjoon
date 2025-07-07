#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    bool b = true;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != a[a.size() - 1 - i]) {
            b = false;
            break;
        }
    }
    if (b) cout << 1;
    else cout << 0;
}