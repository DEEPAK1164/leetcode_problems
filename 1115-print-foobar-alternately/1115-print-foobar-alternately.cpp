class FooBar {
private:
    int n;
    mutex m;
    condition_variable cv;
    bool turn;
public:
    FooBar(int n) {
        this->n = n;
        turn=0;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            
        	// printFoo() outputs "foo". Do not change or remove this line.
            unique_lock<mutex>lock(m);
            while(turn==1)
            {
                cv.wait(lock);
            }
            turn=1;
        	printFoo();
            cv.notify_all();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
              unique_lock<mutex>lock(m);
        	// printBar() outputs "bar". Do not change or remove this line.
             while(turn==0)
            {
                cv.wait(lock);
            }
            turn=0;
        	printBar();
             cv.notify_all();
        }
    }
};