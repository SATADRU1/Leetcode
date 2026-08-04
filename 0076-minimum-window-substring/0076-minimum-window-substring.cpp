class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if(t.length() > n)
            return "";
        
        unordered_map<char,int>mp; //map er moddhe t er element gulo tader frequncy diye dhukiye nebo
        for(char &ch: t)
            mp[ch]++;
        
        int requiredCount = t.length();
        int i =0;
        int j=0;
        int windowSize = INT_MAX;
        int start_i = 0;

        while(j<n){ // j khujte jabe element ar seigulo ch er moddhe shote korbe 
            char ch = s[j];
            if(mp[ch] > 0) //store korrar por check korbe map e ache kina , jodi thake to map r count ta -- korbe 
                requiredCount--;
            mp[ch]--;
        

            while(requiredCount==0){ //jodi requiredCount = 0 hoye jay 
                int currentWindowSize = j-i+1; //tahole current er moddhe seta r size store korbo 
                if(windowSize > currentWindowSize){ //then compare korbo window r sathe 
                    windowSize = currentWindowSize; // jodi current ta choto hoy ..then update kore nebo windowsize e 
                
                    start_i = i; //window r starting ta je i te ache seta start_i te store kore nilam 
                }
                mp[s[i]]++;

                if(mp[s[i]] > 0)  //jodi map e kono karone kono element er frwq >0 hoye jay then that element amader lagbe 
                //tai jonno requiord count o barate hobe 
                    requiredCount++;
                
                i++;
            }
            j++;
        }
        return windowSize == INT_MAX ? "" : s.substr(start_i , windowSize);
    }
};