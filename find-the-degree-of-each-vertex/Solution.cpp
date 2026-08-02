class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int sum = 0;
        vector<int> ans;
        for (int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                sum = sum + matrix[i][j];
            }
            ans.push_back(sum);
            sum = 0;
        }
        return ans;
    }
};