#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int l = num.length();
        for (int i = 0; i < l/2; i++){
            if (num[i] != num[l - i - 1]) return false;
        }
        return true;
    }
};
