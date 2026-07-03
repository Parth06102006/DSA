class LRUCache {
public:

    class Node{
        public:
            int key;
            int value;
            Node* next;
            Node* prev;
            Node(int a,int b):key(a),value(b){};
    };

    unordered_map<int,Node*> mpp;
    int capacity;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    // Used to add node after head
    void addNode(Node* newNode){
        Node* temp = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = temp;
        temp->prev = newNode;
    }

    void deleteNode(Node* oldNode){
        Node* prevNode = oldNode->prev;
        Node* nextNode = oldNode->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    int get(int key) {
        if (mpp.find(key) != mpp.end()){
            Node* resNode = mpp[key];
            int res = resNode->value;
            deleteNode(resNode);
            addNode(resNode);
            return res;
        }

        return -1;
    }
    
    void put(int key, int value) {
        if (mpp.find(key) != mpp.end()){
            Node* temp = mpp[key];
            temp->value = value;
            deleteNode(temp);
            addNode(temp);

            mpp[key] = temp;
        }else{
            if(mpp.size() >= capacity){
                mpp.erase(tail->prev->key);
                Node* temp_to_delete = tail->prev;
                deleteNode(tail->prev);
                delete temp_to_delete;
            }

            addNode(new Node(key,value));
            mpp[key] = head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */