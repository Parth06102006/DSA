class MyStack {
public:

    queue<int> q1;

    MyStack() {}
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        reverse();
        int topElem = q1.front();
        q1.pop();
        if(q1.size() > 1){
            reverse();
        }
        return topElem;

    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }

    void reverse(){
        if(q1.empty()){
            return;
        }

        int front = q1.front();
        q1.pop();

        reverse();

        q1.push(front);

    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */