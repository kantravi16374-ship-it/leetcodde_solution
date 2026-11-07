class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int totalSubset=1<<n;
        vector<vector<int>>result;
        for(int i=0;i<totalSubset;i++){
            vector<int>curr;
            for(int j=0;j<n;j++){
                if(i &(1<<j)){
                  curr.push_back(nums[j]);
                }
                
            }
            result.push_back(curr);
        }
        return result;

        
    }
};