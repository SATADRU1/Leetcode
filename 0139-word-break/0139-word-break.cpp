class Solution {
public:
    int n;
    int t[301];
    unordered_set<string>st;

    bool solve(int idx, string s){
        if(idx==n)
            return true; //out of bound hoye gache mane sob kichu itterate kore dekyha done 
        if(t[idx] != -1)
            return t[idx];

        if(st.find(s) != st.end()) //jodi already present thake then true return kore debo
            return t[idx] = true;
        
        for(int l=1;l<n;l++){
            string temp = s.substr(idx, l);      //jodi na present thake temp e store kore nebo
            if(st.find(temp) != st.end() && solve(idx+l, s)) //then substring wise khujbo ter sathe bakitao 
                return t[idx] = true;
        }
        return t[idx] = false;
    }


    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.length();
        memset(t, -1, sizeof(t));

        for(auto word : wordDict){
            st.insert(word);
        }

        return solve(0, s);
    }
};