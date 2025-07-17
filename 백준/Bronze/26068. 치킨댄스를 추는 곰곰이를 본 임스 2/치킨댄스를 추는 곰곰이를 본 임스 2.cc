#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s, x = "";
        cin >> s;
        for (int j = 2; j < s.length(); j++) {
            x += s[j];
        }
        if (stoi(x) <= 90) sum++;
    }
    cout << sum;
}