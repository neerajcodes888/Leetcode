class Solution {
public:
    bool buddyStrings(string s, string goal) {
    if(s.size()!=goal.size() || s.size()==1)
        return false;
        vector<int>v;
        vector<int>check(26,0);
        bool flag=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
                v.push_back(i);
            else{
                check[s[i]-'a']++;
                if(check[s[i]-'a']>=2)
                    flag=true;
            }
        }
        if(v.size()>2|| v.size()==1)
            return false;
        if(v.size()==0)
            return flag;
        int i = v[0];
        int j = v[1];
        swap(s[i],s[j]);
        return s==goal;
    }
    
};