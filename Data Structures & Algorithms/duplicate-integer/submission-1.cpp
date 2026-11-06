class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i:nums) ans[i]++;
        for(pair<int,int> i:ans){
            if(i.second>1) return true;
        }
        return false;
    }
};