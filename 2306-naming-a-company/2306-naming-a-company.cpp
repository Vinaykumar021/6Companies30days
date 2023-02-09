class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map <string,int> mp;
        for(auto u : ideas) mp[u]++;
        
        vector <vector <int>> dp(26,vector<int>(26,0));
        for(int i = 0; i<ideas.size(); i++){
            string temp = ideas[i];
            char ch1 = temp[0];
            for(int j = 0; j<26; j++){
                temp[0] = j+'a';
                if(mp.find(temp)==mp.end()) 
                    dp[ch1-'a'][j]++;
            }
        }
        
        long long ans = 0;
        for(int i = 0; i<26; i++){
            for(int j = 0; j<26; j++){
                ans += dp[i][j]*dp[j][i];
            }
        }
        return ans;
    }
};