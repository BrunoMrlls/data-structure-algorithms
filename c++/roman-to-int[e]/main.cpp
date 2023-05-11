#include <iostream>
#include <unordered_map>

using namespace std;

//https://leetcode.com/problems/roman-to-integer/

const static unordered_map<char, int> ROMAN = {
  {'I', 1}
  , {'V', 5}
  , {'X', 10}
  , {'L', 50}
  , {'C', 100}
  , {'D', 500}
  , {'M', 1000} 
};

int toInt(string roman) {
    int answer = 0;
    int size = roman.size();
    for (int i = 0; i < size; i++) {
        int c = ROMAN.at( roman[i] );
        int n = 0;
        if (i < size-1) {
              n = ROMAN.at( roman[i + 1] );
        }
        (c >= n) ? answer += c : answer -= c;
    }
    return answer;
}

int main () {

  cout <<  toInt("III") << endl; // 3
  cout <<  toInt("LVIII") << endl; //58
  cout <<  toInt("MCMXCIV") << endl; //1994
}