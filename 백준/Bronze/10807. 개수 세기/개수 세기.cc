#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a; ++i) {
        cin >> b;
        v.push_back(b);
    }
    cin >> c;
    cout << count(v.begin(), v.end(), c);
}