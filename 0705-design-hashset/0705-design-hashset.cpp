class MyHashSet {
public:

    vector<int> nums;
    vector<int> isPresent = vector<int>(1000000,0);

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(isPresent[key] == 0){
            nums.push_back(key);
            isPresent[key] = 1;
        }

    }
    
    void remove(int key) {
        if (isPresent[key] == 1){
            for(int i=0;i<nums.size();i++){
                if(key == nums[i])
                {
                    for(int j=i+1;j<nums.size();j++){
                        nums[j-1] = nums[j];
                    }
                    isPresent[key] = 0;
                    break;
                }
            }
        }
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