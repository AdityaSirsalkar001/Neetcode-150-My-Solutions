class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      
      int n = strs.size();
        map<char , int> freq[n];

        vector<int> visited(strs.size() , 0) , ans(strs.size() , 0) , cnts;

        for(int i = 0; i < strs.size(); i++){
            for(auto c : strs[i]){
                freq[i][c]++;
            }
        }
        
        int cnt = 0;
        
        for(int i = 0; i < strs.size(); i++){
            if(visited[i] != 1){
                cnt++;
                cnts.push_back(i);
                ans[i] = i;
                visited[i] = 1;
                  for(int j = i+1; j < strs.size(); j++){
                    if(freq[i] == freq[j]){
                        visited[j] = 1;
                        ans[j] = i;
                    }
             }
            }
        }

           vector<vector<string>> final(cnt);  
     
        for(int i = 0; i < strs.size(); i++){
            for(int j = 0; j < cnts.size(); j++){
                if(ans[i] == cnts[j]){
                    final[j].push_back(strs[i]);
                }
            }
            
        }
        return final;
    }
};
