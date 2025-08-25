#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, x = "";
    cin >> s;
    vector<long> v;
    bool flag = true, flag2 = true;
    for (char c : s) {
        if (c == '+') {
            if (flag == true) v.push_back(stol(x));
            else v.push_back(-stol(x));
            flag = true;
            x = "";
        }
        else if (c == '-') {
            if (flag == true) v.push_back(stol(x));
            else v.push_back(-stol(x));
            flag = false;
            x = "";
        }
        else x += c;
    }
    if (flag == true) v.push_back(stol(x));
    else v.push_back(-stol(x));
    long q = 0, w = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0 && flag2 == true) q += v[i];
        else {
            w += abs(v[i]);
            flag2 = false;
        }
    }
    cout << q - w;
}