class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            ++m[s[i]-'a'];
        }
         for(int i=0;i<s.length();i++)
         {
             if(m[s[i]-'a']==1)
                 return i;
         }
        return  -1;
    }
};