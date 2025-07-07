#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a;
    vector<int> v;
    for(int i = 1; i < 31; i++) {
        v.push_back(i);
    }
    for(int i = 0; i < 28; i++) {
        cin >> a;
        v.erase(remove(v.begin(), v.end(), a), v.end());
    }
    for(int i = 0; i < 2; i++) {
        cout << v[i] << "\n";
    }
}