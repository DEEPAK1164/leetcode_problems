class MyHashSet {
    int bucketSize;
    vector<vector<int>>bucket;
    int hashFun(int key)
    {
        return key%bucketSize;
    }
public:  
    
    MyHashSet() {
     bucketSize=10001;
        bucket=vector<vector<int>>(bucketSize,vector<int>{});
    }
    
    void add(int key) {
        int i=hashFun(key);
        if(find(bucket[i].begin(),bucket[i].end(),key)==bucket[i].end())
        {
            bucket[i].push_back(key);
        }
        
    }
    
    void remove(int key) {
       int i=hashFun(key); 
        auto it=find(bucket[i].begin(),bucket[i].end(),key);
        if(it!=bucket[i].end()) 
        {
            bucket[i].erase(it); 
        }
    }
    
    bool contains(int key) {
          int i=hashFun(key); 
         if(find(bucket[i].begin(),bucket[i].end(),key)==bucket[i].end())
             return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */