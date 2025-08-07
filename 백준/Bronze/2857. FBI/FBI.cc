#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v;
    for (int i = 1; i <= 5; i++) {
        string s;
        cin >> s;
        if (s.find("FBI") != string::npos) v.push_back(i);
    }
    if (v.size() == 0) cout << "HE GOT AWAY!";
    else {
        for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    }
}