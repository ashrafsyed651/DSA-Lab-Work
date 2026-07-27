class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char> temp;
        int left = 0;
        int ans = 0;

        for(int right = 0;right<s.size();right++){
            while(temp.count(s[right])){
                temp.erase(s[left]);
                left++;
            }
            temp.insert(s[right]);
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};