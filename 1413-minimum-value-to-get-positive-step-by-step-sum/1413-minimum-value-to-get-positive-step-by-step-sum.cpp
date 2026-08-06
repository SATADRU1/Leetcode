class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int hp = 0;
        int worst_drop = 0;

        for(int num : nums){ // after itterating all elements lets add and store in hp 
            hp += num;

            if(hp < worst_drop)   //jodi worst_drop er value hp r theke kome jay song songe 
                worst_drop = hp;  // worst drop er value from 0 -> hp hobe 
        }

        return 1 - worst_drop;  // (1 - (-4)) = 5
    }
};