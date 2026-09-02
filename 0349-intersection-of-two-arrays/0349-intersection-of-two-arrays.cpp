class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int m = nums1.size();
        int n = nums2.size();

        int i=0;
        int j=0;

        vector<int>result;

        while(i<m && j<n){
            if(nums1[i] == nums2[j]){    
                result.push_back(nums1[i]);
            
                //skip the duplicate 
                while(i<m-1 && nums1[i]==nums1[i+1]){
                    i++;
                }
                while(j<n-1 && nums2[j]==nums2[j+1]){
                    j++;
                }
                i++;
                j++;
            }

            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;

        }
        return result;
    }
};