class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int>mp;
        stack<int>st;

        for(int i=n2-1; i>=0; i--){
            int element = nums2[i];

            //remove all those lements whivh are smaller or equal to the element
            while(!st.empty() && st.top() <= element){
                st.pop();
            }
            
            //if stack is empty no greater element found 
            if(st.empty())
                mp[element] = -1;
            else
                mp[element] = st.top();
            
            st.push(element);
        }

        vector<int>ans;
        for(auto a : nums1){
            ans.push_back(mp[a]);
        }
        return ans ;
    }
};