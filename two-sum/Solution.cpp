class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;
        int lef = 0;
        int righ = nums.size() - 1;
        int sum = 0;
        for (int i = 0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
            while(lef<righ){
                sum = ans[lef].first + ans[righ].first;
                if(sum == target){
                    return {ans[lef].second,ans[righ].second};
                break;
                }
                else if(sum>target){
                    righ = righ - 1;
                }
                else{
                    lef = lef +1;
                }
            }
        return {-1,-1};
    }
};