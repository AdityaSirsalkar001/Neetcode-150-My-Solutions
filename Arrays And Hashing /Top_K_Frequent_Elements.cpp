class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> freq;

        for(auto each : nums){
            freq[each]++;
        }

        priority_queue <pair<int , int>> ans;
        vector<int> final(k);
        for(auto each : freq){
            ans.push({each.second , each.first});
        }

        for(int i = 0; i < k; i++ && !ans.empty()){
            final[i] = ans.top().second;
            ans.pop();
        }
        return final;
    }
};
