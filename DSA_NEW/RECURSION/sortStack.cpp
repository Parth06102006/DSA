#include <bits/stdc++.h>
using namespace std;

void insertDelete(int num,stack<int> &st)
{
    if(st.empty() || st.top()<=num){
        st.push(num);
        return;
    }
    else if (!st.empty() && num<st.top())
    {
        int num_sec = st.top();
        st.pop();
        insertDelete(num,st);
        st.push(num_sec);
    }
    
}

void sortStack(stack<int> &st)
{
    if(st.empty()) return;
    int num = st.top();
    st.pop();
    sortStack(st);
    insertDelete(num,st);
    return;
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

        sortStack(st);

        // print stack (top to bottom)
        while(!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}