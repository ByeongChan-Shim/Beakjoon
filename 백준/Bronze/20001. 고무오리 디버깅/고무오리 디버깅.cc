#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string s = "";
    stack<string> ss;
    while (s != "고무오리 디버깅 끝") {
        getline(cin, s);
        if (s == "문제") ss.push(s);
        else if (s == "고무오리") {
            if (ss.empty()) ss.push("문제"), ss.push("문제");
            else ss.pop();
        }
        else if (s == "고무오리 디버깅 끝") ss.push("s");
    }
    ss.pop();
    if (ss.empty()) cout << "고무오리야 사랑해";
    else cout << "힝구";
}