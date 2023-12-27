class Solution {
public:
    int maxScore(string s) {
       int ans=0;
        for(int i=1;i<s.size();i++)
        {
          int  maxi = count(s.begin(),s.begin()+i,'0')+count(s.begin()+i,s.end(),'1');
            ans=max(ans,maxi);
        }
        return ans;
    }
};