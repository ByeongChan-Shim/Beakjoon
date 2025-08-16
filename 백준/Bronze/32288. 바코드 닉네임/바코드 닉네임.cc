#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char c : s) {
        if (c == 'I') cout << 'i';
        else cout << 'L';
    }
}