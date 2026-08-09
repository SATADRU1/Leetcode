class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    int peekEL = -1; 

    MyQueue() {

    }
    
    void push(int x) {
        if(input.empty())
            peekEL = x;
        input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            //input theke output e dhokabo
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty())
            return peekEL;
        return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */