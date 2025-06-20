class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int> freq;
        int ans = 0 , maxf = 0, l = 0;

        for(int r = 0; r < s.size(); r++){
            freq[s[r]]++;
            maxf = max(maxf , freq[s[r]]);

            while(r - l + 1 - maxf> k){
                freq[s[l]]--;
                l++;
            }

            ans = max(ans , r-l+1);
        }
        return ans;
    }
};
