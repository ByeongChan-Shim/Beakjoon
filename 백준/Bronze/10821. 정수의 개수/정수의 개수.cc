#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int sum = 0;
    string s;
    char c = ',';
    getline(cin, s);
    stringstream ss(s);
    while (getline(ss, s, c)) sum++;
    cout << sum;
}