#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m; vector<int> v;
        for(int i = 0; i < nums.size(); i++){       
            if (m.find(target-nums[i]) != m.end()){
                // auto keyword indicates p has a complicated variable type
                auto p = m.find(target-nums[i]);        
                v.push_back(p->second);
                v.push_back(i);
            }
            m.insert(make_pair(nums[i],i));
        }
        return v;
    }
};