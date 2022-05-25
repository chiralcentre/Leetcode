#include <list>
#include <unordered_map> //hash table DS

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        list<char> stack = {};
        unordered_map<char,char> parentheses = {{'(',')'},{'[',']'},{'{','}'}};
        for (char c: s){
            if (parentheses.count(c) == 1){ //if c is an opening parenthesis
                stack.push_back(c);
            }
            else {
                if (stack.size() > 0 && parentheses[stack.back()] == c){
                    stack.pop_back();
                }
                else return false;
            }
        }
        //if there are leftover opening parentheses in the stack, the input stirng is not valid
        return stack.size() > 0 ? false : true;
    }
};