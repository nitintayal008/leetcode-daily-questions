class MyCircularQueue {
public:
    int front = -1, rear = -1, size;
    vector<int>s;

    MyCircularQueue(int k) {
        s.resize(k);
        size=k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(isEmpty())
            front=0;
        
        rear=(rear+1)%size;
        s[rear]=value;
        
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(front==rear){
            front =-1, rear =-1;
            return true;
        }
        front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if(front == -1)
            return -1;
        else
            return s[front];
    }
    
    int Rear() {
        return isEmpty()?-1:s[rear];  
    }
    
    bool isEmpty() {
     if (rear == -1)
            return true;
        return false;
    }
    
    bool isFull() {
        if((rear+1)% size ==front )
            return true;    
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */