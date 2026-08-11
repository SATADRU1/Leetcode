class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        
        stack<int>st;
        
        int n = arr.size();
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--){
            int element = arr[i];
            
            //remove all thsoe elements which are smaller 
            while(!st.empty() && st.top() <= element){
                st.pop();
            }
            
            if(st.empty())
                ans[i] = -1;
                
            else
                ans[i] = st.top();
            
            st.push(element);
        }
        return ans;
    }
};