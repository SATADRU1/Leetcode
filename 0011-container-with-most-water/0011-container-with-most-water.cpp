class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int i = 0;
        int j = n-1;

        while(i<j){
            int h = min(height[i], height[j]);
            int w = j - i;

            int area = w * h;
            maxWater = max(maxWater, area);

            if(height[i] > height[j])
                j--;
            else
                i++;
        }
        return maxWater;
    }
};