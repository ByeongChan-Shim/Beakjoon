#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string a;
    int b;
    cin >> b;
    for (int i = 0; i < b; i++) cin >> a, cout << a[0] << a[a.length() - 1] << "\n";
}