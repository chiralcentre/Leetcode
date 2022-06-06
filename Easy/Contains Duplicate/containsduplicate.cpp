#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for (int &n: nums){
            if (unique.find(n) != unique.end()) return true;
            else unique.insert(n);
        }
        return false;
    }
};