class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int , int> freq;

        for(auto num : nums){
            freq[num]++;
            if(freq[num] > 1){
                return true;
            }
        }

        return false;
    }
};
