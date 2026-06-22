#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;

        Node(int data,Node* next = nullptr,Node* back = nullptr):data(data),next(next),back(back){};

};

Node* convertArrayToDLL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void outputDLL(Node* head){
    while(head != nullptr)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    int size;
    cin>>size;

    vector<int> input(size);

    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        input[i] = num;
    }

    Node* head = convertArrayToDLL(input);
    outputDLL(head);
}