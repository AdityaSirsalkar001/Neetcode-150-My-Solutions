class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
       map<int , int> freq;
        
       for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
       } 

       int temp = 0 , maxi = 0 , back = *min_element(nums.begin() , nums.end());

       for(auto each : freq){

            if(each.first - back <= 1){
                temp++;
            }
            else{
                temp = 1;
            }
            maxi = max(temp , maxi);
            back = each.first;
       }

       return maxi;
    }
};
