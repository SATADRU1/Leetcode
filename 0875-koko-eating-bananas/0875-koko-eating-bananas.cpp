class Solution {
public:
    bool canEatAll(vector<int>& piles, int mid, int h){
        int actualHr = 0;
        for(auto &x : piles){
            actualHr += x/mid;
            if(x%mid != 0)
                actualHr++;
        }
        return actualHr <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(begin(piles), end(piles));

        while(l<r){
            int mid = l + (r-l)/2;
            if(canEatAll(piles, mid, h))
                r = mid;
            else 
                l = mid + 1;
        }
        return l;
    }
};