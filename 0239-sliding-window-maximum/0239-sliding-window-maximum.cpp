class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int>deq;
        vector<int>result;

        // if (n == 0)
        //     return {}; this is not needed as the constrains of this not given 

        for(int i=0;i<n;i++){
            //step 1 samner jegulo dorkar nei sorate hobe 
            while(!deq.empty() && deq.front() <= i-k){
                deq.pop_front();
            }

            //step 2 notun element jodi deq e thaka element er theke boro hoy then pop korte hobe purono elemnt take
            while(!deq.empty() && nums[i] > nums[deq.back()]){
                deq.pop_back();
            }
            //step 3 then push korbo notun element ta 
            deq.push_back(i);

            // step 4: jokhon i >= k-1 hobe tokhon window theke result pawa suru hoye jabe just if i = 0,1 thene result aste i ke minimum 2 hote hobe if k=3
            if(i >= k-1)
                //result e push korbo sei num gulo jegulo deq er sobar prothome thakbe
                result.push_back(nums[deq.front()]);
        }
        return result;
    }
};