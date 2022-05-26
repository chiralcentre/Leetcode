#include <unordered_map> 

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> letters;
        for (char &ch: s){
            if (letters.count(ch) == 1) letters[ch]++;
            else letters[ch] = 1;
        }
        for (char &ch: t){
            if (letters.count(ch) == 1) letters[ch]--;
            else return false;
        }
        for (auto &pair: letters){
            if (pair.second != 0) return false;
        }
        return true;
    }
};
