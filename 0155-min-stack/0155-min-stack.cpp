class MinStack {
public:

    // ----------- BRUTE FORCE APPROACH ------------
    
    /* stack<int> s1;
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
    } */

    // -------------- BETTER PPROACH
/* 
    stack<pair<int,int>> s1;

    MinStack() {
        
    }
    
    void push(int value) {
        if(!s1.empty()){
            s1.push({value,min(value,s1.top().second)});
        }else{
            s1.push({value,value});
        }
    }
    
    void pop() {
        s1.pop();
    }
    
    int top() {
        return s1.top().first;
    }
    
    int getMin() {
        return s1.top().second;
    } */

    // -------------- OPTIMAL APPROACH -------

    stack<long long> s1;
    long long mini = LLONG_MAX;

    MinStack() {
        
    }
    
    void push(int value) {
        if(s1.empty()){
            s1.push(value);
            mini = value;
        }else{
            if(mini<value) s1.push(value);
            else {long long new_value = 2LL*value-mini;s1.push(new_value);mini = value;}
        }
    }
    
    void pop() {
        long long elem = s1.top();
        s1.pop();
        if(elem < mini){
            mini = 2*mini - elem;
        }
    }
    
    int top() {
        long long elem = s1.top();
        if(elem > mini) return elem;
        return mini;
    }
    
    int getMin() {
        return mini;
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