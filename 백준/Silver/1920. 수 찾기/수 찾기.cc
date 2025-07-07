#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c;
    cin >> a;
    vector<int> v1(a);
    for (int i = 0; i < a; i++) {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> c;
        if (binary_search(v1.begin(), v1.end(), c)) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}