#include <iostream>

using namespace std;

    string mergeAlternately(string word1, string word2) {
        const int s1 = word1.size();
        const int s2 = word2.size();
        int j = 0, i = 0;
        string answer = "";
        for (;i < s1 || j < s2;) {
            if (i < s1)
                answer += word1[i++];
            if (j < s2)
                answer += word2[j++] ; 
        }
        return answer;
    }

int main () { 
    cout <<   mergeAlternately("abc", "pqr") << endl;
    cout << mergeAlternately("ab", "x") << endl;
    cout << mergeAlternately("abcd", "pq") << endl;
}