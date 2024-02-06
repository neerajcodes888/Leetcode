class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
               vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++)
        {
            string ans = strs[i];
            sort(ans.begin(),ans.end());
            m[ans].push_back(strs[i]);
        }
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        return v; 
    }
};