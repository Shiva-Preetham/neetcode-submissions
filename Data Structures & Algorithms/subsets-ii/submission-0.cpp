class Solution {
public:
    set<vector<int>>st;
    void solve(int idx,vector<int>&nums,vector<int>&temp){
        if(idx>=nums.size()){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(idx+1,nums,temp);
        temp.pop_back();
        solve(idx+1,nums,temp);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(0,nums,temp);
        vector<vector<int>>result(st.begin(),st.end());
        return result;
        
    }
};