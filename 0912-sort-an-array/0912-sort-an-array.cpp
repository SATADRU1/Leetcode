class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //without using any built-in functions in O(nlog(n))
        //means we have to implement our own sorting function here im using counting sort
        int a = nums.size();
        unordered_map<int , int>mp;
        for(auto &n : nums){
            mp[n]++;
        }

        int minE = *min_element(begin(nums), end(nums)); //built in function 
        int maxE = *max_element(begin(nums), end(nums));

        vector<int>result(a);
        int i =0;
        for(int n = minE; n<=maxE; n++){
            while(mp[n]> 0){
                result[i] = n;
                i++;
                mp[n]--;
            }
        }
        return result;
    }
};