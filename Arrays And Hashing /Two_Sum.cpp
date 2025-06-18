class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> comp;
        vector<int> ans(2);

        for(int i = 0; i < nums.size(); i++){
            comp[nums[i]] = i+1;
        }

        int complement;
           for(int i = 0; i < nums.size(); i++){
            complement = target - nums[i];

            if(comp[complement] != 0 && comp[complement] - 1 != i){
                ans[0] = i;
                ans[1] = comp[complement]-1;
                break;
            }
        }

       
       return ans;
    }
};
