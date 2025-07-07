#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    int b = 0;
    char c = ' ';
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == c) b += 1;
    }
    if (a[0] == ' ') b--;
    if (a[a.length() - 1] == ' ') b--;
    cout << b + 1;
}