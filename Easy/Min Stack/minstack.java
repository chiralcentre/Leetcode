import java.util.Stack;

class MinStack {
    private Stack<Integer> elements;
    private Stack<Integer> minimum;

    public MinStack() {
        this.elements = new Stack<Integer>();
        this.minimum = new Stack<Integer>();
    }
    
    public void push(int val) {
        elements.push(val);
        if (minimum.size() == 0 || minimum.peek() >= val){
            minimum.push(val);
        }
    }
    
    public void pop() {
        int val = elements.pop();
        if (minimum.peek() == val){
            minimum.pop();
        }
    }
    
    public int top() {
        return elements.peek();
    }
    
    public int getMin() {
        return minimum.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */