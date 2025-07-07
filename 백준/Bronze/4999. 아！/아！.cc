#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    if (a.size() >= b.size()) {
        cout << "go";
    } else { cout << "no";}
}