#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
// sort by frequency in descending order and by number in descending order
// customComparator function must be placed out of Solution class
bool customComparator(const pair<int,int>&a, const pair<int,int>&b){
    if (a.second != b.second) return a.second > b.second;
    return a.first > b.first;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequencies;
        for (int n: nums){
            if (frequencies.count(n) == 1) frequencies[n]++;
            else frequencies[n] = 1;
        }
        vector<pair<int,int>> lst;
        for (pair<int,int> p: frequencies) lst.push_back(p);
        sort(lst.begin(),lst.end(),customComparator);
        vector<int> ans;
        for (int i = 0; i < k; i++) ans.push_back(lst[i].first);
        return ans;
    }
};