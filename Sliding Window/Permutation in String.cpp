class Solution {
public:
    bool checkInclusion(string s1, string s2) {

    if(s1.size() > s2.size()) return false;

    vector <int> count1(26 , 0);
    vector <int> count(26 , 0); 

    for(int i = 0; i < s1.size(); i++){
        count[s1[i] - 'a']++;
    }

    for(int i = 0; i < s1.size(); i++){
        count1[s2[i] - 'a']++;
    }

    if(count1 == count) return true;

    for(int i = s1.size(); i < s2.size(); i++){
        count1[s2[i] - 'a']++;
        count1[s2[i-s1.size()] - 'a']--;

        if(count == count1) return true;
    }
    return false;
    }
};
