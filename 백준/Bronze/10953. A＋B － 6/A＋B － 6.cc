#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        char c = ',';
        vector<string> v;
        string s, q, a , b;
        cin >> s;
        stringstream ss(s);
        while (getline(ss, q, c)) {
            v.push_back(q);
        }
        cout << stoi(v[0]) + stoi(v[1]) << "\n";
    }
}