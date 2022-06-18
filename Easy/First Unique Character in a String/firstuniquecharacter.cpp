#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> frequencies = {};
        for (char c: s){
            if (frequencies.count(c) == 1) frequencies[c]++;
            else frequencies[c] = 1;
        }
        for (int i = 0; i < s.length(); i++){
            if (frequencies[s[i]] == 1) return i;
        }
        return -1;
    }
};