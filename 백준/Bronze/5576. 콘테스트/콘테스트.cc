#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b = 0, c = 0;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < 10; i++) {
        cin >> a;
        v2.push_back(a);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 7; i <= 10; i++) {
        b += v1[i];
        c += v2[i];
    }
    cout << b << " " << c;
}