#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        string s;
        getline(cin, s);
        int count = 0;
        if (s == "#") break;
        for (char c : s) {
            if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
            if ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') count++;
        }
        cout << count << "\n";
    }
}