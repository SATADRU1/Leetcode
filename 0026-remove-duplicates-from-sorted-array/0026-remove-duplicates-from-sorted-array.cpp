class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;

        while(j < n){
            if(nums[i] != nums[j]){  //got unique elemenet
                i++;
                nums[i] = nums[j];
            }
            j++; //go for new element
        }
        return i+1;
    }
};