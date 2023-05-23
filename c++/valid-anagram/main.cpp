#include <iostream>

using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

bool  isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != s[i]) return false;
    }
    return true;
}

int main () {

cout << isAnagram("anagram", "nagarmm") << endl;

}