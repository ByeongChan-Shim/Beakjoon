#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> v(26, -1);
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (v[(c - '0') - 49] == -1) v[(c - '0') - 49] = i;
    }
    for (int i = 0; i < 26; i++) cout << v[i] << " ";
}