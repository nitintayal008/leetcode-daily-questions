class MyStack {
public:queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
        int n=q1.front();
        q2.push(n);
        q1.pop();
        }
        
        q1.push(x);
        while(!q2.empty()){
            int m=q2.front();
            q1.push(m);
            q2.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty())return -1;
        int p = q1.front();
        q1.pop();
        return p;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
      return  q1.empty();
    }
};

