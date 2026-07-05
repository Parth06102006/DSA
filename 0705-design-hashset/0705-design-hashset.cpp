class MyHashSet {
public:
    vector<int> isPresent = vector<int>(1000000,0);

    MyHashSet() {
        
    }
    
    void add(int key) {
        isPresent[key] = 1;

    }
    
    void remove(int key) {
        isPresent[key] = 0;
    }
    
    bool contains(int key) {
        return (isPresent[key] == 1) ? true : false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */