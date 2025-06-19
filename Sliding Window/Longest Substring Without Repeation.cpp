class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 , right = 0 , maxi = 0;
        unordered_set<int> freq;

        while(right < s.length()){
            if(freq.find(s[right]) == freq.end()){
                freq.insert(s[right]);
                maxi = max(maxi , right - left + 1);
                right++;
            }
            else {
                freq.erase(s[left]);
                left++;
            }
        }
        return maxi;
    }
};
