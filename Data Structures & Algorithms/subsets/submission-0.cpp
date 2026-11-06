class Solution {
public:

    void getSubset(vector<int>& nums, vector<vector<int>>& ans, vector<int>& sub, int i){
        int n = nums.size();
        if(i == n){
            ans.push_back(sub);
            return;
        }
        // Inclusion code
        sub.push_back(nums[i]);
        getSubset(nums, ans, sub, i+1);
        // Backtracking waali step
        sub.pop_back();
        // Exclusion code
        getSubset(nums, ans, sub, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> ans;
        getSubset(nums, ans, sub, 0);
        return ans;
    }
};
