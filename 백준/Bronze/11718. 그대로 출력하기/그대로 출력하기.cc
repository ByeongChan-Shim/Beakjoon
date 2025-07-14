#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    vector<string> v;
    while (getline(cin, s)) {
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}