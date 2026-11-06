class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int i:nums){
            if(ans.count(i)) return true;
            else ans.insert(i);
        }
        return false;
    }
};