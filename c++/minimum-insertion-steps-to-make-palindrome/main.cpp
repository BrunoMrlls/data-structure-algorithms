
#include<iostream>
#include<vector>

using namespace std;

int doInsertionToMakePalindrome(string& s);

int main () {
    //https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/
    // leetcode -> 1234567   7654321
    // leetcode -> leetcod e docteel
//    string call = "leetcode";
    //mbadm -> mbD-a-dBm //add D and B on two side.
    string call = "mbadm";
    int ans = doInsertionToMakePalindrome(call);

    cout << ans << endl;

}

int doInsertionToMakePalindrome(string& s) {
    int size = s.size();
    vector<int> dp(size); //dynamic programing
    vector<int> dpPrev(size);
    for (int i = size - 1; i >= 0; --i) {
        dp[i] = 1;
        for (int j = i + 1; j < size; ++j) {
            if (s[i] == s[j]) {
                int pos = j - 1;
                cout << pos << endl;
                dp[j] = dpPrev[j - 1] + 2;
            } else {
                dp[j] = max(dpPrev[j], dp[j - 1]);
            }
        }
        dpPrev = dp;
    }
    //all characters plus added minus original size to get only steps added.
    return size - dp[size - 1];
}

