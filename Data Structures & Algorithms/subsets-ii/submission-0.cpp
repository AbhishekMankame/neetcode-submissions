class Solution {
public:

    void getSubset(vector<int>& nums, vector<vector<int>>& ans, vector<int>& sub, int i){
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(i==n){
            ans.push_back({sub});
            return;
        }
        sub.push_back(nums[i]);
        getSubset(nums, ans, sub, i+1);
        sub.pop_back();
        int idx = i+1;
        while(idx < n && nums[idx]==nums[idx-1]) idx++;
        getSubset(nums, ans, sub, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> ans;
        getSubset(nums, ans, sub, 0);
        return ans;
        
    }
};
