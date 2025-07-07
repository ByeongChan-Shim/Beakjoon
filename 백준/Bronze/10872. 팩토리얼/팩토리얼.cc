#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, i, sum;
    i = 1;
    sum = 1;
    cin >> a;
    while (i < a + 1) {
        sum = sum * i;
        ++i;
    }
    cout << sum;
}