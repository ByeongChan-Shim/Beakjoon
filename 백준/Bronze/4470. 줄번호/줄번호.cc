#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        cout << i << ". " << s << "\n";
    }
}