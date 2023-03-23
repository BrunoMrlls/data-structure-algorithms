#include <iostream>
#include <stack>

using namespace std;

bool isValid(string &s);

int main() {
    //https://leetcode.com/problems/valid-parentheses/description/
    string a1 = "()";
    string a2 = "([}}])";
    string a3 = "{([)]]}";
    string a4 = "})";
    cout << "must be: "<< "1" << " ->  " << isValid(a1) << endl;
    cout << "must be: "<< "0" << " ->  " << isValid(a2) << endl;
    cout << "must be: "<< "0" << " ->  " << isValid(a3) << endl;
    cout << "must be: "<< "0" << " ->  " << isValid(a4) << endl;
}

bool isValid(string &s) {
    if (s.size() % 2 != 0) {
        return false;
    }
    stack <char> stk;
    for (char i : s) {
        char c = i;
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
            continue;
        } else if (!stk.empty()) {
            if (stk.top() == '(' && i == ')' || stk.top() == '{' && i == '}' || stk.top() == '[' && i == ']') {
                stk.pop();
                continue;
            }
        }
        return false;
    }
    return stk.empty();
}