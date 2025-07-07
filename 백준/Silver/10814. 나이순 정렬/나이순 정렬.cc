#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct age {
    int year;
    string name;
};
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    vector<age> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i].year >> v[i].name;
    }
    stable_sort(v.begin(), v.end(), [](const age &a, const age &b) {
        return a.year < b.year;
    });
    for (int i = 0; i < a; i++) {
        cout << v[i].year << " " << v[i].name << "\n";
    }
}