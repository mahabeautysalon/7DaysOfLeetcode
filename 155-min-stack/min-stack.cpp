class MinStack {
public:
    int top_index;
    vector<int> stack;
    MinStack() {
        top_index=-1;
    }
    
    void push(int val) {
        top_index++;
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
        top_index--;
    }
    
    int top() {
        return stack[top_index];
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int i=0; i<stack.size(); i++)
        {
            if(min>stack[i])
            {
                min = stack[i];
            }
        }
        return min;
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