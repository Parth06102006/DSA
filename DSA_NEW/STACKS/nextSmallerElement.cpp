#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> input){
    int n = input.size();
    vector<int> nse(n,-1);

    stack<int> st;

    for(int i=n-1;i>=0;i--){

        while(!st.empty() && st.top() >= input[i]) st.pop();

        if(!st.empty()) nse[i] = st.top();

        st.push(input[i]);
    }

    return nse;
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
