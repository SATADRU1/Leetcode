class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>count(101, 0);
        for(int h : heights){
            count[h]++;
        }

        vector<int>expected;
        for(int i=0;i<100;i++){
                while(count[i] > 0){
                    expected.push_back(i);
                    count[i]--;
                }
        }

        int matchCount = 0;
        for(int i=0;i<heights.size(); i++){
            if(heights[i] != expected[i])
                matchCount++;
        }
        return matchCount;
    }
};