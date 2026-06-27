#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> input){
    int n = input.size();
    vector<int> pse(n,-1);

    stack<int> st;

    for(int i=0;i<=n-1;i++){

        while(!st.empty() && st.top() >= input[i]) st.pop();

        if(!st.empty()) pse[i] = st.top();

        st.push(input[i]);
    }

    return pse;
}

int main(){
    int test_size;
    cin>>test_size;

    for(int i=0;i<=test_size;i++)
    {   
        int n;
        cin >> n;
        vector<int> input(n);        

        for(int j=0;j<n;j++){
            cin >> input[j];
        }

        vector<int> ans = nextSmallerElement(input);
        for(int j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }

        cout<<endl;
    }
}
