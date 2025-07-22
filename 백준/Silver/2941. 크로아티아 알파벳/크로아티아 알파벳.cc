#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'c' && s[i + 1] == '=') sum++, i++;
        else if (s[i] == 'c' && s[i + 1] == '-') sum++, i++;
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') sum++, i += 2;
        else if (s[i] == 'd' && s[i + 1] == '-') sum++, i++;
        else if (s[i] == 'l' && s[i + 1] == 'j') sum++, i++;
        else if (s[i] == 'n' && s[i + 1] == 'j') sum++, i++;
        else if (s[i] == 's' && s[i + 1] == '=') sum++, i++;
        else if (s[i] == 'z' && s[i + 1] == '=') sum++, i++;
        else sum++;
    }
    cout << sum;
}