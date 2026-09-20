class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string w=strs[i];
            sort(w.begin(), w.end());
            if(mp.find(w)!=mp.end())
            {
                mp[w].push_back(strs[i]);
            }
            else
            {
                mp[w]={strs[i]};
            }

        }

        vector<vector<string>> ans;
        for(auto& pair : mp) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
