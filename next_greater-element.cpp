#include<iostream>
using namespace std;

//codestudio code
#include<stack>
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans(n);
        
    stack<int> st;
    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();   
        }
        
        if(!st.empty()){
            ans[i] = st.top();
        }else{
            ans[i] = -1;
        }
        st.push(arr[i]);
    }
    return ans;
}//codestudio code

int main()
{
    
    return 0;
}