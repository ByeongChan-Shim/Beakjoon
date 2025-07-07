#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string a;
    int b;
    cin >> a;
    b = a.length();
    for(int i=0;i<b;i++) {
        if (islower(a[i])) a[i] = toupper(a[i]);
        else a[i] = tolower(a[i]);
    }
    cout << a;
}