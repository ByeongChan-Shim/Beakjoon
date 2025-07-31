#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int count = 0;
    for (char c: s) if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    cout << count;
}