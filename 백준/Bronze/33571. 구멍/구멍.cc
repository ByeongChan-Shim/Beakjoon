#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int count = 0;
    string s;
    getline(cin, s);
    for (char c : s) {
        if (c == 'A') count++;
        if (c == 'a') count++;
        if (c == 'B') count += 2;
        if (c == 'b') count++;
        if (c == 'D') count++;
        if (c == 'd') count++;
        if (c == 'e') count++;
        if (c == 'g') count++;
        if (c == 'O') count++;
        if (c == 'o') count++;
        if (c == 'P') count++;
        if (c == 'p') count++;
        if (c == 'Q') count++;
        if (c == 'q') count++;
        if (c == 'R') count++;
        if (c == '@') count++;
    }
    cout << count;
}