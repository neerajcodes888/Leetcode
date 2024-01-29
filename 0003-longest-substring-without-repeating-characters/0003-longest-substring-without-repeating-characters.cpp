class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int maxL=0,start=-1;
      vector<int>v(256,-1);
      for(int i=0;i<s.length();i++)
      {
          if(v[s[i]]>start)
          start=v[s[i]];
          v[s[i]]=i;
          maxL=max(maxL,i-start);
      } 
      return maxL;
    }
};