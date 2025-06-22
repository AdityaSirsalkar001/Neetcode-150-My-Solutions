class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size())
            return "";

     
        map<int, int> in_freq;

        for (int i = 0; i < t.size(); i++) {
            in_freq[t[i]]++;
        }

       
        int la = 0, lf = 0, rf = 0, minlen = INT_MAX;
        int have = 0;
        int need = in_freq.size();
        map<int, int> temp;

        for (int ra = 0; ra < s.size(); ra++) {
            temp[s[ra]]++;

            if (in_freq.count(s[ra]) && in_freq[s[ra]] == temp[s[ra]]) {
                have++;
            }

            while (have == need) {
                if (ra - la + 1 < minlen) {
                    rf = ra;
                    lf = la;
                    minlen = ra - la + 1;
                }

                temp[s[la]]--;
                if (in_freq.count(s[la]) && in_freq[s[la]] > temp[s[la]]) {
                    have--;
                }
                la++;
            }
        }

        if(minlen == INT_MAX) return "";

   return s.substr(lf, minlen);

    }
};
