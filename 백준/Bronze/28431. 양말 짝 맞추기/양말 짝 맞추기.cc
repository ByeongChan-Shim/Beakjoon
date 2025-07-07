#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a;
    int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 5; ++i) {
        cin >> a;
        array[a] += 1;
    }
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 1) cout << i;
    }
}