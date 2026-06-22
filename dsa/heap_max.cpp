#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int> &heap , int value
)
{
    heap.emplace_back(value);

    int index = heap.size() - 1;
    while(index>0 && heap[(index-1)/2] < heap[index])
    {
        swap(heap[index],heap[(index-1)/2]);
        index = (index-1)/2;
    }
}

void deleteMax(vector<int>& heap,int value)
{
    int index=-1;
    for(int i=0;i<heap.size();i++)
    {
        if(heap[i] == value)
        {
            index = i;
            break;
        }
    }

    if(index==-1) return;
    heap[index] = heap[heap.size()-1];
    heap.pop_back();

    while(true)
    {
        int left_child = 2*index+1;
        int right_child = 2*index+2;
        int largest = index;
                if (left_child < heap.size() && heap[left_child] > heap[largest]) {
            largest = left_child;
        }
        if (right_child < heap.size() && heap[right_child] > heap[largest]) {
            largest = right_child;
        }

        if(largest != index)
        {
            swap(heap[index],heap[largest]);
            index=largest;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr;
    vector<int>values = { 13, 16, 31, 41, 51, 100 };
    int n = values.size();
    for (int i = 0; i < n; i++) {
        insert(arr, values[i]);
    }
    cout << "Initial heap: ";
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    deleteMax(arr, 13);
    cout << "Heap after deleting 13: ";
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}