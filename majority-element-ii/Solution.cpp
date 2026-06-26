class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
            int cot1 = 0,cot2 = 0;
            int el1 = 0,el2 = 0;
            for (int num : nums){
                if (cot1 == 0 && el2 != num){
                    cot1 = 1;
                    el1 = num;
                }
                else if (cot2 == 0 && el1 != num){
                    cot2 = 1;
                    el2 = num;
                }
                else if (num == el1) cot1++;
                else if (num == el2) cot2++;
                else{
                    cot1--;
                    cot2--;
                }

            }
            vector<int>final;
            cot1 = cot2 =0;
            for (int num : nums){
                if (num == el1) cot1++;
                else if (num == el2) cot2++;
            }
            if (cot1>nums.size()/3) final.push_back(el1);
            if (cot2>nums.size()/3) final.push_back(el2);
           
            return final;
    }
};