class myQueue {

  public:
  
    stack<int>input;
    stack<int>output;
    int peekEL = -1;
    
    myQueue() {
        // Initialize your data members
    }
    // bool empty(){
    //     if(input.empty() && output.empty())
    //         return true;
    //     return false;
    // }

    void enqueue(int x) {
        // Implement enqueue operation
        if(input.empty())
            peekEL = x;
        input.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
        if(output.empty()){
            //input theke ante hobe 
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        if(!output.empty())
            output.pop();
        // int val = output.top();
        // output.pop();
        // return ;
        
        // Queue completely empty
        if(output.empty() && input.empty())
        peekEL = -1;
        
    }

    int front() {
        // Implement front operation
        if(output.empty())
            return peekEL;
        return output.top();
    }

    int size() {
        // Implement size operation
        return input.size() + output.size();
    }
};
