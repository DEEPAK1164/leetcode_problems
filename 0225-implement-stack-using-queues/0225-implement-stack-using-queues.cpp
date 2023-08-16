class MyStack {
private:
    std::queue<int> q1, q2;

public:
    MyStack() {

    }

    void push(int x) {
        // Push the new element to an empty queue
        if (q1.empty()) {
            q1.push(x);
            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        } else {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }

    int pop() {
        if (!q1.empty()) {
            int val = q1.front();
            q1.pop();
            return val;
        } else if (!q2.empty()) {
            int val = q2.front();
            q2.pop();
            return val;
        }
        // Return some default value or handle the underflow case
        return -1; // For example
    }

    int top() {
        if (!q1.empty()) {
            return q1.front();
        } else if (!q2.empty()) {
            return q2.front();
        }
        // Return some default value or handle the underflow case
        return -1; // For example
    }

    bool empty() {
        return q1.empty() && q2.empty();
    }
};
