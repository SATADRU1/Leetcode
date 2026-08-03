class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int, int>p;
        unordered_map<int, int>mp;
        vector<int>result;

        for(int &n : nums) //map er moddhe element gulo dhokano holo
            mp[n]++;

            //min heap ta define korbo
            priority_queue<p, vector<p>, greater<p>>pq;

            //element gulo min heap e push korbo
            for(auto &it : mp){
                int value = it.first; 
                int freq = it.second;

                pq.push({freq, value});
                if(pq.size() > k)
                    pq.pop();
            }
            //push into result
            while(!pq.empty()){
                result.push_back(pq.top().second);
                pq.pop();
            }
        
        return result;
    }
};