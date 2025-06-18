class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = 1;
        vector<int> ans(nums.size());

        int cnt0 = 0;
        int pos0 = 0;
        for(int i = 0; i < nums.size(); i++){
            n *= nums[i];
            if(nums[i] == 0){
                cnt0++;
                pos0 = i;
            }
        }
        if(cnt0 > 1){
            return ans;
        }

        else if(cnt0 == 1){
            int temp = 1;
           for(int i = 0; i < nums.size(); i++){
                if(i != pos0){
                    temp *= nums[i];
                }
           }

           ans[pos0] = temp;
           return ans;
        }
       
       else {
            for(int i = 0; i < nums.size(); i++){
                ans[i] = n / nums[i];
            }
            return ans;
       }
        return ans;
    }
};
