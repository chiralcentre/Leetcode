#include <vector>
#include <cmath> //std:: pow
#include <algorithm> //std:: sort

using namespace std;
// custom comparator function for sorting purposes
bool comparePoints(vector<int>&p1, vector<int>& p2){
    return pow(p1[0],2) + pow(p1[1],2) < pow(p2[0],2) + pow(p2[1],2);
}

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),comparePoints);
        vector<vector<int>> ans;
        for (int i = 0; i < k; i++) ans.push_back(points[i]);
        return ans;
    }
};