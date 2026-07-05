class MyHashMap {

private:

    class Node {
        public:
            int key;
            int value;

            Node* next;

            Node(int key,int value):key(key),value(value),next(nullptr){};
    };

    vector<Node*> map;

    int hashKey(int key){
        return key % map.size();
    }

public:

    MyHashMap() {
        map.resize(1000);
        for(auto &bucket : map){
            bucket = new Node(0,-1);
        }
    }
    
    void put(int key, int value) {
        Node* curr = map[hashKey(key)];

        while(curr->next){
            if(curr->next->key == key){
                curr->next->value = value;
                return;
            }
            curr = curr->next;
        }

        curr->next = new Node(key,value);
        return;

    }
    
    int get(int key) {
        Node* curr = map[hashKey(key)];
        while(curr->next){
            if(curr->next->key == key){
                return (curr->next->value);
            }
            curr = curr->next;
        }

        return -1;
    }
    
    void remove(int key) {
        Node* curr = map[hashKey(key)];

        while(curr->next){
            if(curr->next->key == key){
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */