class LFUCache {
    class Node {
        public:
            int key;
            int value;
            int cnt;
            Node* next;
            Node* prev;

            Node(int key,int value):key(key),value(value),cnt(1){};
    };

    class List
    {   
        public :

            int size = 0;
            Node* head;
            Node* tail;

            List(){
                head = new Node(-1,-1);
                tail = new Node(-1,-1);
                head->next = tail;
                tail->prev = head;
                size = 0;
            }

            void addNode(Node* newNode){
                Node* temp = head->next;
                head->next = newNode;
                newNode->next = temp;
                newNode->prev = head;
                temp->prev = newNode;
                size++;
            }

            void deleteNode(Node* oldNode){
                Node* prevNode = oldNode->prev;
                Node* nextNode = oldNode->next;
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
                size--;
            }
    };

public:
    unordered_map<int,Node*> mpp;
    unordered_map<int,List*> freqList;
    int capacity = 0;
    int minFreq = 0;

    LFUCache(int capacity){
        this->capacity = capacity;
    };

    void updateFreqList(Node* node){
        int oldFreq = node->cnt;
        freqList[oldFreq]->deleteNode(node);

        if (node->cnt == minFreq && freqList[node->cnt]->size == 0){
            minFreq++;
        }

        node->cnt = oldFreq + 1;
        List* nextHigherFreq;
        if(freqList.find(node->cnt) != freqList.end()) nextHigherFreq = freqList[node->cnt];
        else  {
            nextHigherFreq = new List();
            freqList[node->cnt] = nextHigherFreq;

        }
        nextHigherFreq->addNode(node);
        mpp[node->key] = node;
    }
    
    int get(int key) {
        if(mpp.find(key) != mpp.end()){
            Node* temp = mpp[key];
            int result = temp->value;
            updateFreqList(temp);
            return result;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (mpp.find(key) != mpp.end()){
            Node* temp = mpp[key];
            temp->value = value;
            updateFreqList(temp);
        }else{
            if(mpp.size() == capacity){
                List* list = freqList[minFreq];
                mpp.erase(list->tail->prev->key);
                freqList[minFreq]->deleteNode(list->tail->prev);
            }

            minFreq = 1;

            if (freqList.find(minFreq) == freqList.end()) {
                freqList[minFreq] = new List();
            }

            List* listFreq = new List();
            if(freqList.find(minFreq) != freqList.end()){
                listFreq = freqList[minFreq];
            }

            Node* newNode = new Node(key,value);
            listFreq->addNode(newNode);
            mpp[key] = newNode;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */