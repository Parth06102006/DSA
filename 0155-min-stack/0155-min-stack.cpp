class MinStack {
public:

    stack<int> s1;
    int minElem = INT_MAX;

    MinStack() {
        
    }
    
    void push(int value) {
        s1.push(value);
        if(minElem > value) minElem = value;
    }
    
    void pop() {
        int elem = s1.top();
        s1.pop();

        // Occurs Only if the least element deleted was the top one
        if(elem == minElem){
            stack<int> s2;
            int minimum_new = INT_MAX;
            while(!s1.empty()){
                minimum_new = min(s1.top(),minimum_new);
                s2.push(s1.top());
                s1.pop();
            }

            // Assigning new Value
            minElem = minimum_new;
            
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return minElem;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */