#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& a) {
        int majorElement = 0, count = 0;
        for(int i = 0; i < a.size(); i++){
            if(count == 0){
                count++;
                majorElement = a[i];
            }
            else if(majorElement == a[i]){
                count++;
            } else count--;
        }
        return majorElement;
    }
};
