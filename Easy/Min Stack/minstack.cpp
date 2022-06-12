#include <vector>

using namespace std;

class MinStack {
    vector<int> elements;
    vector<int> minimum;
public:
    MinStack() {
        elements = {};
        minimum = {};
    }
    
    void push(int val) {
        elements.push_back(val);
        if (minimum.size() == 0 || minimum.back() >= val){
            minimum.push_back(val);
        }
    }
    
    void pop() {
        int val = elements.back();
        elements.pop_back();
        if (minimum.back() == val){
            minimum.pop_back();
        }
    }
    
    int top() {
        return elements.back();
    }
    
    int getMin() {
        return minimum.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */