#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    vector<int> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j];
        }
    }
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int count = 0;
            char c;
            c = 'W';
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (arr[k][l] != c) count++;
                    if (c == 'W') c = 'B';
                    else if (c == 'B') c = 'W';
                }
                if (c == 'W') c = 'B';
                else if (c == 'B') c = 'W';
            }
            v.push_back(count);
            count = 0;
            c = 'B';
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (arr[k][l] != c) count++;
                    if (c == 'W') c = 'B';
                    else if (c == 'B') c = 'W';
                }
                if (c == 'W') c = 'B';
                else if (c == 'B') c = 'W';
            }
            v.push_back(count);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0];
}