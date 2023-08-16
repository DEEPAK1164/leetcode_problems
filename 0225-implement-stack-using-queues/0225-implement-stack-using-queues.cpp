class MyStack {
public:
   queue<int>q;
    void push(int x) {
        q.push(x);  // Push the new element to the queue

    // Rotate the queue to simulate the stack behavior
    int sz = q.size();
    for (int i = 0; i < sz - 1; i++) {
        q.push(q.front());  // Push the front element to the back
        q.pop();            // Remove the front element
    }
    }
    
    int pop() {
        if(q.empty())
            return -1;
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        if(q.empty())
            return -1;
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
