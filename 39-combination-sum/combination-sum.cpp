class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>>dp(target+1);
        dp[0]={{}};
        for(int c : candidates){
            for(int i=c;i<=target;i++){
                for(auto comb:dp[i-c]){
                    comb.push_back(c);
                    dp[i].push_back(comb);
                }
            }
        }
        return dp[target];

        
    }
};