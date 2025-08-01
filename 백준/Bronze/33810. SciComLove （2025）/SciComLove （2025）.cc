#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int count = 0;
    if (s[0] != 'S') count++;
    if (s[1] != 'c') count++;
    if (s[2] != 'i') count++;
    if (s[3] != 'C') count++;
    if (s[4] != 'o') count++;
    if (s[5] != 'm') count++;
    if (s[6] != 'L') count++;
    if (s[7] != 'o') count++;
    if (s[8] != 'v') count++;
    if (s[9] != 'e') count++;
    cout << count;
}