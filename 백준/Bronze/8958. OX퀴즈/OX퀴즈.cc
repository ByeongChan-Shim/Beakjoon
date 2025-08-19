#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int sum = 0;
        vector<int> v(s.length());
        for (int i = 0; i < s.length(); i++) {
            if (i == 0) {
                if (s[i] == 'O') v[i] = 1;
                else v[i] = 0;
            }
            else {
                if (s[i] == 'O') v[i] = v[i - 1] + 1;
                else v[i] = 0;
            }
        }
        for (int i = 0; i < s.size(); i++) sum += v[i];
        cout << sum << "\n";
    }
}