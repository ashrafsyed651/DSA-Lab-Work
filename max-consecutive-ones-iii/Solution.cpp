class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int maxi = 0;
        int zero = 0;
        for(int i = 0;i<nums.size();i++){
            if (nums[i] == 0){
                zero++;
            }
            while(zero>k){
                if (nums[left] == 0) {
                    zero--;
                }
                // Move the left pointer forward
                left++; 
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};