#include <iostream>;
#include <vector>;
#include <unordered_set>;

using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    set.insert(nums.begin(), nums.end());
    return nums.size() != set.size();
}

int main () {
    //https://leetcode.com/problems/contains-duplicate/

    vector<int> nums = {1,2,3,4,5};
    // vector<int> nums = {1,1,1,3,3,4,3,2,4,2};

    cout << containsDuplicate(nums) << endl;


}
