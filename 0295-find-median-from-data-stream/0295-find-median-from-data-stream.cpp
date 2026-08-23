template <typename T>
using MaxHeap = priority_queue<T>;

template <typename T>
using MinHeap = priority_queue< T , vector< T > , greater <T> >;

class MedianFinder {

private:
    int size = 0;
    MinHeap<int> minHeap;
    MaxHeap<int> maxHeap;
public:
    MedianFinder() {}
    
    void addNum(int num) {
        maxHeap.push(num);
        size++;
        if(minHeap.size() > 0 and maxHeap.top() > minHeap.top()){
            minHeap.push(maxHeap.top());
            maxHeap.pop();

            if(minHeap.size() > maxHeap.size()){
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }

        if(maxHeap.size() > minHeap.size()+1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
    }
    
    double findMedian() {
        if(size % 2 == 1) return maxHeap.top();
        return (minHeap.top() + maxHeap.top())/ 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */