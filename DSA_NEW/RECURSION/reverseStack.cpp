#include <bits/stdc++.h>
using namespace std;


void insertDelete(stack<int> &st,int number){
    if(st.empty() == true)
    {
        st.push(number);
        return;
    }
    else
    {
        int num = st.top();
        st.pop();
        insertDelete(st,number);
        st.push(num);

    }
}

void reverseStack(stack<int> &st) {
    if(st.empty()) return;
    int number = st.top();
    st.pop();
    reverseStack(st);
    insertDelete(st,number);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        stack<int> st;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            st.push(x);
        }

        reverseStack(st);

        // print stack (top to bottom)
        while(!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}