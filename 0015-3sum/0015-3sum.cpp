class Solution {

vector<vector<int>>result;
void twoSum(vector<int>& nums,int target , int i , int j){
    while(i < j){
    if((nums[i] + nums[j]) > target)
        j--;
    else if((nums[i] + nums[j]) < target)
        i++;

    //remove duplicate 
    else{
        while (i<j && nums[i] == nums[i+1])
            i++;
        while (i<j && nums[j] == nums[j-1])
            j--;
        result.push_back({-target , nums[i] , nums[j]});
    
        i++;
        j--;
    }
    }
    
}
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        //corner case
        if(n<3)
        return {};

        result.clear();
        //sorting
        sort(nums.begin() , nums.end());

        //remove duplicate from the nums 
        for(int i=0; i<n; i++ ){
            if(i>0 && nums[i] == nums[i-1])
                continue;
                
         //fix n1
        int n1 = nums[i];
        int target = -n1;

        twoSum(nums , target , i+1 , n-1);
        }
        
        return result;
    }
};